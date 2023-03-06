//#include <iostream>

class Fecha{
    private:
        int d;
        int m;
        int a;
    public:
        Fecha();
        Fecha(int,int,int);
        Fecha(const Fecha&);
        ~Fecha();
        Fecha avanzar(int);
        Fecha retroceder(int);
        int diferencia(Fecha);
        bool comparacion(Fecha);
};

    Fecha::Fecha(){
        d=26;
        m=10;
        a=2001;
    }
    Fecha::Fecha(int dia,int mes,int anio){
        d=dia;
        a=anio;
        m=mes;
    }
    Fecha::~Fecha(){};

    Fecha Fecha:: avanzar(int cant){ //Supondremos todos los meses tienen 30 dias
        Fecha f;
        f = (*this);
        if(d+cant < 30)
            f.d = cant+d;
        else{
            cant = 30 - d;
            f.m++;
            f.d = cant;
        }    
        return f;            
    }

