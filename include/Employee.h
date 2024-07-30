#ifndef _Employee_h_
#define _Employee_h_

using namespace std;

class Employee

{
    public:
        Employee();
        ~Employee();
        virtual void NotificationDelivered() = 0;
        virtual void setName(string n) = 0;
        virtual void setLastName(string l) = 0;
        virtual void setSalary(string s) = 0;
        virtual void setArea(string a) = 0;
        virtual string getName() = 0;
        virtual string getLastName() = 0;
        virtual string getSalary() = 0;
        virtual string getArea() = 0;
        virtual void work() = 0;
        virtual void setMensaje(string m) = 0;
        virtual string getMensaje() = 0;

    private:

    string name;
    string lastName;
    string saly;
    string area;
    string mensaje;
    
};

#endif