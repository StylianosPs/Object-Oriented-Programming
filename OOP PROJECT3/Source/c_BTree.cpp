#include<iostream>
#include<string>
#include"h_BTree.h"


using namespace std;
tree::tree(){

}

tree::tree( threads& th){

    int i,x,No;
    string cr;
    list b_list;


    No=th.get_ArrayNumber();               //get the number of psots 

    th.get_creator(cr);

    root=new tree;                         //create the root of the tree
   
    root->b_creator=cr;
    root->b_list=new list(th.get_post());  //get the post for the first node of the list
    root->left=NULL;
    root->right=NULL;

    for(i=0; i<(No-1); i++){               //loop for the insertion of the tree
        
        th.get_creator(cr);
        tree* pt=root;
        tree* prev=root;

        while(pt!=NULL){                   

            x=cr.compare(pt->b_creator);
          
            if(x==0)                       //if the name of the next creator is = with the current
                break;
            
            if(x>0){                       //if the name of the next creator is > with the current
                prev=pt;
                pt=pt->right;
            }
            else{                          //if the name of the next creator is < with the current
                prev=pt;
                pt=pt->left;
            }
        }

        if(x==0){                          //if the name of then next creator is = add next list node
            pt->b_list->next_post(th.get_post());

        }
        else
            if(x>0){                       //if the name of the next creator is > add new tree node right
                tree* N_tnode=new tree;
                prev->right=N_tnode;
                N_tnode->b_creator=cr;
                N_tnode->b_list=new list(th.get_post());
                N_tnode->left=NULL;
                N_tnode->right=NULL;  
            }
            else{                           //if the name of the next creator is < add new tree node left
                tree* N_tnode=new tree;
                prev->left=N_tnode;
                N_tnode->b_creator=cr;
                N_tnode->b_list=new list(th.get_post());;
                N_tnode->left=NULL;
                N_tnode->right=NULL;
            }

    }
}

tree::~tree(){
    delete_tree(root);
}

void tree::Call_print(){
    print(root);
}

void tree::print( tree *root){              //inorder printing

	if(root->left!=NULL)
		print(root->left);

	cout<<endl<<endl<<"CREATOR: "<<root->b_creator<<endl<<"__________________________________"<<endl<<endl;
    
    root->b_list->print_list();

	if(root->right!=NULL)
		print(root->right);

}

void tree::add_tree(tree* t){

    get_node(root,t);
    
}

void tree::get_node(tree* root, tree* t){   //take all the tree nodes 

    if(root->left!=NULL)
		get_node(root->left,t);
	
    if(root->right!=NULL)
		get_node(root->right,t);

    t->enhance(root);                       
}

void tree::enhance(tree* node){             //take the tree node and add them at the first tree

    int x;
    tree* pt=root;
    tree* prev=root;

        while(pt!=NULL){

            x=node->b_creator.compare(pt->b_creator);
          
            if(x==0)
                break;
            
            if(x>0){
                prev=pt;
                pt=pt->right;
            }
            else{
                prev=pt;
                pt=pt->left;
            }
        }

        if(x==0)                            //if the name of the next creator is = add the list 

        pt->b_list->add_list(node->b_list);

        else
            if(x>0){                        //if the name of the next creator is > add new tree node right
                tree* N_tnode=new tree;
                prev->right=N_tnode;
                N_tnode->b_creator=node->b_creator;
                N_tnode->b_list=new list(node->b_list);
                N_tnode->left=NULL;
                N_tnode->right=NULL;  
            }
            else{                            //if the name of the next creator is < add new tree node left
                tree* N_tnode=new tree;
                prev->left=N_tnode;
                N_tnode->b_creator=node->b_creator;
                N_tnode->b_list=new list(node->b_list);
                N_tnode->left=NULL;
                N_tnode->right=NULL;  
            }

}

void tree::delete_tree(tree* r){              //delete the tree nodes from the last to the root
        
    if(r==NULL)
        return;
    
    delete_tree(r->left);
    delete_tree(r->right);

    r->b_list->DeleteList();
    delete r->b_list;
    delete r;
}