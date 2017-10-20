/* 
	Hacer la suma de dos matrices de mismo tamaño y guardarlo en una 3ra matriz de mismo tamaño
	Luego hacer resta diagonal izq y resta diagonal derecha
	Hacer que las matrices se llenen aleatoriamente y que el usuario escoja la cantidad de las matrices (menor a 20)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
	{
		int mat1 [20] [20];
		int mat2 [20] [20];
		int mat3 [20] [20];
		int amount = 0;
		int valor = 0;
		int valo2 = 0;
		int min = 0;
		int max = 99;
		int test = 1;
		do
			{
				printf ("Que tan grande sera la matriz? (Maximo 20)\n");
				scanf ("%d", &amount);
			} while (amount > 20);
		srand(time(NULL));
		amount = amount * amount;
		for (int cunt = 0; cunt < amount; cunt ++)
			{
				valor = min + rand() / (RAND_MAX / (max-min+1)+1);
				valo2 = min + rand() / (RAND_MAX / (max-min+1)+1);
				mat1 [cunt] [cunt] = valor;
				mat2 [cunt] [cunt] = valo2;
				mat3 [cunt] [cunt] = mat1 [cunt] [cunt] + mat2 [cunt] [cunt];
				printf ("\n\nPrimer Arreglo en Espacio %d: \n%d \n\nSegundo Arreglo en Espacio %d: \n%d", test, mat1 [cunt] [cunt], test, mat2 [cunt] [cunt]);
				test ++;
			}
		for (int cunt = 0; cunt < amount; cunt ++)
			{
				printf ("\n \n");
				printf ("%d", mat3 [cunt] [cunt]);
			}
	}
