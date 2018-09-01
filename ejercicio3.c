#include <stdio.h>

int main(void)
{
	/* code */
	int tamano;
	printf("Ingrese el tamano del vector\n");
	scanf("%d",&tamano);
	int vector[tamano],op;
	char ctrl='s';
int valor;
		int posicion;
		int num,cont;

op=1;

	printf("=========================================================================================\n");

	for (int i = 0; i < tamano; i++)
	{
		vector[i]=0;
	}

while(op>=1 && op<=4){
		printf("Menu: \n1.Agregar dato a posicion deseada\n2. Buscar un valor y mostrar su posicion\n3.Editar\n4. Eliminar valor\n\nPresione otro numero para CANCELAR\n\n\n\n\n");
	scanf("%d",&op);

	switch(op){
		case 1:
			
			printf("Ingrese la posicion deseada\n");

			scanf("%d",&posicion);

			if (posicion>=0 && posicion<tamano)
			{
				printf("Ingrese el valor\n");
				scanf("%d",&vector[posicion]);
			}

			for (int i = 0; i < tamano; i++)
			{
				printf("Valor de la posicion %d es: %d\n",i,vector[i] );
			}

		break;
		case 2:
		printf("Ingrese el numero que esta buscando dentro del vector\n");
		scanf("%d",&num);
			for (int i = 0; i < tamano; i++)
			{
				if (vector[i]==num)
				{
					printf("El valor %d se encuentra en la posicion %d\n",num,i );
				}
			}

		break;
		case 3:

		printf("Datos ingresados\n++++++++++++++++++++++++++++++++++"); 

for (int i = 0; i < tamano; i++)
			{
				printf("Valor de la posicion %d es: %d\n",i,vector[i] );
			}


			printf("Ingrese la posicion que desea editar\n");

			scanf("%d",&posicion);

			if (posicion>=0 && posicion<tamano)
			{
				printf("Ingrese el nuevo valor\n");
					scanf("%d",&valor);
					vector[posicion]=valor;
				
			}
		break; 


		case 4: 
		printf("Datos ingresados\n++++++++++++++++++++++++++++++++++"); 

for (int i = 0; i < tamano; i++)
			{
				printf("Valor de la posicion %d es: %d\n",i,vector[i] );
			}


printf("Ingrese la posicion a la que desea eliminar su valor\n");
scanf("%d",&posicion);

			if (posicion>=0 && posicion<tamano)
			{
				vector[posicion]=0;
				printf("Dato eliminado\n");
			}




		break;

		default:
		printf("Gracias por participar ;)\n");

	}


	

}



	return 0;
}