//g++ clase.cpp -o clase
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

// void relleno(int alas, float pies, char ojos); //prototipo: copia de la cabecera de la funcion
void relleno(int, float, char); //cuando haga la definicion pongo nombre variables
// geneera una fucnion q me diga solamente si las soluciones de ecuacuaciones de 2do grado tiene soluc dentro de reales o imaginarios 1 si tiene 0 sino.
// int cuadratica(int, float, float);
void violin(int in1, int &in2);
int main() {
  int brazo = 2;
  float pie = 1000.0;
  char ojo = 2;
  //relleno(3,12.0,4);
  //relleno(brazo, pie, ojo);

  int cont =7,
  float ind = 12;
  violin(cont, ind);
  std::cout << "los valores son " << '\n';
  printf("%3d %3.2f\n", cont, ind);
}


void relleno(int alas, float pies, char ojos)
{
  std::cout << " hay " << alas << " alas. " << '\n';
  std::cout << " hay " << pies << " pies. "<< '\n';
  std::cout << " hay " << int(ojos) << " ojos " << '\n';
}
//geneera una fucnion q me diga solamente si las soluciones de ecuacuaciones de 2do grado tiene soluc dentro de reales o imaginarios 1 si tiene 0 sino.
// void cuadratica(int a, int b, int c)
// {
void violin(int in1, int &in2) // int in1 pase por parametro | int &in2 pase por referencia
{
  in1 = in1 +100;
  in2 = in2 + 100;
  std::cout << "los valores son" << '\n';
  std::cout << "n1" << in1 << '\n';
  std::cout << "n2" << in2 << '\n';
}

//pase por referencia
// int a(intp, int &q) //anpherson hace pase por referencia, apunta a la direccion de memoria
// {
//   p=p+q;
//   q+=8;  //
// }
//main ()
//{
//a(c,8)
//}
