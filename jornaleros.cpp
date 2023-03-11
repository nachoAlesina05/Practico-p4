#include "jornaleros.h"

Jornaleros::Jornaleros(){
    cantHoras = 0;
    valorPorHora = 0;
}
Jornaleros::Jornaleros(char* n,int cant,float valor){
    setNombre(n);
    cantHoras = cant;
    valorPorHora = valor;
}
Jornaleros::Jornaleros(const Jornaleros &j){

}

Jornaleros::~Jornaleros(){

}
int Jornaleros::getHoras(){
    return cantHoras;
}
float Jornaleros::getValorPH(){
    return valorPorHora;
}
void Jornaleros::setHoras(int h){
    cantHoras = h;
}
void Jornaleros::setValor(float v){
    valorPorHora = v;
}
float Jornaleros::getTotal(){
    return cantHoras*valorPorHora;
}