#include<stdio.h>
#include<stdlib.h>
#define TAM 3

int main(){
	//para matriz é necessário a utilização de 2 contadores encadeados
	//a matriz tem M[][]
	//Uma matriz quadrada tem o mesmo nro de linha e coluna
	//Diagonal secundária é a soma dos indices == TAM-1
	int M[TAM][TAM],i, j;

printf("\n");
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			if(i+j==TAM-1){
				printf(" %d ",M[i][j]=i);
			}
			printf("\t");
		}
		printf("\n");
	}
	
	return 0;
}
