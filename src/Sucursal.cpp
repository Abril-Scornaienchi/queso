#include <iostream>
#include <string>
#include <conio.h>
#include <Sucursal.h>

Sucursal :: Sucursal()
{

}

Sucursal :: ~Sucursal()
{

}

void Sucursal :: AddEmployee(Employee *empleado)
{
    empleados[Counter] = empleado;
    Counter++;
}

void Sucursal :: ShowEmployee()
{
    for (int i = 0; i < Counter; i++)
    {
        
        cout << "\nEmployee " << i << "'s name is: " << empleados[i] -> getName() << "\n \n";
        cout << "\nEmployee " << i << "'s lastname is: " << empleados[i] -> getLastName() << "\n \n";
        cout << "\nEmployee " << i << "'s area is: " << empleados[i] -> getArea() << "\n \n";
        cout << "\nEmployee " << i << "'s salary is: " << empleados[i] -> getSalary() << "\n \n";
        cout << "\nEmployee " << i << "'s Message is: " << empleados[i] -> getMensaje() << "\n \n";

        getch();

    }
    
}

