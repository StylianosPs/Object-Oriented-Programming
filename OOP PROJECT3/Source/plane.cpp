#include<iostream>
#include<cstdlib>
#include<sstream>
#include"plane.h"

using namespace std;

Plane::Plane(){ 

    string T_array[]{"Boeing 787",
                     "Cirrus SR22",
                     "Learjet 23",
                     "Gulfstream G500",
                     "Boeing 747"};
    
    int t=random()% 5;
    xoritikotita_epivates();

    title=T_array[t];

    description.set_des(toString());

    cout<<"Plane just created!"<<endl;
    
}

Plane::~Plane(){ 

    int i;

    cout<<"Plane to be destroyed!"<<endl;

    for(i=0; i<plithos_pc; i++)
        delete planePC[i];

    delete[] planePC;
    
}

string Plane::toString(){
    
    string str;
    string s,ss,sss;
    stringstream st,st1,st2;

    st<<ID;
    st>>s;

    st1<<xor_epivaton;
    st1>>ss;

    st2<<plithos_pc;
    st2>>sss;

    str="ID: ";
    str.append(s);
    str.append(" TITLE: ");
    str.append(title);
    str.append(" Passenger Capacity: ");
    str.append(ss);
    str.append(" Passenger Compartments: ");
    str.append(sss);

    return str;
}

string Plane::get_title(){

    return title;

}

int Plane::get_xoritikotita(){

    return xor_epivaton;
}

int Plane::get_plithos_xoron(){

    return plithos_pc;
}
        
void Plane::ready_check(){

    if(emp1==true && emp2==true && emp3==true){
        cout<<endl;
        description.print();
        cout<<"Plane ready to take off!"<<endl;
    }

} 

void Plane::xoritikotita_epivates(){

    int i;
    plithos_pc=rand()%5+1;
    xor_epivaton=rand()%300+100;



    planePC=new PassengerCompartment*[plithos_pc];

    for(i=0; i<plithos_pc; i++)
        planePC[i]=new PassengerCompartment;
    
}

 void Plane::process(SecurityEmployee& x){

    int i=0; 

    for(i=0; i<plithos_pc; i++)
        planePC[i]->process(x);

    for(i=0; i<3; i++)
        planeEC[i].process(x);

    planeCB.process(x);

    emp1=true;


 }

 void Plane::process(MaintenanceEmployee& x){
    int i=0;

    for(i=0; i<3; i++)
        planeEC[i].process(x);

    planeCB.process(x);

    emp2=true;

   
 }

 void Plane::process(CleaningEmployee& x){

    int i=0;

    for(i=0; i<plithos_pc; i++)
        planePC[i]->process(x);

    planeCB.process(x);

    emp3=true;

 }

 Plane* Plane::clone(){ 
     
    int i;
    Plane* x=new Plane(*this); 
    x->planePC=new PassengerCompartment*[plithos_pc];
                    
    for(i=0; i<plithos_pc; i++)
        x->planePC[i]=this->planePC[i]->clone();
        
    return x; 
}

 