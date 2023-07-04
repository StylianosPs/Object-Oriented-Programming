#include<iostream>
#include"planecomponent-employee.h"

using namespace std;

class PassengerCompartment:public PlaneComponent{ 

    private:

       PassengerCompartment* paco;
       int x;
       int emp=0;
        

    public:

        PassengerCompartment();
        ~PassengerCompartment();

        void ready_check();
        void process(Employee& x);
        string toString();
        PassengerCompartment* clone();
        
};

class PrivateCompartment:public PlaneComponent{ 

    public:

        PrivateCompartment();
        ~PrivateCompartment();

        virtual void ready_check();
        virtual void process(Employee& x){};
        virtual string toString();
        PrivateCompartment* clone(){ PrivateCompartment* x=new PrivateCompartment(*this); return x;}
      
};