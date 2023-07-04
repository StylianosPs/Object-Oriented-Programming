#include<iostream>
#include<string>
#include<sstream>
#include"object-string.h"

using namespace std;

//Object

Object::Object(){
    
    static int i=0;
    ID=i;

    cout<<"Object just created!"<<endl;

    i++;
}

Object::~Object(){

    cout<<"Object to be destroyed!"<<endl;
}

string Object::toString(){

    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);

    return str;
}

void Object::equal(Object* cmp){

    if(this->ID==cmp->ID)
        cout<<endl<<"The Objects are Equal!"<<endl;
    else
        cout<<endl<<"The Objects are not Equal!"<<endl;
    cout<<"___________________________"<<endl<<endl;

}

void Object::identical(Object* cmp){

    if( this==cmp)
        cout<<endl<<"The Objects are Identical"<<endl;
    else
        cout<<endl<<"The Objects is not Identical"<<endl;
    cout<<"___________________________"<<endl<<endl;

}

//  My_String

My_String::My_String(){ 

    cout<<"My_String just created!"<<endl;

}

My_String::~My_String(){ 

    cout<<"MY_String to be destroyed!"<<endl;
}

string My_String::toString(){
    
    string str;
    string s;
    stringstream ss;

    ss<<ID;
    ss>>s;
    
    str.append("ID: ");
    str.append(s);

    return str;
}

int My_String::lenght(){

    return des.length();

}

void My_String::clear(){

    des.clear();

}

void My_String::concat(My_String& x){
    
    des.append(x.des);

}

char My_String::at(int x){

    return des.at(x);

}
        
void My_String::at(int x,char j){

    char c=des.at(x);
    updateAt(x,j);

}
        
void My_String::updateAt(int x,char j){

    des[x]=j;

}

void My_String::print(){

    cout<<des<<endl;

}


