g++ -Wall -std=c++11 -I.\include -c .\src\Sucursal.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Employee.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\DutyManager.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Manager.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Seller.cpp

g++ -Wall -std=c++11 -I.\include -c main.cpp 

g++ -I.\include Sucursal.o Employee.o DutyManager.o Manager.o Seller.o main.o -o main.exe

DEL .\*.o

main.exe

