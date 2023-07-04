#include<iostream>
#include<string>
#include"h_list.h"
using namespace std;

list::list(){}

list::list(post& tr_post){
    
    list* n_node=new list;

    n_node->l_post=new post(tr_post);

    head=n_node;

    n_node->next=NULL;

}

list::list(list* n_list){

    list* ptr=n_list->head;

    list* n_node=new list;


    head=n_node;

    n_node->l_post=new post(ptr->l_post);

    n_node->next=NULL;

    ptr=ptr->next;

    while(ptr!=NULL){
        next_post(ptr->l_post);
        ptr=ptr->next;
    }

}

void list::next_post(post* tr_post){

    list* pt=head;

    list* n_node=new list;

    while(pt->next!=NULL){
        pt=pt->next;
    }


    pt->next=n_node;

    n_node->l_post=new post(tr_post);

    n_node->next=NULL;
}

void list::next_post(post& tr_post){

    list* pt=head;

    list* n_node=new list;

    while(pt->next!=NULL){
        pt=pt->next;
    }


    pt->next=n_node;

    n_node->l_post=new post(tr_post);

    n_node->next=NULL;
}

void list::print_list(){

    int id,d,m,y;
    string ti,te;
    list* ptr;

    ptr=head;
    while(ptr!=NULL){

        ptr->l_post->print_list_post();
        ptr=ptr->next;

    }
}

void list::add_list(list* l){

    list* ptr;
    list* ptr2;
   
    ptr=head;

    while(ptr->next!=NULL)
        ptr=ptr->next;
    
    ptr2=l->head;

    while(ptr2!=NULL){

        list* next_node=new list;

        next_node->l_post=new post(ptr2->l_post);

        ptr->next=next_node;
        ptr2=ptr2->next;
        ptr=ptr->next;
    }
    

}

void list::DeleteList(){
    
    list* ptr=head;
    list* prev;

    while(ptr!=NULL){
        prev=ptr;
        ptr=ptr->next;

        delete prev->l_post;
        delete prev;
    }
}



