#include "empleados.h"

Empleados::Empleados(){

}
Empleados::Empleados(char* e){
    nombre = e;
}
Empleados::Empleados(const Empleados&e){
    nombre = e.nombre;
}
Empleados::~Empleados(){}

char* Empleados::getNombre(){
    return nombre;
}

void Empleados::setNombre(char* n){
    nombre = n;
}
/*ostream &operator<<(ostream &o,Empleados& e){
    o << "El empleado " << e.getNombre() << " le corresponden $" << e.getTotal();
    return o;
}*/