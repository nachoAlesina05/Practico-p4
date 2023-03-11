#include <iostream>
#include <cstring>
#include <stdexcept>
#include "ej6.h"
using namespace std;



String::String() :largo(0) {
    cadena = NULL;
}

String::String(char* c) : cadena(c), largo(strlen(c)) {}


String::String(const String& s) : cadena(s.cadena), largo(s.largo) {
}

String::~String(){}

char* String::getElem()const{
    return cadena;
}

bool String::enRango(int index) {
    return (index >= 0 && index < largo);
}

String String::operator+(String s) {
    char* n = new char[largo+1+s.largo];
    n = strcat(cadena,s.getElem());
    String aux = n;
    return aux;
}

bool String::operator==(String s) {
    if (largo != s.largo) {
        return false;
    }
    for (int i = 0; i < largo; i++) {
        if (cadena[i] != s.cadena[i]) {
            return false;
        }
    }
    return true;
}

char String::operator[](int pos){
    if(pos<largo && pos>=0){
        return cadena[pos];
    }else{
        throw ExcepFueraDeRango(); 
    }
}

ostream &operator<<(ostream &o,String &t){
    o<< t.getElem() << '\n'; 
    return o;
}
istream &operator>>(istream &i,String &t){
    cout << "Introducir string";
    char buffer[100];
    i.getline(buffer, 100); //Me lee hasta que termine la linea
    t = (buffer);
    return i;
}

