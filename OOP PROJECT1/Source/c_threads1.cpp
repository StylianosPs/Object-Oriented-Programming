#include<iostream>
#include<string>
#include<cstdlib>
#include"h_threads1.h"
using namespace std;

 threads::threads(){
    
    static int x=0;
   
    t_post=new post[p];

    string subject[4]{"Composition",
                      "Δυαδικά Δένδρα",
                      "Namespace",
                      "Default"};

    int s=(rand()%4);
    string creator[4]{"Ανδρέας Γεωργίου",
                      "Ελένη Παπαγεωργίου",
                      "Κωνσταντίνος Κυριάκου",
                      "Μάρκος Αντωνίου"};
    int c=(rand()%4);
    
    if(x!=0){
        t_subject=subject[s];
    }
    else{
        t_subject="Κανόνες και χρήσιμες πληροϕορίες";
        x=1;
    } 
        t_creator=creator[c];
        t_date.day=24;
        t_date.month=11;
        t_date.year=2019;
    
  
    
    cout<<endl<<"Thread with subject: "<< t_subject <<" has just been created!"<<endl<<endl;
     
 }

 threads::~threads(){

    cout<<endl<<"Thread with subject: "<< t_subject << " is about to be destroyed"<<endl;
    delete []t_post;
}

void threads::printT(){
    cout<<t_subject<<endl;
}
    
void threads::printCHT(string s){

    if(t_subject==s){                          //if the thread is ("Κανόνες και χρήσιμες πληροϕορίες")

        int i;

        cout<<"..........................................."<<endl;
        cout<<endl<<"SELECTED THREAD:"<<endl;
        cout<<"SUBJECT: "<<t_subject<<endl;
        cout<<"CREATOR: "<<t_creator<<endl;
        cout<<"DATE: "<<t_date.day<<"."<<t_date.month<<"."<<t_date.year<<endl;

        cout<<endl<<"POSTS:"<<endl;

        for(i=0; i<p; i++)                     //print all the post of the thread ("Κανόνες και χρήσιμες πληροϕορίες")
            t_post[i].printP();
        
        cout<<"..........................................."<<endl;
    }
}

int threads::printCHP(int pn){
    int k;
    int i;

    for(i=0; i<p; i++){
        k=t_post[i].CheckPrintPost(pn);        //search all the post 

        if(k==1){                              //if you find it return 1 and stop
            return 1;
        }
    }

    return 0;
}
