//correccion del parcial
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
};

int main(){
  stock stock1[N];
  stock *aux;
  float *valorizacion;
  aux = new stock;
  valorizacion = new float;
  for (size_t i = 0; i < N; i++) {
    std::cout << "ingrese codigo" << '\n';
    std::cin >> aux->merca.codigo;
    std::cout << "descripcion " << '\n';
    std::cin >> aux->merca.desc;
    std::cout << "cantidad" << '\n';
    std::cin >> aux->merca.cant;
    std::cout << "precio" << '\n';
    std::cin >> aux->merca.precio;
    std::cout << "deposito" << '\n';
    std::cin >> aux->deposito;
    *valorizacion += aux->merca.precio * aux->merca.cant; //se pone *a valorizacion xq
    stock1[i] = *aux;
  }
  std::cout << "el stock valorizado es" <<  *valorizacion  <<'\n';
  //delete aux;
}
