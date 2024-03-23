#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define TAM 3

using namespace std;

int main(){
	//Declarando variáveis e vetores
	int A[TAM], B[TAM], SOMA[TAM], MULTI[TAM], QUADRADO[TAM], i;
	
	//Comando de entrada de A[] -> leitura de variáveis
	cout << "Valor para A: \n"; 
	for(i=0; i<TAM; i++){
		cin >> A[i];
	}
	
	//Comando de entrada de B[] -> leitura de variáveis
	cout << "Valor para B: \n"; 
	for(i=0; i<TAM; i++){
		cin >> B[i];
	}
	
	//Processamento da SOMA
	for(i=0; i<TAM; i++){
		SOMA[i] = A[i] + B[i];
	}
	return 0;
}
