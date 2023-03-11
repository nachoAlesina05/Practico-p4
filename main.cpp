#include "empleados.h"
#include "jornaleros.h"
#include "comunes.h"

using namespace std;

int main(){
    Empleados* e[4];
    e[0] = new Jornaleros("nacho",2,3);
    e[1] = new Jornaleros("clara",4,2);
    e[2] = new Comunes("Cami",10);
    e[3] = new Jornaleros("joan",7,12);
    float aux=0;
    for (int i = 0; i < 4; i++)
    {
        aux+=e[i]->getTotal();
    }
    cout << aux << "\n";
    return 0;
}