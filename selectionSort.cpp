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

void selection_sort(int vetor[TAM]){
	
	int posicaoDoMenorValor, aux, i, j;
	
	for(i=0; i<TAM; i++){
		
		//Recebe a posição inicial para o Menor Valor
		posicaoDoMenorValor = i;
		
		//Analisa os elementos na frente
		for(j=i+1;j<TAM;j++){
			
			//Caso encontre um valor menor na frente dos analisados
			if(vetor[j] < vetor[posicaoDoMenorValor]){
				posicaoDoMenorValor=j;
			}
		}
		
		if(posicaoDoMenorValor != i){
			aux=vetor[i];
			vetor[i]=vetor[posicaoDoMenorValor];
			vetor[posicaoDoMenorValor]=aux;
		}
	//Para ver o passo a passo
	//imprime_vetor(vetor);
	}
}



int main(){
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
		
	selection_sort(vetor);
	
	imprime_vetor(vetor);	
	return 0;
}
