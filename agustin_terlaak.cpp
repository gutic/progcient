//hecho en linux

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>

#define C 20

void cargar_datos(int i);
void buscar_datos(int mes);

struct fecha{
  int dia;
  int mes;
  int anio;
};

struct contacto{
  char nombre[20];
  char direccion[20];
  fecha fecha_nac;
} clientes[C];

int main(){
  int opcion;
  for (size_t i = 0; i < C; i++) {
    cargar_datos(i);
  }
  do {
   std::cout << "Ingresar Mes | 0 salir  " << '\n';
   std::cin >> opcion;
   buscar_datos(opcion);
 } while (opcion != 0);

}
void cargar_datos(int i)
{
  char key;
  std::cout << "ingrese Nombre" << '\n';
  scanf("%s",clientes[i].nombre);
  std::cout << "ingrese direccion" << '\n';
  scanf("%s",clientes[i].direccion);
  std::cout << "ingrese dia-mes-anio" << '\n';
  std::cin >> clientes[i].fecha_nac.dia >> clientes[i].fecha_nac.mes >> clientes[i].fecha_nac.anio;
  std::cout << "   " << '\n';
}
void buscar_datos(int mes)
{
  for (size_t i = 0; i < C; i++) {
    if(clientes[i].fecha_nac.mes == mes ){
      std::cout << "cumpleaños de: " << clientes[i].nombre <<'\n';
    }
  }
}
