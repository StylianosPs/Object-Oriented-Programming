#include<iostream>
#include"plco_subclasses.h"

using namespace std;

class EquipmentCompartment:public PrivateCompartment{ 

    private:

        int emp=0;

    public:

        EquipmentCompartment();
        ~EquipmentCompartment();

        void ready_check();
        void process(Employee& x);
        string toString();
        EquipmentCompartment* clone(){ EquipmentCompartment* x=new EquipmentCompartment(*this); return x;}
};

class CargoBay:public PrivateCompartment{ 

    private:

        EquipmentCompartment pec;
        int emp=0;
     

    public:

        CargoBay();
        ~CargoBay();

        void ready_check();
        void process(Employee& x);
        string toString();
        CargoBay* clone(){ CargoBay* x=new CargoBay(*this); return x;}
        
};