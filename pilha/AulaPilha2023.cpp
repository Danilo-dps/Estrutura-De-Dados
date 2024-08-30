/*CRIAR UMA PILHA*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 10

void imprimeVetor(int vet[TAM]){
	//Contador auxiliar
	int i;
	printf("\n");
	//Imprimir vetor
	for(i=0;i<TAM; i++){
		printf(" %d ", vet[i]);
	}
}

void pilhaPush(int pilha[TAM], int valor, int *topo){
	//Caso não possa mais colocar valores
	if(*topo == TAM-1){
		printf("Pilha cheia");
	}else{
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}	
}

void pilhaPop(int pilha[TAM], int *topo){
	if(*topo == -1){
		printf("Pilha vazia");
	}else{
		printf("Valor removido: %d ", pilha[*topo]);
		pilha[*topo] = NULL;
		*topo = *topo - 1;
	}
}

int main(){
	int pilha[TAM];
	int topo = -1; //topo da pilha
	
	imprimeVetor(pilha);
	
	pilhaPush(pilha, 5, &topo);
	imprimeVetor(pilha);
	return 0;
}
