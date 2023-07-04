#include<string>
#include<cstdlib>
#include"h_post1.h"
using namespace std;



class threads{

public:

    threads();
    ~threads();
    void printT();
    void printCHT(string);
    int printCHP(int);
    

private:

    string t_subject;
    string t_creator;

    struct Tdate{

        int day;
        int month;
        int year;

    }t_date;

    int p=(rand()%4);   //number of posts
    post* t_post;   
    
};