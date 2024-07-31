#include <iostream>
#include <string>
#include <DutyManager.h>

DutyManager :: DutyManager()
{
    cout << "\n\n----------------------------" << "\nConstructor de DutyManager\n" << "----------------------------";
}

DutyManager :: ~DutyManager()
{
    cout << "\n\n----------------------------" << "\nDestructor de DutyManager\n" << "----------------------------\n";
}

void DutyManager :: NotificationDelivered()
{
    cout << "\nLa Notificación ha sido Entregada a este trabajador\n";
}

void DutyManager :: setName(string n)
{
    name = n;
}

void DutyManager :: setLastName(string l)
{
    lastName = l;
}

void DutyManager :: setSalary(string s)
{
    saly = s;
}

void DutyManager :: setArea(string a)
{
    area = a;
}

void DutyManager :: setMensaje(string m)
{
    mensaje = m;
}

string DutyManager :: getName()
{
    return name;
}

string DutyManager :: getLastName()
{
    return lastName;
}

string DutyManager :: getSalary()
{
    return saly;
}

string DutyManager :: getArea()
{
    return area;
}

string DutyManager :: getMensaje()
{
    return mensaje;
}

void DutyManager :: work()
{
    cout << "El DutyManager está gestionando";
}
