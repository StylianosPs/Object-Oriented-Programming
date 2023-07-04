#include<iostream>
#include<string>
#include"h_forum.h"

using namespace std;

forum::forum(string t){

    f_threads=new threads[f];
    f_tree=new tree*[f];
    
    f_title=t;

    cout<<"Forum with title: "<< f_title << " has just been created!"<<endl<<endl<<endl;
    
    print_threads();

}

forum::~forum(){

     int i;

    cout<<endl<<"Forum with title: "<<f_title << " is about to be destroyed"<<endl;
   
    for(i=0; i<f; i++)
        delete f_tree[i];

    delete[] f_tree;

    delete[] f_threads;   

}

void forum::print_threads(){

    int i;

    for(i=0;i<f;i++){
        cout<<i+1<<".";
        f_threads[i].printT();
    }

}

void forum::print_sorted(){

    int i; 

    for(i=0;i<f;i++){                       //creat tree for every thread 
        f_tree[i]=new tree(f_threads[i]);
    }
    
    for(i=1;i<f;i++)                        //add all the trees at the first
        f_tree[i]->add_tree(f_tree[0]);

    cout<<endl<<"............................................"<<endl;
    f_tree[0]->Call_print();                //print the first tree
    cout<<endl<<"............................................"<<endl;
  
}


