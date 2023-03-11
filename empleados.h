#ifndef EMPLEADOS
#define EMPLEADOS
#include <iostream>
using namespace std;

class Empleados{
    private:
        char* nombre;
    public:
        Empleados();
        Empleados(char*);
        Empleados(const Empleados&);
        virtual ~Empleados();
        char* getNombre();
        void setNombre(char*);
        virtual float getTotal() = 0;
};


#endif
