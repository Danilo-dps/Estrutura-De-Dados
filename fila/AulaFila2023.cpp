#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 10

void imprimeFila(int vet[TAM], int tamanho){
	int i;
	printf("\n");
	for(i=0;i<TAM;i++){
		printf("%d ",vet[i]);
	}
}

void filaConstrutor(int *frente, int *tras){
	*frente = 0;
	*tras = -1;
}

bool filaVazia(int frente, int tras){
	if(frente > tras){
		return true;
	}else{
		return false;
	}
}

bool filaCheia(int tras){
	if(tras == TAM-1){
		return true;
	}else{
		return false;
	}
}

void filaEnfileirar(int fila[TAM], int valor, int *tras){
	if(filaCheia(*tras)){
		printf(" - Fila cheia!");
	}else{
		*tras = *tras + 1;
		fila[*tras] = valor;
	}
}

void filaDesenfileirar(int fila[TAM], int *frente, int tras){
	if(filaVazia(*frente, tras)){
		printf(" - Fila vazia!");
	}else{
		printf(" - Valor %d foi removido!", fila[*frente]);
		fila[*frente] = 0;
		*frente = *frente + 1;
	}
}

int filaTamanho (int tras, int frente){
	return(tras - frente) +1;
}

int main(){
	int fila[TAM]={0,0,0,0,0,0,0,0,0,0};
	int j, frente, tras, valor;
	
	filaConstrutor(&frente, &tras);
	
	//Enfileirando valores randômicos
	for(j=0; j<TAM+1; j++){
		filaEnfileirar(fila, rand() %100, &tras);
		imprimeFila(fila, filaTamanho(tras,frente));
	}
	
	//Desenfileirar 
	for(j=0; j<TAM+1; j++){
		filaDesenfileirar(fila, &frente, tras);
		imprimeFila(fila, filaTamanho(tras,frente));
	}
	return 0;
}
