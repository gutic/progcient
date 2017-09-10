/* g++ clase.cpp -o clase
clase 04/07
Leer una Matiz a(6x8). Determinar cuantos elementos positivos tiene y
que posicion ocupa el mayor de eellos.
Si hay varios iguales al mayor, indicar la pos de todos
*/
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#define n 6
#define m 8

using namespace std;

int main(){
  int mat[n][m];
  int may = 0;
  int positivos = 0;
  srand(time(NULL));
  int i, j, t = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      mat[i][j] = rand() % 101 - rand() % 101;
      cout << mat[i][j] << "\t";
      if (mat[i][j] > 0){
        positivos += 1;
      }
      if (j==0 && i ==0){
        may = mat[i][j];
      }
      else
      {
        if (mat[i][j] > may){
          may = mat[i][j];
        }
      }
    }
    cout << endl;
  }
  cout << "el mayor es" << may << endl;
  std::cout << "hay " << positivos << " positivos " '\n';
  for (i=0; i < n; i++){
    for(j = 0; j <m ; j++){
      if(mat[i][j] == may){
        cout << "se encontro el mayor " << may << " en la posicion " <<  "fila " << i  <<" columna " << j << endl;
      }

    }
  }
}
