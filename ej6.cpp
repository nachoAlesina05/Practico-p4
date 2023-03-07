#include <iostream>
#include <cstring>
using namespace std;
class String{
    private:
        char* cadena;
        int largo;
    public:
        String();
        String(char*);
        String(const String&);
        ~String();
        char* getElem();
        bool enRango(int);
        String operator+(String);
        bool operator==(String);
        char operator[](int);
        friend ostream& operator << (ostream &o,String &s);
        friend istream& operator >>(istream &i,String &s);    
};

String::String() :largo(0) {
    cadena = NULL;
}

String::String(char* c) : cadena(c), largo(strlen(c)) {}



String::String(const String& s) : cadena(s.cadena), largo(s.largo) {
}

String::~String(){}

char* String::getElem(){
    return cadena;
}

bool String::enRango(int index) {
    return (index >= 0 && index < largo);
}

String String::operator+(String s) {
    char* n = new char[largo+1+s.largo];
    n = strcat(cadena,s.cadena);
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
    try
    {
        cadena[pos];
        return cadena[pos];
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
        return 'a';
    }
}

ostream& operator<<(ostream &o,String &s){
    o<< s.getElem();
    return o;
}
istream& operator>>(istream &i,String &s){
    cout << "Introducir string";
    char buffer[100];
    i.getline(buffer, 100);
    s = buffer;
    return i;
}

int main() {
    String s;
    cin >> s;
    cout << s;
    return 0;
}