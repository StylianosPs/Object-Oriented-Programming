#include <iostream> 
#include<string>

using namespace std;

class Object{

    protected:

        int ID;
    
    public:
    
        Object();
        virtual ~Object();

        int get_ID(){ return ID;}
        virtual string toString();
        void equal(Object* cmp);
        void identical(Object* cmp);
        virtual Object* clone()=0;

};

class My_String:public Object{ 

    private:

        string des;
    
    public:

        My_String();
        ~My_String();
        
        void set_des(string s){des=s;}

        string toString();
        int lenght();
        void clear();
        void concat(My_String& x);
        char at(int x);
        void at(int x,char j);
        void updateAt(int x,char j);
        void print();
        My_String* clone(){ My_String* x=new My_String(*this); return x;}

};