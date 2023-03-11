#ifndef JORNALEROS
#define JORNALEROS

#include "empleados.h"

class Jornaleros:public Empleados{
    private:
        int cantHoras;
        float valorPorHora;
    public:
        Jornaleros();
        Jornaleros(char*,int,float);
        Jornaleros(const Jornaleros &);
        ~Jornaleros();
        int getHoras();
        float getValorPH();
        void setHoras(int);
        void setValor(float);
        float getTotal();
};




#endif


