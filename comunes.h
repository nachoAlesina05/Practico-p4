#ifndef COMUNES
#define COMUNES
#include "empleados.h"

class Comunes: public Empleados{
private:
    float sueldoFijo;
public:
    Comunes();
    Comunes(char*,const float &);
    Comunes(const Comunes &);
    ~Comunes();
    float getSueldo();
    void setSueldo(const float &);
    float getTotal();
};




#endif 
