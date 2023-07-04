#include<iostream>
#include"object-string.h"

using namespace std;

class Employee;

class PlaneComponent:public Object{ 

    protected:

        My_String description;

    public:

        PlaneComponent();
        ~PlaneComponent();

        virtual void ready_check();
        string toString();
        virtual void process( Employee& x)=0;
        
};

class Employee:public Object{ 

    protected:

        string name;

    public:

        Employee();
        ~Employee();
        virtual void WorkOn(PlaneComponent* x )=0;
        virtual void report()=0;
        string toString();

};

