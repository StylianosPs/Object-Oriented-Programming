#include<string>
#include"h_threads.h"
using namespace std;

class list{
public:

    list();
    list(post&);
    list(list*);
    void next_post(post&);
    void next_post(post*);
    void print_list();
    void add_list(list* );
    void DeleteList();
    

private:


        post* l_post;

        list* next;

        list* head;

};
