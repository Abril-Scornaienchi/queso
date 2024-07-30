#include <iostream>
#include <string>
#include <conio.h>

#include <Sucursal.h>

#include <Employee.h>
#include <DutyManager.h>
#include <Manager.h>
#include <Seller.h>


using namespace std;

int main()
{
    system("cls");

    Sucursal *Prueba1 = new Sucursal();

    Employee *Maria = new Seller();
    Employee *Juan = new DutyManager();
    Employee *Martin = new Manager();

    Maria -> setName("Maria");
    Maria -> setLastName("Gonzalez");
    Maria -> setArea("Duty Manager");
    Maria -> setSalary("$20000");
    Maria -> setMensaje("Hacer un stock de los productos");

    Juan -> setName("Juan");
    Juan -> setLastName("Perez");
    Juan -> setArea("Manager");
    Juan -> setSalary("$10000");
    Juan -> setMensaje("Revisar los archivos enviados");

    Martin -> setName("Martin");
    Martin -> setLastName("Garcia");
    Martin -> setArea("Seller");
    Martin -> setSalary("$1000");
    Martin -> setMensaje("Contratar nuevo personal");

    Prueba1 -> AddEmployee(Maria);
    Prueba1 -> AddEmployee(Juan);
    Prueba1 -> AddEmployee(Martin);

    Prueba1 -> ShowEmployee();

}
