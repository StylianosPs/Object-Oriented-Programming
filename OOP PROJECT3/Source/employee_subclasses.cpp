#include<iostream>
#include"employee_subclasses.h"
#include<sstream>

using namespace std;

//SecurityEmployee

SecurityEmployee::SecurityEmployee(){ 
    
    cout<<"SecurityEmployee just created!"<<endl;
}

SecurityEmployee::~SecurityEmployee(){ 
    
    cout<<"SecurityEmployee to be destroyed!"<<endl;
}

void SecurityEmployee::report(){

    cout<<"Security OK!"<<endl;
}

string SecurityEmployee::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);
    str.append(" Employee Name: ");
    str.append(name);

    return str;
}

void SecurityEmployee::WorkOn(PlaneComponent* x){

    report();
    x->ready_check();

}


//MaintenanceEmployee

MaintenanceEmployee::MaintenanceEmployee(){ 

    cout<<"MaintenanceEmployee just created!"<<endl;
}

MaintenanceEmployee::~MaintenanceEmployee(){ 
    
    cout<<"MaintenanceEmployee to be destroyed!"<<endl;
}

void MaintenanceEmployee::report(){

    cout<<"Maintenance OK!"<<endl;
}

string MaintenanceEmployee::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);
    str.append(" Employee Name: ");
    str.append(name);

    return str;
}

void MaintenanceEmployee::WorkOn(PlaneComponent* x){

    report();
    x->ready_check();

}

//CleaningEmployee

CleaningEmployee::CleaningEmployee(){ 
    
    cout<<"CleaningEmployee just created!"<<endl;
}

CleaningEmployee::~CleaningEmployee(){ 
    
    cout<<"CleaningEmployee to be destroyed!"<<endl;
}

void CleaningEmployee::report(){

    cout<<"Cleaning OK!"<<endl;
}

string CleaningEmployee::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);
    str.append(" Employee Name: ");
    str.append(name);

    return str;
}

void CleaningEmployee::WorkOn(PlaneComponent* x){

    report();
    x->ready_check();
}