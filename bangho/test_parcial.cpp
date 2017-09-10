//g++ clase.cpp -o clase
//clase 04/07
/*
pg 24
Una empresa tiene diez almacenees y necesita
crear un programa que lea las ventas mensuales de los diez
almacenes, calcule la media de ventas y obtenga un listado
de los almacenes cuyas ventas mensuales son superiores a la media
_____________________
venta promedio = xxxx

alm1 con una vta de  .... xxx   | si supera la media o no |
alm2
 ..

 ____________________
*/
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#define n 10
#define m 12

using namespace std;

int main(){
  int local[n];
  int mat[n][m];
  srand(time(NULL));
  int i, j, t = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      mat[i][j] = rand() % 101; //se le resta para negativos. si quiero entre 6 y 5 pongo % 5
      cout << mat[i][j] << "\t";
    }
  cout << endl;
  }
  std::cout << mat[0][10] << '\n';
  for (j = 0; j < m; j++){
    local1 += mat[0][j];
  }
}
/*
resolucion dhener

1)genera random bucle
for{
ventas[i] = (rand() % 100001 / float(rand() % 11)+1);
s+= ventas[i];
}
p = s/float(n)
*/
