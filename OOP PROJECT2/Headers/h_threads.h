#include<string>
#include<cstdlib>
#include"h_post.h"
using namespace std;



class threads{

public:

    threads();
    ~threads();
    void printT();
    post& get_post();
    void get_creator(string& cr);
    int get_ArrayNumber();

private:

    string t_subject;
    string t_creator;

    struct Tdate{

        int day;
        int month;
        int year;

    }t_date;

    int p=(rand()%7+1);
    post* t_post;
    
};