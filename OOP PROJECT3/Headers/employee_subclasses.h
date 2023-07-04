#include<iostream>
#include"prco_subclasses.h"

using namespace std;

class SecurityEmployee:public Employee{ 

    public:

        SecurityEmployee();
        ~SecurityEmployee();
        void report();
        void WorkOn(PlaneComponent* x);
        string toString();
        SecurityEmployee* clone(){ SecurityEmployee* x=new SecurityEmployee(*this); return x;}
        
};

class MaintenanceEmployee:public Employee{ 

    public:

        MaintenanceEmployee();
        ~MaintenanceEmployee();
        void report();
        void WorkOn(PlaneComponent* x);
        string toString();
        MaintenanceEmployee* clone(){ MaintenanceEmployee* x=new MaintenanceEmployee(*this); return x;}
};

class CleaningEmployee:public Employee{ 

    public:

        CleaningEmployee();
        ~CleaningEmployee();
        void report();
        void WorkOn(PlaneComponent* x);
        string toString();
        CleaningEmployee* clone(){ CleaningEmployee* x=new CleaningEmployee(*this); return x;}
};