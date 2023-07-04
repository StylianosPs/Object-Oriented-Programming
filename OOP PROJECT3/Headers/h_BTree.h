#include<string>

#include"h_list.h"

using namespace std;

class tree{
    
public:  
    
    tree();
    tree(threads& );
    ~tree();
    void Call_print();
    void add_tree(tree*);
    void enhance(tree*);
    

private:

    void delete_tree(tree*);
    void print(tree* root);
    void get_node(tree*,tree*);

    string b_creator;
    list* b_list;
    tree* left;
    tree* right;

    tree* root;
       
};
