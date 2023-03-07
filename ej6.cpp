#include <iostream>
#include <cstring>

class String{
    private:
        char* cadena;
        const int largo;
    public:
        String();
        String(char*);
        String(const String&);
        ~String();
        bool enRango(int);
        String operator+(String);
        bool operator==(String);
        char operator[](int);
       /* friend std::ostream& operator<<(std::ostream& os, const String& s);
friend std::istream& operator>>(std::istream& is, String& s);
*/};

String::String() :largo(0) {
    cadena = NULL;
}

String::String(char* c) : cadena(c), largo(strlen(c)) {}



String::String(const String& s) : cadena(s.cadena), largo(s.largo) {
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
/*std::ostream& operator<<(std::ostream& os, const String& s) {
    os << s.cadena;
    return os;
}

std::istream& operator>>(std::istream& is, String& s) {
    char buffer[15];
    is >> buffer;
    s = buffer;
    return is;
}*/
int main() {
    return 0;
}