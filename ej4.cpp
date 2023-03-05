#include <stdio.h>

class Punto{
  private: 
    int x; int y;
  public:
    Punto();
    Punto(int,int);
    Punto(const Punto &);
    ~Punto();
    void mostrarPunto();
};
  Punto::Punto(){
    x=0;
    y=0;
  }
  Punto::Punto(int x,int y){
    (*this).x=x;
    (*this).y=y;
  };
  void Punto::mostrarPunto(){
    printf("El valor del punto es (%d,%d)", x ,y);
  };
  Punto::~Punto(){

  }

int main(){
  Punto p;
  p.mostrarPunto();
  Punto *pp = new Punto(1,2);
  pp->mostrarPunto();
  Punto *ppp=pp;
  ppp->mostrarPunto();
  delete pp;  
  delete ppp;
  return 0;
}
