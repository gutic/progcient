//bucando numeros amigos
//#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	int n = 0, sd, nn, i, c, j;
	cout << "ingrese la cantidad de numeros  amigos a contar" << endl;
	cin >> c;
	for (i = 2; n < c; i++) {
		sd = 0;
		for (j = 1; j <= i / 2; j++) {
			sd += (i%j == 0 ? j : 0);
		}
		nn = sd;
		sd = 0;
		for (j = 1; j <= nn / 2; j++) {
			sd += (nn%j == 0 ? j : 0);
		}
		if (i == sd && i<nn) {
			cout << ++n << " - " << i << "es amigo de " << nn << endl;
		}
	}
	//system("pause");
}
//g++ clase.cpp -o clase
//./clase
