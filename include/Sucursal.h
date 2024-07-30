#ifndef _Sucursal_h_
#define _Sucursal_h_
#include <string>
#include <Employee.h>

using namespace std;

class Sucursal
{
    public:

        Sucursal();

        virtual ~Sucursal();

        void AddEmployee(Employee *empleado);

        void ShowEmployee();
        
    private:

        Employee *empleados[3];

        int Counter = 0;
};

#endif