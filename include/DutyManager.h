#ifndef _DutyManager_h_
#define _DutyManager_h_
#include <Employee.h>

class DutyManager : public Employee

{
    public:
        DutyManager();
        ~DutyManager();
        void NotificationDelivered();
        void setName(string n);
        void setLastName(string l);
        void setSalary(string s);
        void setArea(string a);
        string getName();
        string getLastName();
        string getSalary();
        string getArea();
        void work();
        void setMensaje(string m);
        string getMensaje();

    private:

    string name;
    string lastName;
    string saly;
    string area;
    string mensaje;
};

#endif