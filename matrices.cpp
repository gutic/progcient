//clase 08/06
#include <iostream>
#include <stdio.h>

using namespace std;

void main() {

	//clase 08/06=======================================================
	//cout << "hola" << n << endl;
	//system("pause");
	//recorrer 1 M con 1 sola variable
	// i=P/N .. j=P%N
	//clase 08/06======================================================

	//clase 13/06======================================================
	/*
	int opcion;
	int numero[10];
	int mayor;
	float promedio = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "ingrese numero" << endl;
		cin >> numero[i];
	}

	mayor = numero[0];
	for (int i = 0; i < 10; i++)
	{
		if (numero[i] > mayor) {
			mayor = numero[i];
		}
		promedio += numero[i];
	}
	do
	{
		cout << " 1) mayor 2) promedio 3) suma 4) exit" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "El mayor es " << mayor << endl;
		default:
			break;
		}

	} while (true);



	cout << "El promedio es " << promedio / 10 << endl;
	cout << "La suma es " << promedio << endl;
	//clase 13/06======================================================
	*/
	//clase 15/06=====================================================
	/*
	int matriz[2][2];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "[";
		for (int j = 0; j < 3; j++)
		{
			cout << matriz[i][j] << ",";

		}
		cout << "]" << endl;
	}
	cout << "\n";
	cout << "[";
	for (int i = 0; i < 3; i++)
	{
		cout << matriz[i][i] << ",";
	}

	cout << "]";
	cout << "\n";
	int max = matriz[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matriz[i][j] > max){
				max = matriz[i][j];
			}
		}
	}
	cout << "maximo: " << max << endl;

	//invertida
	for (int i = 0; i < 3; i++) {
		for (int  j = 0; j < 3; j++)
		{
			if ((i + j) == 2) {
				cout << matriz[i][j];
			}
		}
	}
	*/
	//clase 22/06=====================================================
	//multiplicar matriz 2x3
	//tiene q mostrar en forma de Matriz= A x B y AxB
	int m, n, f, c, i, j, k;
	float A[100][100], B[100][100], C[100][100];
	printf("\n---------------------------------------------------\n");
	printf("\nINGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ\n");
	scanf("%d", &m);
	scanf("%d", &n);
	printf("\n---------------------------------------------------\n");
	printf("\nINGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ\n");
	scanf("%d", &f);
	scanf("%d", &c);
	printf("\n");
	if (n == f)
	{
	printf("\n---------------------------------------------------\n");
	printf("INGRESE EL VALOR DE LA PRIMERA MATRIZ\n\n");
	//INGRESE LAS MATRICES
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			printf("A(%d,%d)= ", i, j);
			scanf("%f", &A[i][j]);
		}

	printf("\n");
	printf("\n---------------------------------------------------\n");
	printf("\nINGRESE EL VALOR DE LA SEGUNDA MATRIZ\n\n");
	for (i = 1; i <= f; i++)
		for (j = 1; j <= c; j++)
		{
			printf("B(%d,%d)= ", i, j);
			scanf("%f", &B[i][j]);
		}
	//OPERACION DE MULTIPLICACION
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= c; j++)
		{
			C[i][j] = 0;
			for (k = 1; k <= n; k++)
			{
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
	printf("\n---------------------------------------------------\n");
	printf("\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n");
	//IMPRESION
	for (i = 1; i <= m; i++)
		for (j = 1; j <= c; j++)
		{
			printf("C(%d,%d)=\t%4.2f\n", i, j, C[i][j]);
		}
	}
	else
	{
	printf("\n_________________________________________\n");
	printf("Estas matrices no se pueden multiplicar \n");
	printf("debido a que el numero de columnas de la\n");
	printf("matriz A es diferente al numero de filas\n");
	printf("de la matriz B, !Vuelva a intentarlo!   \n");
	}
	cout << "MatrizA  " << " MatrizB " << " Resultado " <<  endl;
	cout << "[" << A[1][1] << "," << A[1][2] << "]" << "     " << "[" << B[1][1] << "," << B[1][2] << "," << B[1][3] << "]" << "     " << "[" << C[1][1] << "," << C[1][2] << "," << C[1][3] << "]" <<  endl;
	cout << "[" << A[2][1] << "," << A[2][2] << "]" << "  x  " << "[" << B[2][1] << "," << B[2][2] << "," << B[2][3] << "]" << "  =  " << "[" << C[2][1] << "," << C[2][2] << "," << C[2][3] << "]" << endl;

	//for (int i = 1; i <= m; i++)
	//{
	//	cout << "[";
	//	for (int j = 1; j <= n; j++)
	//	{
	//		cout << A[i][j] << ",  ";
	//	}
	//	cout << "]" << endl;
	//}
	//cout << "Matriz B" << endl;
	//for (int i = 1; i <= f; i++)
	//{
	//	cout << "[";
	//	for (int j = 1; j <= c; j++)
	//	{
	//		cout << B[i][j] << ",  ";
	//	}
	//	cout << "]" << endl;
	//}
	//cout << "A x B = " << endl;
	//for (int i = 1; i <= m; i++)
	//{
	//	cout << "[";
	//	for (int j = 1; j <= c; j++)
	//	{
	//		cout << C[i][j] << ",  ";
	//	}
	//	cout << "]" << endl;
	//}
	getchar(); getchar();
	system("pause");

}
