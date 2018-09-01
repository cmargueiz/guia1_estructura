#include<stdio.h>

int main(){
		int a[3][3];
		int b[3][3];
		int f,c;
		
		for (f = 0; f <3 ; f++)
		{
			for (c = 0; c < 3; c++)
			{
				printf("Ingrese un valor: ");
				scanf("%d",&a[f][c]);
			}
			
		}
		
		
		printf("Matriz A\n");
		for (f = 0; f <3 ; f++)
		{
			printf("\n");
			for (c = 0; c < 3; c++)
			{
				printf("%d\t",a[f][c]);
			}
			
		}
		
		for (f = 0; f <3 ; f++)
		{
			
			for (c = 0; c < 3; c++)
			{
				b[c][f]=a[f][c];
			}
			
		}
		
		printf("Matriz B\n");
			for (f = 0; f <3 ; f++)
		{
			printf("\n");
			for (c = 0; c < 3; c++)
			{
				printf("%d\t",b[f][c]);
			}
			
		}
		
		
		
	}
