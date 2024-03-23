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


//Junta os dois subarrays criados ao dividir o vetor principal
void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito){
	
	int i, j, k; 						//Auxiliares contadores
	int n1 = meio - indiceEsquerdo + 1; //Tamanho do primeiro vetor auxiliar
	int n2 = indiceDireito - meio;		//Tamanho do segundo vetor auxiliar
	
	//Cria dois arrays temporários
	int vetorEsquerdo[n1], vetorDireito[n2];
	
	//Passa os elementos do vetor principal para o primeiro vetor auxiliares
	for(i = 0; i < n1; i++){
		
		vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
		
	}
	
	//Passa os elementos do vetor principal para o segundo vetor auxiliares
	for(j = 0; j < n2; j++){
		
		vetorDireito[j] = vetor[meio + 1 + j];
		
	}
	
	//Reseta as variáveis
	
	i = 0;
	j = 0;
	k = indiceEsquerdo;
	
	while (i < n1 && j < n2){
	
		//Caso o valor da esquerda seja menor
		if(vetorEsquerdo[i] <= vetorDireito[j]){
			
			//Passo para o meu vetor principal o valor menor
			vetor[k] = vetorEsquerdo[i];
			
			//incrementa o auxiliar para passar a análise para os próximos valores do valor auxiliar
			i++;
			
		}else{
			//Passo para o meu vetor principal o valor menor
			vetor[k] = vetorDireito[j];
			
			//incrementa o auxiliar para passar a análise para os próximos valores do valor auxiliar
			j++;
				
			
		}
		
		//Aumenta o índice de posicionamento no vetor
		k++;
	}
	
	//se faltarem alguns elementos do array ESQUERDO, passar para o vetor principal
	
	while (i < n1){
		
		vetor[k] = vetorEsquerdo[i];
		i++;
		k++;
		
}
	//se faltarem alguns elementos do array DIREITO, passar para o vetor principal
	
	while (j < n2){
		
		vetor[k] = vetorDireito[j];
		k++;
		k++;
		
	}
}


void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito){

	if(indiceEsquerdo < indiceDireito){
		
		//Encontra o meio
		int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;
		
		//Da metade para trás
		merge_sort(vetor, indiceEsquerdo, meio);
		
		//Da metade para frente
		merge_sort(vetor, meio+1, indiceDireito);
		
		
		//Passo a passo
	//	imprime_vetor(vetor);
		
		//Une os dois subarrays que foram criados
		merge(vetor, indiceEsquerdo, meio, indiceDireito);
	}
}

int main(){
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
		
	imprime_vetor(vetor);	
	
	merge_sort(vetor, 0, TAM - 1);
	
	imprime_vetor(vetor);	
	return 0;
}
