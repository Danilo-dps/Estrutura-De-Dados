#include<stdlib.h>
#include<stdio.h>
#define TAM 10

int main(){
	//Declarar o vetor de tamanho 10
	int VET[TAM],i;
	
	//looping de entrada de dados
	printf("Digite 10 valores: \n");
	for(i=0; i<TAM; i++){
		scanf("%d",&VET[i]);
	}
	printf("\n\n");
	//Looping para rodar várias posições
	for(i=0; i<TAM; i++){
	//Comando de saída do vetor com máscara
		printf("VET[%d] = %d\n", i, VET[i]);
	}
	
	system("pause");
}
