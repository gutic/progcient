#include <iostream>
#include <string.h>

#define N 10

using namespace std;

struct fecha
{
	int d;
	int m;
	int a;
};

struct agenda{
	char	nom[60];
	char	ape[60];
	fecha	fn;
	char	num[30];
	char	ema[50];
} miagenda[N];
char buff[60];
int i = 0;

void cargar(void);
void buscar(void);
void listar(void);
void mes(void);
void mayusculas(char param[],  int i);


int main()
{
	int opc;
	do
	{
		cout << "1 - Cargar Datos\n"
			<< "2 - Buscar Datos\n"
			<< "3 - Buscar por mes\n"
			<< "4 - Listar Datos\n\n"
			<< "0 - Fin\n"
			<< "Opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 0: break;
		case 1: cargar();
			break;
		case 2: buscar();
			break;
		case 3: mes();
			break;
		case 4: listar();
			break;
		default:
			cout << "Opcion no valida";
			break;
		}
	} while (opc);
}
void cargar(void)
{
	if (i < N)
	{
		cout << "\nIngrese Apellido: ";
		scanf("%s",miagenda[i].ape);
		for (size_t y = 0; y < miagenda[i].ape[y]; y++) {
       miagenda[i].ape[y] = toupper(miagenda[i].ape[y]);
    }
		cout << "\nIngrese Nombres: ";
		scanf("%s",miagenda[i].nom);
		for (size_t y = 0; y < miagenda[i].nom[y]; y++) {
       miagenda[i].nom[y] = toupper(miagenda[i].nom[y]);
    }
		cout << "Ingrese fecha de Nacimiento (d m aaaa): ";
		cin >> miagenda[i].fn.d >> miagenda[i].fn.m >> miagenda[i].fn.a;
		cout << "\nIngrese Num Telefono: ";
		scanf("%s",miagenda[i].num);
		cout << "\nIngrese Email: ";
		scanf("%s",miagenda[i++].ema);
		cout << "\n\nDato cargado\n";
	}
	else
	{
		cout << "\n\nNO HAY MAS ESPACIO";
	}

}
void buscar(void)
{
	char nom[30];
	int j;
	cout << "Ingrese Apellido a buscar: ";
	scanf("%s",nom);
	for (size_t y = 0; y < nom[y]; y++) {
		 nom[y] = toupper(nom[y]);
	}
	for (j = 0; j < i; j++)
	{
		if (!strcmp(nom, miagenda[j].ape))
		{
			cout << "Nombre = " << miagenda[j].nom << "  Apellido = " << miagenda[j].ape << "\nFecha de Nacimiento: " << miagenda[j].fn.d << "/"
				<< miagenda[j].fn.m <<"/"<< miagenda[j].fn.a
				<<"\nNum Tel = "<< miagenda[j].num << " Email = " << miagenda[j].ema << endl;
		}
	}
	if (j > i)  cout << "Dato NO encontrado";
	cout << endl;
}
void listar(void)
{
	int j;
	for (j = 0; j < i; j++)
	{
		cout << "Nombre = " << miagenda[j].nom << "  Apellido = " << miagenda[j].ape << "\nFecha de Nacimiento: " << miagenda[j].fn.d << "/"
			<< miagenda[j].fn.m << "/" << miagenda[j].fn.a
			<< "\nNum Tel = " << miagenda[j].num << " Email = " << miagenda[j].ema << endl;
	}
	cout << endl;
}
void mes(void)
{
	int mes;
	int j;
	cout << "Ingrese mes a buscar: ";
	cin >> mes;
	for (j = 0; j < i; j++)
	{
		if (mes == miagenda[j].fn.m)
		{
			cout << "Nombre = " << miagenda[j].nom << "  Apellido = " << miagenda[j].ape << "\nFecha de Nacimiento: " << miagenda[j].fn.d << "/"
				<< miagenda[j].fn.m << "/" << miagenda[j].fn.a
				<< "\nNum Tel = " << miagenda[j].num << " Email = " << miagenda[j].ema << endl;
		}
	}
	if (j > i)  cout << "Dato NO encontrado";
	cout << endl;
}
