#include <string.h>
#include <iostream>
#include <stdio.h>
#include <time.h>

#define n 10

using namespace std;
void CrearMatriz(int matriz[n][n], int dim);
void prom(int mat[n][n], int &promedio, int dim);
void multiplicar(int matriz[n][n], int dim, int promedio);
void mostrar(int matriz[n][n], int dim);

int main() {
  int dim = 0;
  int sumatoria=0;
  int promedio = 0;
  std::cout << "Ingrese tamaño" << '\n';
  std::cin >> dim;
  if (dim > 2 && dim < n){
    int mat[n][n];
    CrearMatriz(mat, dim);
    prom(mat, promedio, dim);
    std::cout << "promedio es " << promedio << endl;
    multiplicar(mat, dim, promedio);
    mostrar(mat, dim);
  }
  else{
  std::cout << "Tamaño incorrecto" << '\n';
  }


}
void prom(int mat[n][n], int &promedio, int dim){
  int sumatoria = 0;
  for (int i=0;i<dim;i++){
    sumatoria += mat[i][i];
  }
  std::cout << "sumatoria es " << sumatoria << endl;
  promedio = sumatoria/dim;
}

void CrearMatriz(int matriz[n][n], int dim){
  srand(time(NULL));
  int i, j, t = 0;
  for (i = 0; i < dim; i++)
  {
    for (j = 0; j < dim; j++)
    {
      matriz[i][j] = rand() % 10;
      cout << matriz[i][j] << "\t";
    }
    cout << endl;
  }
}

void multiplicar(int matriz[n][n], int dim, int promedio){
  int i, j, t = 0;
  for(i=0;i< dim;i++){
    matriz[0][i] = matriz[0][i] * promedio;
  }

  for(i=0;i<dim;i++){
    matriz[dim-1][i] = matriz[dim-1][i] * promedio;
  }
}
void mostrar(int matriz[n][n], int dim){
  int i, j, t = 0;
  for (i = 0; i < dim; i++)
  {
    for (j = 0; j < dim; j++)
    {
      cout << matriz[i][j] << "\t";
    }
    cout << endl;
  }
}
