#ifndef _Seller_h_
#define _Seller_h_
#include <Employee.h>

class Seller : public Employee

{
    public:
        Seller();
        ~Seller();
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