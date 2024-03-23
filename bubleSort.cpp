#include<stdio.h>
#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>
#define TAM 10

using namespace std;//para utilizar cout

void imprime_vetor(int vetor[TAM]){
	
	
	int i;
	cout << "\n";
	for(i = 0; i < TAM; i++){
		cout << " |" << vetor[i] << "| ";
	}
	
}

void bubble_sort(int vetor[TAM]){
	
	//Auxiliares
	int x, y, aux;
	//Valor da esquerda sendo analisado
	for(x=0; x<TAM; x++){
		
		//Valor da direita sendo analisado
		for(y=x+1; y<TAM;y++){
			
			//Se quiser verificar cada etapa colocar o 
			//imprime_vetor(vetor);
			
			//Confere se precisa fazer a troca
			if(vetor[x] > vetor[y]){
				aux = vetor[x];
				vetor[x]=vetor[y];
				vetor[y]=aux;	
			}
			
		}
	}
}


int main(){
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
		
	bubble_sort(vetor);
	
	imprime_vetor(vetor);	
	return 0;
}
