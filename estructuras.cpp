//  8/08
//g++ clase.cpp -o clase
//./clase
#include <iostream>
#include <stdio.h>
/*
enum resultado {gana, pierde, ata, cancela};

void main(void)
{
resultado result; //result tiene 4 estados: gana pierde ata o cancela
enum resultado omit = cancela; //se puede usar omit o cancela1

   for (result = gana;result <= cancela;result++) {
      if (result == omit)
         cout << "El juego ha sido cancelado\n";
      else {
	 cout << "Se ha jugado ";
         if (result == gana)
            cout << "y nosotros ganamos!";
         if (result == pierde)
            cout << "y nosotros perdimos.";
         cout << "\n";
      }
   }
} */
//////////////////////////////////////////////////
/*
void main(void)
{
 struct person {
   char name[25];
   int age;
   char status;        /* M = casado, S = soltero
 } ;

 struct alldat {
   int grade;
   person descrip;
   char lunch[25];
 } student[53];

 struct alldat teacher,sub;
 teacher.grade = 94;
 teacher.descrip.age = 34;
 teacher.descrip.status = 'M';
 strcpy(teacher.descrip.name,"Mary Smith");
 strcpy(teacher.lunch,"Baloney sandwich");

 sub.descrip.age = 87;
 sub.descrip.status = 'M';
 strcpy(sub.descrip.name,"Old Lady Brown");
 sub.grade = 73;
 strcpy(sub.lunch,"Yogurt and toast");

 student[1].descrip.age = 15;
 student[1].descrip.status = 'S';
 strcpy(student[1].descrip.name,"Billy Boston");
 strcpy(student[1].lunch,"Peanut Butter");
 student[1].grade = 77;

 student[7].descrip.age = 14;
 student[12].grade = 87;
}
*/
using namespace std;

struct datos{
  char nombre[30];
  int edad;
};

datos cargar (datos agenda);
void mostrar(datos imprimir);

int main(){
  datos aux;
  mostrar(cargar(aux));
}

datos cargar(datos agenda)
{
  datos aux;
  std::cout << "ingresar nombre" << '\n';
  gets(aux.nombre);
  std::cout << "ingrese edad" << '\n';
  std::cin >> aux.edad;
  return (aux);
}
void mostrar(datos imprimir)
{
  std::cout << "los datos son: " << '\n';

}
