#include "comunes.h"

Comunes::Comunes(){
    sueldoFijo = 0;
}
Comunes::Comunes(char* c, const float &f){
    setNombre(c);
    sueldoFijo = f;
}
Comunes::Comunes(const Comunes &c){}
Comunes::~Comunes(){}

float Comunes::getSueldo(){
    return sueldoFijo;
}
void Comunes::setSueldo(const float &f){
    sueldoFijo = f;
}
float Comunes::getTotal(){
    return sueldoFijo;
}