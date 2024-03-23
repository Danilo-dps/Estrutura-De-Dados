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

void shell_sort(int vetor[TAM]){
	int i, j, atual;
	int h = 1;
	
	while (h < TAM){
		
		//De quantos em quantos será o pulo das análises
		h = 3*h+1;
	}
	
	while (h > 1){
		
		//Reduz a distância entre as análises
		h = h/3;
	
	
		for(i=h; i<TAM; i++){
		
			//Elemento atual em análise
			atual = vetor[i];
		
			//Elemento anterior ao analisado
			j = i - h;
		
			//Analisando membros anteriores
			while((j >=0) && (atual < vetor[j])){
			
				//Posiciona os elementos uma posição para frente
				vetor[j + h]=vetor[j];
			
				//Faz o j andar para trás
				j = j - h;
			}
		
			//Agora que o espaço foi aberto, colocamos o atual na posição correta 
			vetor[j + h]=atual;
		
			//imprimir para ver cada passo
			//imprime_vetor(vetor;)
		
		}
	
	}
}


int main(){
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
		
	shell_sort(vetor);
	
	imprime_vetor(vetor);	
	return 0;
}
