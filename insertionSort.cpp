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

void insertion_sort(int vetor[TAM]){
	int i, j, atual;
	
	for(i=1; i<TAM; i++){
		
		//Elemento atual em análise
		atual = vetor[i];
		
		//Elemento anterior ao analisado
		j = i-1;
		
		//Analisando membros anteriores
		while((j >=0) && (atual < vetor[j])){
			
			//Posiciona os elementos uma posição para frente
			vetor[j+1]=vetor[j];
			
			//Faz o j andar para trás
			j = j - 1;
		}
		
		//Agora que o espaço foi aberto, colocamos o atual na posição correta 
		vetor[j+1]=atual;
		
		//imprimir para ver cada passo
		//imprime_vetor(vetor;)
		
	}
	
}


int main(){
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
		
	insertion_sort(vetor);
	
	imprime_vetor(vetor);	
	return 0;
}
