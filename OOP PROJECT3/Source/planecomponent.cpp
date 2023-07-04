#include<iostream>
#include<sstream>
#include"planecomponent-employee.h"

using namespace std;


PlaneComponent::PlaneComponent(){ 

    description.set_des(toString());

    cout<<"PlaneComponent just created!"<<endl;

}

PlaneComponent::~PlaneComponent(){ 

    cout<<"PlaneComponent to be destroyed!"<<endl;

}

string PlaneComponent::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);

    return str;
}

void PlaneComponent::ready_check(){

        cout<<"The PlaneComponent is ready!"<<endl<<endl;

}
       
