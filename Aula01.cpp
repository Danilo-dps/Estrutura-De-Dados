#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declarar o vetor de tamanho 5 com valores constantes
	int VET[5]={2,3,8,4,5}, i;
	
	/*é o mesmo que:
	VET[0] = 2;
	VET[1] = 3;
	VET[2] = 8;
	VET[3] = 4;
	VET[4] = 5;
	*/
	
	//Looping para rodar várias posições
	for(i=0; i<5; i++){
	//Comando de saída do vetor
		printf("%d ", VET[i]);
	}
	
	system("pause");
}
