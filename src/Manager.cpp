#include <iostream>
#include <string>
#include <Manager.h>

Manager :: Manager()
{
    cout  << "\n\n------------------------" << "\nConstructor de Manager\n" << "------------------------\n" ;
}

Manager :: ~Manager()
{
    cout  << "\n------------------------" << "\nDestructor de Manager\n" << "------------------------" ;
}

void Manager :: NotificationDelivered()
{
    cout << "\nLa Notificación fue Entregada a este trabajador\n";
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
    cout << "El Manager esta controlando";
}


