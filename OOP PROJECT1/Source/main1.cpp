#include<iostream>
#include<string>
#include"h_forum1.h"


using namespace std;

int main(){
    int k;
    int pn=(rand()%5);

    forum f_forum("Αντικειμενοστραϕής Προγραμματισμός");        

    f_forum.print_CHthread("Κανόνες και χρήσιμες πληροϕορίες");

    k=f_forum.print_CHpost(pn);                         

    
    if(k==0)                                            //if the random post doesn't exist 
         cout<<endl<<"ΔΕΝ ΥΠΑΡΧΕΙ ΤΟ POST: "<<pn<<endl;
    

    
    return 0;
}
