#include<iostream>
#include"employee_subclasses.h"

using namespace std;

class Plane:public Object{ 

    private:

        My_String description;
        string title;
        int xor_epivaton;
        int plithos_pc;

        CargoBay planeCB;
        EquipmentCompartment planeEC[3];
        PassengerCompartment** planePC;

        void xoritikotita_epivates();
        bool emp1=false;
        bool emp2=false;
        bool emp3=false;

    public:

        Plane();
        ~Plane();

        string get_title();
        int get_xoritikotita();
        int get_plithos_xoron();
        string toString();
        void ready_check(); 
        void process(SecurityEmployee& x);
        void process(MaintenanceEmployee& x);
        void process(CleaningEmployee& x);
        Plane* clone();
};