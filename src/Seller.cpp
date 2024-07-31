#include <iostream>
#include <string>
#include <Seller.h>

Seller :: Seller()
{
    cout  << "\n\n-------------------------" << "\nConstructor de Seller\n" << "-------------------------" ;
}

Seller :: ~Seller()
{
    cout  << "\n-------------------------" << "\nDestructor de Seller\n" << "-------------------------" ;
}

void Seller :: NotificationDelivered()
{
    cout << "\nLa Notificación fue Entregada a este trabajador\n";
}

void Seller :: setName(string n)
{
    name = n;
}

void Seller :: setLastName(string l)
{
    lastName = l;
}

void Seller :: setSalary(string s)
{
    saly = s;
}

void Seller :: setArea(string a)
{
    area = a;
}

void Seller :: setMensaje(string m)
{
    mensaje = m;
}

string Seller :: getName()
{
    return name;
}

string Seller :: getLastName()
{
    return lastName;
}

string Seller :: getSalary()
{
    return saly;
}

string Seller :: getArea()
{
    return area;
}

string Seller :: getMensaje()
{
    return mensaje;
}

void Seller :: work()
{
    cout << "El vendedor esta trabajando";
}

