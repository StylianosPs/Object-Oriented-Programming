#include<iostream>
#include<string>
#include<cstdlib>
#include"h_threads.h"
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

post& threads::get_post(){

    static int i=0;
    int j;

    if(i==p-1){
        j=i;
        i=0;
        return t_post[j];
    }else{
        
        i++;
        return t_post[i-1];
    }

}
void threads::get_creator(string& cr){
    
    static int i=0;

    cr=t_post[i].getcreator();

    i++;

    if(i==p)
        i=0;
    
}

int threads::get_ArrayNumber(){

    return p;
}
