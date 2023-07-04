#include<iostream>
#include<cstdlib>
#include<sstream>
#include"plco_subclasses.h"

using namespace std;

//PassengerCompartment

PassengerCompartment::PassengerCompartment(){ 

    x=rand()%2;

	if(x==1)
		paco=new PassengerCompartment;
    
    cout<<"PassengerCompartment just created!"<<endl;

}

PassengerCompartment::~PassengerCompartment(){ 

    if(x==1)
        delete paco;
    
    cout<<"PassengerCompartment to be destroyed!"<<endl;
}

void PassengerCompartment::ready_check(){

    if(emp==2){

        cout<<endl<<toString()<<" PassengerCompartment OK!"<<endl;
        PlaneComponent::ready_check();
    }

}

string PassengerCompartment::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);

    return str;
}

void PassengerCompartment::process(Employee& x){

    emp++;
    cout<<"PassengerCompartment ";
    x.WorkOn(this);

    if(this->x==1)
        paco->process(x);
}

PassengerCompartment* PassengerCompartment::clone(){ 
    
    PassengerCompartment* x=new PassengerCompartment(*this); 
                                        
    if(this->x==1)
        x->paco=this->paco->clone();

    return x;
} 

//PrivateCompartment

PrivateCompartment::PrivateCompartment(){ 

    
    cout<<" PrivateCompartment just created!"<<endl;

}

PrivateCompartment::~PrivateCompartment(){ 
    
    cout<<"PrivateCompartment to be destroyed!"<<endl;
}

void PrivateCompartment::ready_check(){

        cout<<toString()<<" PrivateCompartment OK!"<<endl;
        PlaneComponent::ready_check();
}

string PrivateCompartment::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);

    return str;
}