/*el array es un puntero.
*/
#include <string.h>
#include <stdio.h>
int main()
{
char strg[40],*there,one,two;
int *pt,list[100],index;
   strcpy(strg,"Esta es una cadena de caracteres.");

   one = strg[0];                 /* one y two son idénticos */
   two = *strg;
   printf("El primer resultado es %c %c\n",one,two);

   one = strg[8];                /* one y two son idénticos */
   two = *(strg+8);
   printf("El segundo resultado es %c %c\n",one,two);

   there = strg+10;        /* strg+10 es idéntico a strg[10] */
   printf("El tercer resultado es %c\n",strg[10]);
   printf("El cuarto resultado es %c\n",*there);

   for (index = 0;index < 100;index++)
      list[index] = index + 100;
   pt = list + 27;
   printf("El quinto resultado es %d\n",list[27]);
    printf("El sexto resultado es %d\n",*pt);
}
