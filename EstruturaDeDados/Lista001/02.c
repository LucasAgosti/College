#include <stdio.h>

#define SIZE 30

int buscaBinaria(int arr[SIZE], int valorBuscado, int *posicao);
void imprimeArray(int arr[SIZE]);
void selectionSort(int vetor[SIZE]);

int main(){

	int arr[SIZE], N;
	int valorBuscado, posicao;
	
	for(int i = 0; i < SIZE; i++){
		scanf("%d", &arr[i]);
		
		if(i % 2 == 0){
			arr[i] *= 2;
		}else{
			arr[i] *= 5;
		}
	}
	
	imprimeArray(arr);
	selectionSort(arr);
	imprimeArray(arr);
	
	printf("Qual numero deseja encontrar ?\n");
	scanf("%d", &valorBuscado);
	
	if(buscaBinaria(arr, valorBuscado, &posicao) == 1){
		printf("O valor foi achado na posicao: %d\n", posicao);
	}else{
		printf("O valor nao foi achado\n");
	}

	return 0;
}

int buscaBinaria(int arr[SIZE], int valorBuscado, int *posicao){
	
	int esquerda = 0, direita = SIZE - 1;
	int meio; //PIVO
	int achou = -1;
	
	
	while(esquerda <= direita){
	
		meio = (esquerda + direita) / 2;
	
		if(valorBuscado == arr[meio]){
			*posicao = meio;
			return 1;
		}
	
		//AJUSTANDO OS LIMITES LATERAIS
		if(arr[meio] < valorBuscado){
			esquerda = meio + 1;
		}else{
			direita = meio - 1;
		}
	}
	
	return -1;
}

void selectionSort(int arr[SIZE]){

	int posicaoMenorValor, aux, i, j;
	
	for(i = 0; i < SIZE; i++){
		
		posicaoMenorValor = i;
		
		for(j = i + 1; j < SIZE; j++) 
		
		if(arr[j] < arr[posicaoMenorValor]){
			posicaoMenorValor = j;
		}
		
		if(posicaoMenorValor != i){
			aux = arr[i];
			arr[i] = arr[posicaoMenorValor];
			arr[posicaoMenorValor] = aux;
		}
	}	
}

void imprimeArray(int arr[SIZE]){

	for(int i = 0; i < SIZE; i++)
		printf("|%d| ", arr[i]);
	printf("\n\n");
}
