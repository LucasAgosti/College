#include <stdio.h>

#define SIZE 50

int buscaSequencial(int arr[SIZE], int valorBuscado, int *posicao);

int main(){

	int A[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 , 25};
	int B[25] = {26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
	int C[SIZE];
	int valorBuscado, posicao;

	for(int i = 0; i < SIZE; i++){
		C[i] = A[i];
	}

	for(int i = 0; i < SIZE; i++){
		C[i + 25] = B[i];
	}

	for(int i = 0; i < SIZE; i++){
		printf("|%d| ", C[i]);
	}

	printf("\n\nInsira o valor buscado: ");
	scanf("%d", &valorBuscado);
	
	if(buscaSequencial(C, valorBuscado, &posicao) == 1){
		printf("\nO valor foi achado na posicao: %d\n", posicao);
	}else{
		printf("\nO valor nao foi achado\n");
	}
	
	return 0;
}

int buscaSequencial(int C[SIZE], int valorBuscado, int *posicao){

	int achou = -1;
	
	for(int i = 0; i < SIZE && achou == -1; i++){
		if(C[i] == valorBuscado)
			achou = 1;
			*posicao = i;
	}
	
	if(achou == 1){
		return 1;
	}else{
		return -1;
	}
}
