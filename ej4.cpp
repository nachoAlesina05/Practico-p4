

class Punto{
  private: 
    int x; int y;
  public:
    Punto* crearPunto(); //Lo inicializa en 0
    void setPunto(Punto *p, int x,int y);
    int posX(Punto p);
    int posY(Punto p);
};

Punto* Punto::crearPunto(){
  Punto* a = new Punto;
  a->x=0;
  a->y=0;
  return a;
}

void Punto::setPunto(Punto *p,int x, int y){
  p->x=x;
  p->y=y;
}

int Punto::posX(Punto p){
  return p.x;
}
int Punto::posY(Punto p){
  return p.y;
}



int main(){
  
  return 0;
}
