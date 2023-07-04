#include<iostream>
#include<sstream>
#include"prco_subclasses.h"

using namespace std;

//EquipmenCompartment

EquipmentCompartment::EquipmentCompartment(){ 
    
    cout<<"EquipmentCompartment just created!"<<endl;

}

EquipmentCompartment::~EquipmentCompartment(){ 
    
    cout<<"EquipmentCompartment to be destroyed!"<<endl;
}

void EquipmentCompartment::ready_check(){

    if(emp==2){

        cout<<endl<<"EquipmentCompartment OK!"<<endl;
        PrivateCompartment::ready_check();
    }
}

string EquipmentCompartment::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);

    return str;
}

void EquipmentCompartment::process(Employee& x){

    emp++;
    cout<<"EquipmentCompartment ";
    x.WorkOn(this);
}

//CargoBay

CargoBay::CargoBay(){ 
    
    cout<<"CargoBay just created!"<<endl;

}

CargoBay::~CargoBay(){ 
    
    cout<<"CargoBay to be destroyed!"<<endl;
}

void CargoBay::ready_check(){

    if(emp==3){
        
        cout<<endl<<"CargoBay OK!"<<endl;
        PrivateCompartment::ready_check();
    }
}

string CargoBay::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);

    return str;
}

void CargoBay::process(Employee& x){

    emp++;
    cout<<"CargoBay ";
    x.WorkOn(this);
}