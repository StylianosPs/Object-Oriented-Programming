#include<string>
#include<cstdlib>
#include"h_BTree.h"

using namespace std;

class forum{

public:
   
    forum(string);
    ~forum();
    void print_sorted(); 
    
private:

    void print_threads();

    int f=(rand()%10 + 1);
    string f_title;
    threads* f_threads; 
    tree** f_tree;

};