#include<iostream>
#include<string>
#include"h_forum1.h"

using namespace std;

forum::forum(string t){

    f_threads=new threads[f];
    f_title=t;

    cout<<"Forum with title: "<< f_title << " has just been created!"<<endl<<endl;
    
    print_threads();

    
}

 forum::~forum(){

    cout<<endl<<"Forum with title: "<<f_title << " is about to be destroyed"<<endl;
    delete []f_threads;                
}

void forum::print_threads(){

    int i;

    for(i=0;i<f;i++){                   //print all the threads for the forum
        cout<<i+1<<".";
        f_threads[i].printT();
    }

}
void forum::print_CHthread(string s){

    int i;

    for(i=0;i<f;i++)
        f_threads[i].printCHT(s);        //search all the threads 
}

int forum::print_CHpost(int pn){

    int k;
    int i;

    for(i=0;i<f;i++){                    //search all the threads for the post
        k=f_threads[i].printCHP(pn);      

        if(k==1){                        //if you found it return 1 and stop
            return 1;
        }
    }

    return 0;

}

