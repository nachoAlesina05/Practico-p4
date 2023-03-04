

class Punto{
  private: 
    int x; int y;
  public:
    Punto* crearPunto(); //Lo inicializa en 0
    void setPunto(Punto *p, int x,int y);
    int posX(Punto);
    int posY(Punto);
};

Punto* Punto::crearPunto(){
  Punto* a = new Punto;
  a->x=0;
  a->y=0;
  return a;
}


int main(){
  return 0;
}
