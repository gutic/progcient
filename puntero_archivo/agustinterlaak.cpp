//examen tema 2 estructura union + puntero
//12 octubre

#include <iostream>
#include <string.h>

using namespace std;

#define N 2

struct info{
  char codigo[20];
  char desc[20];
  int cant;
  float precio;
};
union stock{
  int deposito;
  info merca;
}stock[N];

int main(){
  float stock_valorizado  = 0;
  for (size_t i = 0; i < N; i++) {
    info *puntero;
    puntero=new(info);
    std::cout << "ingrese codigo " << '\n';
    std::cin >> puntero->codigo;
    std::cout << "ingrese descripcion" << '\n';
    std::cin >> puntero->desc;
    std::cout << "Ingrese cantidad" << '\n';
    std::cin >> puntero->cant;
    std::cout << "ingrese precio" << '\n';
    std::cin >> puntero->precio;
    delete(puntero);
    std::cout << "ingrese deposito " << '\n';
    std::cin >> stock[i].deposito;
  };
  for (size_t i = 0; i < N; i++) {
    stock_valorizado += stock[i].merca.precio * stock[i].merca.cant;
  }
  std::cout << "El stock valorizado es: " << '\n';
  std::cout << stock_valorizado << '\n';
}
