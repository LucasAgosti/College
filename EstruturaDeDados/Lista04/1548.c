#include <stdio.h>

#define SIZE 1001

void imprimeArray(int arr[SIZE], int filaSize);
void selectionSort(int arr[SIZE], int nAlunos);

int main(){


	int N, nAlunos, i, flag;
	int notas[SIZE], posicaoInicial[SIZE];

	scanf("%d", &N);
	while(N-- > 0){

		scanf("%d", &nAlunos);

		for(i = 0; i < nAlunos; i++){
			scanf("%d", &notas[i]);
			posicaoInicial[i] = notas[i];
		}
		
		selectionSort(notas, nAlunos);

		flag = 0;

		for(i = 0; i < nAlunos; i++){

			if(notas[i] != posicaoInicial[i])
				flag++;	
		}
		printf("%d\n", flag);
	}
	return 0;
}

void imprimeArray(int arr[SIZE], int filaSize){

    int i;
    
	for(i = 0; i < filaSize; i++)
		printf("|%d| ", arr[i]);
	printf("\n");
}

void selectionSort(int arr[SIZE], int nAlunos){

	int posicaoMenorValor, aux, i, j;

	for(i = 0; i < nAlunos; i++){
		
		posicaoMenorValor = i;
		
		for(j = i + 1; j < nAlunos; j++){
		
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
}
