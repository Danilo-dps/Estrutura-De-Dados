#include<stdio.h>//para utilizar printf
#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>
#define TAM 10

using namespace std;//para utilizar cout

void imprime_vetor (int vetor[TAM]){
	
	//auxiliar contador
	int i;
	
	//imprime o vetor
	for(i=0;i<TAM;i++){
		cout <<	vetor[i] << " - ";
	}	
}

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
	
	//auxiliar contador
	int i;
	
	//verifica se o valor foi encontrado
	bool valorFoiEncontrado;
	
	//percorre a lista em busca do valor
	for(i=0;i<TAM;i++){
		if(vetor[i] == valorProcurado){
			valorFoiEncontrado = true;
			*posicaoEncontrada = i;
		}
	}
	if(valorFoiEncontrado){//for VERDADEIRO
		return 1;
	}
	else{
		return -1;
	}	
}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

	int esquerda = 0;			//limite da esquerda
	int direita = TAM -1;		//limite da direita
	int meio;					//o meio onde fica o cursor

	while(esquerda <= direita){
		

		//encontra o meio da análise
		meio = (esquerda + direita)/2;
	
		//quando o valor do meio é encontrado
		if(valorProcurado == vetor[meio]){
			*posicaoEncontrada = meio;
			return 1;
		}
	
		//ajustando os limites laterais
		if(vetor[meio] < valorProcurado){
			esquerda = meio + 1;
		}else{
			direita = meio - 1;
		}
	}
	return -1;

}
int main(){

	int vetor[TAM]={3,14,22,56,75,82,90,98,113,128};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	int i;
	bool valorFoiEncontrado; //na declaração valor FALSO
	
	//imprime o vetor na tela
	imprime_vetor(vetor);
	
	//lendo o número buscado
	printf("Qual numero deseja encontrar?");
	scanf("%d",&valorProcurado);
	
	if(busca_binaria(vetor,valorProcurado, &posicaoEncontrada)== 1){
		cout << "o valor foi encontrado na posicao: " << posicaoEncontrada;
	}
	else{
		cout << "O valor nao foi encontrado";
	}
	
	return 0;
}
