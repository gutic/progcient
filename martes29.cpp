/*
s/ estructura siguiente:

structu info{
  char codigo[];
  char desc[];
  int cant;
  float precio[]
}
  struck stock{
    int deposito;
    info merca;
}
generar un array stock de tamaño N donde N se declara en un define. Se pide N datos en el array y luego
producir un informe de stock valorizado, que se obtiene de sumar para cada mercaderia la
cantidad * precio correspondiente.
}
*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>

#define N 2

void cargar_datos(int i);
void mostrar_datos();
struct info{
  char codigo[60];
  char desc[60];
  int cant;
  float precio[60];
};

struct stock{
  int deposito;
  info merca;
} cantidad[N];

int cant =0;


int main(){
  int opcion;
  for (size_1 i = 0; i < N; i++) {
    cargar_datos(i);
  }/*hace un menu*/
}

void cargar_datos(int i)
{
  if (cant == 0)
  {
    std::cout << "cantidad de reg excedidos" << '\n';
    return;
  }else{
    ingrese depositoingrese codigo
    stock[cant++].merca.precio; //aumenta el stock
  }
  char c[60];
  c = strcpy("hola");
  std::cout << "ingrese codigo" << '\n';
  //scanf("%s",cantidad[i].merca.codigo);
  cantidad[i].merca.codigo = c;
  std::cout << cantidad[i].merca.codigo << '\n';
  // std::cout << "ingrese nombres" << '\n';
  // scanf("%s",agenda[i].nombres);
  // std::cout << "ingrese telefono" << '\n';
  // scanf("%s",agenda[i].num_tel);
  // std::cout << "ingrese email" << '\n';
  // scanf("%s",agenda[i].email);
  // std::cout << "ingrese dia-mes-anio" << '\n';
  // std::cin >> agenda[i].fech_nac.dia >> agenda[i].fech_nac.mes >> agenda[i].fech_nac.anio;
  // std::cout << "   " << '\n';
}
void mostrar{
  for i=0 i< cant i ++
    sumaprod = sumaprod + stock[i] 
}
