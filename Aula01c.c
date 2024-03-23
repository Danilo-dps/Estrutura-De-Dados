#include<stdlib.h>
#include<stdio.h>
#define TAM 3

int main(){
	//Declarar os vetores 
	int A[TAM], B[TAM], SOMA[TAM], MULTI[TAM], QUADRADO[TAM], i;
	
	//looping de entrada de dados
	printf("Digite valores para A: \n");
	for(i=0; i<TAM; i++){
		scanf("%d",&A[i]);
	}
	printf("Digite valores para B: \n");
	for(i=0; i<TAM; i++){
		scanf("%d",&B[i]);
	}
	
	//Processamento de cálculos
	for(i=0; i<TAM; i++){
		SOMA[i] = A[i] + B[i];
		MULTI[i] = A[i] * B[i];
		QUADRADO[i] = A[i]*A[i] + B[i]*B[i];
	}
	
	printf("\n");
	
	//Comando de saída
	//Para Tudo Junto
	for(i=0; i<TAM; i++){
		printf("Indice: %d");
		printf("SOMA[%d] = %d + %d => %d \n", i, A[i], B[i], SOMA[i]);
		printf("MULTI[%d] = %d * %d => %d \n", i, A[i], B[i], MULTI[i]);
		printf("QUADRADO[%d] = %d * %d + %d * %d => %d \n", i, A[i],A[i],B[i],B[i],QUADRADO[i]);
	}
	
	for(i=0; i<TAM; i++){
		printf("SOMA[%d] = %d + %d => %d \n\n", i, A[i], B[i], SOMA[i]);
	//	printf("MULTI[%d] = %d * %d => %d \n\n", i, A[i], B[i], MULTI[i]);
	//	printf("QUADRADO[%d] = %d * %d + %d * %d => %d \n\n", i, A[i],A[i],B[i],B[i],QUADRADO[i]);
	}

	for(i=0; i<TAM; i++){
	//	printf("SOMA[%d] = %d + %d => %d \n\n", i, A[i], B[i], SOMA[i]);
		printf("MULTI[%d] = %d * %d => %d \n\n", i, A[i], B[i], MULTI[i]);
	//	printf("QUADRADO[%d] = %d * %d + %d * %d => %d \n\n", i, A[i],A[i],B[i],B[i],QUADRADO[i]);
	}
	
	for(i=0; i<TAM; i++){
	//	printf("SOMA[%d] = %d + %d => %d \n\n", i, A[i], B[i], SOMA[i]);
	//	printf("MULTI[%d] = %d * %d => %d \n\n", i, A[i], B[i], MULTI[i]);
		printf("QUADRADO[%d] = %d * %d + %d * %d => %d \n\n", i, A[i],A[i],B[i],B[i],QUADRADO[i]);
	}	
	
	system("pause");
}
