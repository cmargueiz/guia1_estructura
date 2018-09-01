#include <stdio.h>

int main(){
int dimencion;
int fila,columna;
int sunFila=0,sunColumna=0,sunDiagonal1=0,sunDiagonal2=0;

printf("Ingrese la dimencion de la matriz A\n");
scanf("%d",&dimencion);

int matrizA[dimencion][dimencion];


for(fila=0;fila<dimencion;fila++){
	for(columna=0;columna<dimencion;columna++){
		printf("Ingrese el dato del vector A fila: %d",fila+1);
		printf(", columna: %d",columna+1);
		printf("\n");
		scanf("%d",&matrizA[fila][columna]);
	}
}

printf("-----------------------------------\n");
for(fila=0;fila<dimencion;fila++){
	for(columna=0;columna<dimencion;columna++){
		printf("%d",matrizA[fila][columna]);
		printf("\t");
	}
	printf("\n");
}
printf("-----------------------------------\n");

for(fila=0;fila<dimencion;fila++){
	for(columna=0;columna<dimencion;columna++){
			sunFila=sunFila+matrizA[fila][columna];
	}
	printf("Suma de la fila %d",fila+1);
	printf(" es: %d",sunFila);
	printf("\n");
	sunFila=0;
}

printf("-----------------------------------\n");

for(columna=0;columna<dimencion;columna++){
	for(fila=0;fila<dimencion;fila++){
			sunColumna=sunColumna+matrizA[fila][columna];
	}
	printf("Suma de la columna %d",columna+1);
	printf(" eS: %d",sunColumna);
	printf("\n");
	sunColumna=0;
}

printf("-----------------------------------\n");

for(columna=0,fila=0;columna<dimencion;fila++,columna++){
	sunDiagonal1=sunDiagonal1+matrizA[fila][columna];
}
printf("Suma de la diagonal derecha es: ");
printf("%d",sunDiagonal1);
printf("\n");

printf("-----------------------------------\n");
for(columna=dimencion-1,fila=0;columna>=0;fila++,columna--){
	sunDiagonal2=sunDiagonal2+matrizA[fila][columna];
}
printf("Suma de la diagonal izquierda es: ");
printf("%d",sunDiagonal2);
printf("\n");
	return 0;
}
