/*
  -FUNCIONAL EN LINUX-
 funcion que permita cargar datos. el tamaño de un define va ser un
campos:apellido nombres decha nac num telefonoico celularrr y email
char apellido [60];
char nombres [60];
fecha fech_nac;
char num_tel[20];
char email[40];
______________

cargar_datos
mostrar_datos -> func que toma un indice de registro y lo muestra todo
  -> buscar_nombre    |
  -> buscar_mes       |->  utilizan mostrar_datos
  -> mostrar_todo     |
_____________________
*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>

#define F 2

void cargar_datos(int i);
void mostrar_datos(int opcion);

struct fecha {
  int dia;
  int mes;
  int anio;
} ;

struct persona {
  char apellido[60];
  char nombres[60];
  fecha fech_nac;
  char num_tel[20];
  char email[60];
} agenda[F] ;

int main(){
  int opcion;
  //struct persona cliente;
  for (size_t i = 0; i < F; i++) {
    cargar_datos(i);
  }
   do {
    std::cout << "Buscar:  1/todo 2/nombre 3/fecha 0/salir " << '\n';
    std::cin >> opcion;
    mostrar_datos(opcion);
  } while (opcion != 0);
}
void mostrar_datos(int opcion){
  switch (opcion) {
    case 1:
      for (size_t i = 0; i < F; i++) {
        std::cout << "Registro: n° " << i << '\n';
        std::cout << " apellido " << agenda[i].apellido << '\n';
        std::cout << " Nombres " << agenda[i].nombres << '\n';
        std::cout << "fecha " << agenda[i].fech_nac.dia << " " << agenda[i].fech_nac.mes << " " << agenda[i].fech_nac.anio  << '\n';
        std::cout << "telefono " << agenda[i].num_tel << '\n';
        std::cout << "email " << agenda[i].email << '\n';
        std::cout << "1 letra" << agenda[i].email[1] << '\n';
        std::cout << "  " << '\n';
      }
      break;
    case 2:
      char nombre[60];
      char buffer[60];
      std::cout << "ingrese nombre a buscar" << '\n';
      std::cin >> nombre;
      for (size_t i = 0; i < F; i++) {
        strcpy(buffer,agenda[i].nombres);
        if (strcmp(nombre,buffer) == 0 ){
          std::cout << "Nombres: " << agenda[i].nombres << '\n';
          std::cout << "apellido " << agenda[i].apellido << '\n';
          std::cout << "fecha " << agenda[i].fech_nac.dia << "/" << agenda[i].fech_nac.mes << "/" << agenda[i].fech_nac.anio  << '\n';
          std::cout << "telefono " << agenda[i].num_tel << '\n';
          std::cout << "email " << agenda[i].email << '\n';
        }
      }
      break;
    case 3:
      int dia, mes, anio;
      std::cout << "Ingrese fecha -dd mm aaaa- " << '\n';
      std::cin >> dia >> mes >> anio;
      for (size_t i = 0; i < F; i++) {
        if (dia == agenda[i].fech_nac.dia && mes == agenda[i].fech_nac.mes && anio == agenda[i].fech_nac.anio) {
          std::cout << "apellido " << agenda[i].apellido << '\n';
          std::cout << "Nombres " << agenda[i].nombres << '\n';
          std::cout << "telefono " << agenda[i].num_tel << '\n';
          std::cout << "email " << agenda[i].email << '\n';
        }
      }

  }
}
void cargar_datos(int i)
{

  std::cout << "ingrese apellido" << '\n';
  scanf("%s",agenda[i].apellido);
  std::cout << "ingrese nombres" << '\n';
  scanf("%s",agenda[i].nombres);
  std::cout << "ingrese telefono" << '\n';
  scanf("%s",agenda[i].num_tel);
  std::cout << "ingrese email" << '\n';
  scanf("%s",agenda[i].email);
  std::cout << "ingrese dia-mes-anio" << '\n';
  std::cin >> agenda[i].fech_nac.dia >> agenda[i].fech_nac.mes >> agenda[i].fech_nac.anio;
  std::cout << "   " << '\n';
}
