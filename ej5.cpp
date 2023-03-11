#include <iostream>
using namespace std;

class Fecha{
    public:
        int d;
        int m;
        int a;
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

    ostream &operator<<(ostream &salida,const Fecha &f){
        salida << f.d << "/" << f.m << "/" << f.a << "\n";
        return salida;
    }

    istream &operator>>(istream &salida, Fecha &f){
        std::cout << "Ingrese dia:  \n";
        salida >>f.d;
        std::cout << "Ingrese mes: \n";
        salida>> f.m;
        std::cout << "Ingrese anio: \n";
        salida >> f.a;
        return salida;
    }

    int main(){
        Fecha f1;
        cin >> f1;
        Fecha f2(25,10,2001);
        cout << f2;
        f2 = f2.avanzar(1);
        cout << f1;
        std::cout << "ChauMundo \n";
        return 0;
    }

