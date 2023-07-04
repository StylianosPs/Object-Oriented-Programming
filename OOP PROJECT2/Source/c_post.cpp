#include<iostream>
#include<string>
#include<cstdlib>
#include"h_post.h"
using namespace std;

post::post(){

    static int id=0;

    string title[4]{"Ερώτηση",
                    "Απάντηση",
                    "Πρόβλημα",
                    "Αντικειμενοστραφής"};
    int t=(rand()%4);
    string creator[4]{"Ανδρέας Γεωργίου",
                      "Ελένη Παπαγεωργίου",
                      "Κωνσταντίνος Κυριάκου",
                      "Μάρκος Αντωνίου"};
    int c=(rand()%4);
    string text[]{"Ευχαριστώ", 
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

post::post(post& tr_post){

    p_id=tr_post.p_id;
    p_title=tr_post.p_title;
    p_text=tr_post.p_text;
    p_date.day=tr_post.p_date.day;
    p_date.month=tr_post.p_date.month;
    p_date.year=tr_post.p_date.year;

}

post::post(post* tr_post){

    p_id=tr_post->p_id;
    p_title=tr_post->p_title;
    p_text=tr_post->p_text;
    p_date.day=tr_post->p_date.day;
    p_date.month=tr_post->p_date.month;
    p_date.year=tr_post->p_date.year;

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

string post:: getcreator(){

    return p_creator;
}


void post::print_list_post(){

    cout<<endl<<"POST ID: "<<p_id<<endl;
    cout<<"TITLE: "<<p_title<<endl;
    cout<<"DATE: "<<p_date.day<<"."<<p_date.month<<"."<<p_date.year<<endl;
    cout<<"TEXT: "<< p_text<<endl;

}


