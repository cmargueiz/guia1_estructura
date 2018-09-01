#include <stdio.h>

int main(void)
{
	int orden;
	/* code */
	printf("------DATOS DE LA MATRIZ A y B---------\n");
	printf("Ingrese el orden de la matriz A y B\n");
	 scanf("%d",&orden);
	



	int matrizA[orden][orden];
	int matrizB[orden][orden];
	int resultado[orden][orden];
	 printf("----Llenanado la matriz A---------\n");

	 for (int i = 0; i < orden; i++)
	 {
	 	for (int j = 0; j < orden; j++)
	 	{
	 		scanf("%d",&matrizA[i][j]);
	 	}
	 }

	 printf("------Llenanado la matriz B--------\n");
	 for (int i = 0; i < orden; i++)
	 {
	 	for (int j = 0; j < orden; j++
	 		)
	 	{
	 		scanf("%d",&matrizB[i][j]);
	 	}
	 }

	 printf("==========CALCULANDO PRODUCTO DE LA MATRIZ================\n");

	 for (int i = 0; i < orden; i++)
	 {
	 	for (int j = 0; j < orden; j++)
	 	{
	 		for (int k = 0; k < orden; k++)
	 		{
	 			resultado[i][k]+=(matrizA[i][j]*matrizB[j][k]);
	 		}
	 	}
	 }


printf("==========Producto de la matriz================\n");

for (int i = 0; i < orden; i++)
{
	printf("\n");
	for (int j = 0; j < orden; j++)
	{
		printf("%d\t",resultado[i][j] );
	}
}



}