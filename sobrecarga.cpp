/* 1 mismo operador q hace todas cosas distintas
  7 = 3 + 4
  hola bien = A + B
	funcion recursiva
*/
int mcd1(int a, int b)
{
	if (b)
		mcd1(b, a%b);
	else
		return (a);

}
/*____________________________________________________*/
int mcd2(int a, int b)
{
	if (a-b)
		mcd2(a,(a>b)?a-b:b-a);
	else
		return (b);
}
/*num de argumentos variables*/
