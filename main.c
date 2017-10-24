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
		int mat3 [20] [20]; // Suma
		int mat4 [20] [20]; // resta diagonal
		int amount = 0;
		int valor = 0;
		int valo2 = 0;
		int min = 0;
		int max = 99;
		int test = 1;
		/*
				[ 90 20 30
				  40 90 60
				  70 00 90 ]	diagonal es 90,90,90								[ 20 40 40
													Resultado deberia ser: 			  90 20 80
				[ 70 20 10															  80 80 20 ] ****la diagonal se resta el resto se suma
				  50 70 20
				  10 80 70 ]	diagonal es 70,70,70		
		
		*/
		do
			{
				printf ("Que tan grande sera la matriz? (Maximo 20)\n");
				scanf ("%d", &amount);
			} while (amount > 20);
		srand(time(NULL));
		for (int cunt0 = 0; cunt0 < amount; cunt0 ++)
			{
				for (int cont = 0; cont < amount; cont ++)
					{
						valor = min + rand() / (RAND_MAX / (max-min+1)+1);
						valo2 = min + rand() / (RAND_MAX / (max-min+1)+1);
						mat1 [cunt0] [cont] = valor;
						mat2 [cunt0] [cont] = valo2;
						mat3 [cunt0] [cont] = mat1 [cunt0] [cont] + mat2 [cunt0] [cont];
						test ++;
					}
				printf ("\n");
			}
		printf ("\nPrimer Arreglo: \n");
		for (int cunt0 = 0; cunt0 < amount; cunt0 ++)
			{
				for (int cont = 0; cont < amount; cont ++)
					{
						printf ("%d ", mat1 [cunt0] [cont]);
					}
				printf ("\n");
			}
		printf ("\nSegundo Arreglo: \n");
		for (int cunt0 = 0; cunt0 < amount; cunt0 ++)
			{
				for (int cont = 0; cont < amount; cont ++)
					{
						printf ("%d ", mat2 [cunt0] [cont]);
					}
				printf ("\n");
			}
		printf ("\nTercer Arreglo: \n");
		for (int cunt0 = 0; cunt0 < amount; cunt0 ++)
			{
				for (int cont = 0; cont < amount; cont ++)
					{
						printf ("%d ", mat3 [cunt0] [cont]);
					}
				printf ("\n");
			}
		printf ("\nCuarto Arreglo: \n");
		for (int colm = 0; colm < amount; colm ++)
			{
				for (int fila = 0; fila < amount; fila ++)
					{
						if (colm == fila)
							{
								mat4 [colm] [fila] = mat1 [colm] [fila] - mat2 [colm] [fila];
								printf ("%d ", mat4 [colm] [fila]);
							}
						else
							{
								mat4 [colm] [fila] = mat1 [colm] [fila] + mat2 [colm] [fila];
								printf ("%d ", mat4 [colm] [fila]);
							}
					}
				printf ("\n");
			}
	}
