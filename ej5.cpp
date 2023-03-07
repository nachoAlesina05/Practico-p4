#include <iostream>

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
    Fecha::Fecha(int dia, int mes, int anio){
    d = dia;
    m = mes;
    a = anio;
    }
    Fecha::Fecha(const Fecha& f){
    d = f.d;
    m = f.m;
    a = f.a;
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

    bool Fecha::comparacion(Fecha f){
        return (f.a == a && f.m == m && f.d == d);
    }

    int main(){
        Fecha f1;
        Fecha f2(25,10,2001);
        if(!f1.comparacion(f2))
            std::cout << "Las fechas son distintas \n";
        f2 = f2.avanzar(1);
        if(f1.comparacion(f2))
            std::cout << "Las fechas son iguales \n";
        std::cout << "ChauMundo \n";
        return 0;
    }

