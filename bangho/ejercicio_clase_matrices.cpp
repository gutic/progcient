/* Se dispone de una tabla T de cincuenta numeros reales distintos de cero.
Crear una nueva tabla en la que todos sus elementos resulten de dividir los elementos d ela tabla T por el elemento T[k],
siendo K un valor dado*/
/*Se dispone de una lista(vector) de N elementos. Se desea diseñar un algoritmo que permita insertar
el valor x en el lugar k-esimo de la mencioonada lista*/
/*forrecorrido
	if(i<k) R[i] = T[i]:
	if(i==k)R[i] = v;
	if(i>k)R[i] = T[i -1]
	cout << i << " - " << R[i] << endl;
	-----------------------------otrasolucion-------------------
	R[i] = (i == k ? v : (i<k ? T[i] : T[i-1]));
	*/
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <time.h>

#define n 11

using namespace std;

int main() {
	/*ej1
	int mat[n];
	float resu[n];
	float num;
	srand(time(NULL));
	int i, j, t = 0;
	for (i = 0; i < n; i++)
	{
		mat[i] = rand() % 101 - rand() % 101; //se le resta para negativos. si quiero entre 6 y 5 pongo % 5
	}
	for (i = 0; i < n; i++) {
		printf("ingrese un num \n");
		cin >> num;
		if (mat[i] != 0) {
			 resu[i]= (float) (mat[i])/num;
			 cout << mat[i] <<"/" << num << "=" <<  resu[i] << endl;
		}
	}
	*/
	int mat[n];
	int cad[n];
	int num;
	int sub;
	int exit = 0;
	for(int i=0; i<n;i++){
		mat[i] = 0;
		cad[i] = 0;
	}
	while (true) {
		cout << "Ingresa un numero ";
		cin >> num;
		cout << "ingrese donde ingresar numero ";
		cin >> sub;
		if (mat[sub] == 0) {
			cad[sub] = num;
		}
		else {
			for (int i = 0; i < n; i++) {
				if (i != sub) {
					cad[i] = mat[i];
				}
				else {
					cad[i] = num;
					break;
				}
			}
			for (int i = sub; i < n; i++) {
				cad[i] = mat[i];
			}
		}
		for (int i = 0; i<n; i++) {
			cout << cad[i] << endl;
		}
		//cout << "exit " << endl;
		//cin >> exit;
		//if (exit == 1) {
		//	break;
		//}
	}


}
