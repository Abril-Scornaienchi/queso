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
        
        cout << "\nEmpleado " << i << " nombre: " << empleados[i] -> getName() << "\n";
        cout << "\nEmpleado " << i << " apellido: " << empleados[i] -> getLastName() << "\n";
        cout << "\nEmpleado " << i << " area: " << empleados[i] -> getArea() << "\n";
        cout << "\nEmpleado " << i << " salario: " << empleados[i] -> getSalary() << "\n";
        cout << "\nEmpleado " << i << " mensaje: " << empleados[i] -> getMensaje() << "\n";

        getch();

    }
    
}

