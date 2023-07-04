#include<string>
using namespace std;

class post{

public:

    post();
    ~post();
    post(post&);
    post(post*);
    void printP();
    string getcreator();
    void print_list_post();
    
    

private:

    int p_id;
    string p_title;
    string p_creator;
    
    struct Pdate{

        int day;
        int month;
        int year;

    }p_date;

    string p_text;
};