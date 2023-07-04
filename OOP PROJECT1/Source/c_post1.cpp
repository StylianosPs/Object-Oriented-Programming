#include<iostream>
#include<string>
#include<cstdlib>
#include"h_post1.h"
using namespace std;

post::post(){

    static int id=0;

    string title[4]{"Ερώτηση",                  //array with titles 
                    "Απάντηση",
                    "Πρόβλημα",
                    "Αντικειμενοστραφής"};
    int t=(rand()%4);                           

    string creator[4]{"Ανδρέας Γεωργίου",       //array with creators names
                      "Ελένη Παπαγεωργίου",
                      "Κωνσταντίνος Κυριάκου"
                      "Μάρκος Αντωνίου"};
    int c=(rand()%4);                           

    string text[]{"Ευχαριστώ",                  //array with text
                  "έχω μια ερώτηση",
                  "Παρακαλώ",
                  "Μπορείτε να εξηγήσετε αυτό το σημείο"};
    int te=(rand()%4);
    
    p_id=id;
    p_title=title[t];
    p_creator=creator[c];
    p_text=text[te];
    p_date.day=24;
    p_date.month=11;
    p_date.year=2019;
    id++;
    
    cout<<endl<<"POST ID: "<< p_id <<endl ;
    cout<<"TITLE: "<< p_title << endl;
    cout<<"CREATOR:"<< p_creator << endl; 
    cout<<"DATE:"<< p_date.day << "." << p_date.month << "." << p_date.year << endl;
    cout<<"TEXT:"<<p_text<<endl;

}

 post::~post(){

    cout<<"Post number: "<< p_id << " is about to be destroyed"<<endl;

}

void post::printP(){

    cout<<endl<<"POST ID: "<<p_id<<endl;
    cout<<"TITLE: "<<p_title<<endl;
    cout<<"CREATOR: "<<p_creator<<endl;
    cout<<"DATE: "<<p_date.day<<"."<<p_date.month<<"."<<p_date.year<<endl;
    cout<<"TEXT: "<< p_text<<endl;

}

int post::CheckPrintPost(int pn){

    if(p_id==pn){                               //if you find the post print it else return 0

        cout<<"...........................................";
        cout<<endl<<"SELECTED POST:";
        cout<<endl<<"POST ID: "<<p_id<<endl;
        cout<<"TITLE: "<<p_title<<endl;
        cout<<"CREATOR: "<<p_creator<<endl;
        cout<<"DATE: "<<p_date.day<<"."<<p_date.month<<"."<<p_date.year<<endl;
        cout<<"TEXT: "<< p_text<<endl;
        cout<<"...........................................";
        return 1;

    }

    return 0;
}
