#include<iostream>
#include<cstdlib>
#include<sstream>
#include"planecomponent-employee.h"

using namespace std;

Employee::Employee(){ 
    
    string N_array[]{"Στυλιανός Ψαρά",
                     "Ανδρέας Γεωργίου",
                     "Μαρία Αντωνίου",
                     "Αντώνης Αντωνίου",
                     "Κυριακή Κυριάκου"};
    
    int n=rand()%5;

    name=N_array[n];
    
    cout<<"Employee just created!"<<endl;

}

Employee::~Employee(){ 
    
    cout<<"Employee to be destroyed!"<<endl;

}
 
string Employee::toString(){

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