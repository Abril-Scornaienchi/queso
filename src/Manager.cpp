#include <iostream>
#include <string>
#include <Manager.h>

Manager :: Manager()
{
    cout  << "\n\n------------------------" << "\nThe Manager Constructor\n" << "------------------------\n" ;
}

Manager :: ~Manager()
{
    cout  << "\n------------------------" << "\nThe Manager Deconstructor\n" << "------------------------" ;
}

void Manager :: NotificationDelivered()
{
    cout << "\nThe Notification was Delivered to this worker\n";
}

void Manager :: setName(string n)
{
    name = n;
}

void Manager :: setLastName(string l)
{
    lastName = l;
}

void Manager :: setSalary(string s)
{
    saly = s;
}

void Manager :: setArea(string a)
{
    area = a;
}

void Manager :: setMensaje(string m)
{
    mensaje = m;
}

string Manager :: getName()
{
    return name;
}

string Manager :: getLastName()
{
    return lastName;
}

string Manager :: getSalary()
{
    return saly;
}

string Manager :: getArea()
{
    return area;
}

string Manager :: getMensaje()
{
    return mensaje;
}

void Manager :: work()
{
    cout << "The Manager is controlling";
}


