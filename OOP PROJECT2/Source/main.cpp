#include<iostream>
#include<string>
#include"h_forum.h"


using namespace std;

int main(){
    int k;
    int pn=(rand()%5);

    forum f_forum("Αντικειμενοστραϕής Προγραμματισμός");

    f_forum.print_sorted();
    
    
    return 0;
}
