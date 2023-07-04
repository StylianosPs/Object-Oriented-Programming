#include<iostream>
#include<cstdlib>
#include"plane.h"

using namespace std;

void clone_encrypt_and_print(Object& current);

int main(){

cout<<endl<<".................PLANE....................."<<endl<<endl;

Plane x;

cout<<endl<<"..........................................."<<endl<<endl;

clone_encrypt_and_print(x);

cout<<endl<<"..........................................."<<endl<<endl;

cout<<endl<<".................EMPLOYEE.................."<<endl<<endl;

SecurityEmployee A;
MaintenanceEmployee B;
CleaningEmployee C;

cout<<endl<<endl<<endl;

x.process(A);
x.process(B);
x.process(C);

x.ready_check();

cout<<endl<<"..........................................."<<endl<<endl;
    return 0;
}

void clone_encrypt_and_print(Object& current){

    cout<<endl<<"..........CLONE_ENCRYPT_AND_PRINT.........."<<endl<<endl;

    Object* x;
    int i,j;

    x=current.clone();

    current.equal(x);
    current.identical(x);

    My_String str1;
    str1.set_des(current.toString());

    My_String str2;
    str2.set_des(x->toString());

    for(j=0; j<4; j++){
        i=str2.lenght();
        i=random()%i;
        str2.at(i,'*');
    }

    cout<<endl<<endl;
    str1.print();
    cout<<endl;
    str2.print();

    cout<<endl;
    str1.concat(str2);
    cout<<"LENGTH: "<<str1.lenght()<<endl<<endl;

    if((str1.lenght()%2)==0)
        cout<<str1.at((str1.lenght()/2)-1)<<str1.at(str1.lenght()/2)<<endl;
    else 
        cout<<str1.at(str1.lenght()/2)<<endl;

    str1.clear();
    cout<<endl<<"LENGTH2: "<<str1.lenght()<<endl<<endl;

    delete x;
    
}