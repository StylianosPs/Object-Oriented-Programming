#include<string>
#include<cstdlib>
#include"h_threads1.h"

using namespace std;

class forum{

public:
   
    forum(string);
    ~forum();
    void print_CHthread(string);
    int print_CHpost(int);

private:

    void print_threads();

    int f=(rand()%7 + 1);  //number of threads
    string f_title;
    threads* f_threads; 
    

};