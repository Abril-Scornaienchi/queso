#ifndef _Manager_h_
#define _Manager_h_
#include <Employee.h>

class Manager : public Employee

{
    public:
        Manager();
        ~Manager();
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