#include <stdio.h>

#define SIZE 10000

int buscaBinaria(int arr[SIZE], int valorBuscado, int *posicao, int size);
void selectionSort(int arr[SIZE], int nAlunos);
void swap(int *xp, int *yp);

int main(){

	int i, j, n, q, count = 1;
	int marmores[SIZE], target, posicao;

	scanf("%d %d", &n, &q);

	while(n != 0 || q != 0){
		printf("CASE# %d:\n", count);
		count++;

		for(i = 0; i < n; i++){
			scanf("%d", &marmores[i]);
		}

		selectionSort(marmores, n);
		
		for(i = 0; i < q; i++){
				scanf("%d", &target);

				if(buscaBinaria(marmores, target, &posicao, n) == 1){
					printf("%d found at %d\n", target, posicao + 1);
				}else{
					printf("%d not found\n", target);
				}
		}
		scanf("%d %d", &n, &q);
	}

	return 0;
}

void swap(int *xp, int *yp){ 
    int aux = *xp; 
    *xp = *yp; 
    *yp = aux; 
} 
  
void selectionSort(int arr[], int n){ 
    int i, j, posicaoMenorValor; 
    
    for (i = 0; i < n - 1; i++){ 
        
        posicaoMenorValor = i; 

        for (j = i + 1; j < n; j++) 

        	if(arr[j] < arr[posicaoMenorValor]) 
        		posicaoMenorValor = j; 
   
        swap(&arr[posicaoMenorValor], &arr[i]); 
    } 
} 

int buscaBinaria(int arr[SIZE], int valorBuscado, int *posicao, int size){
	
	int esquerda = 0, direita = size - 1;
	int meio; //PIVO
	int achou = -1;
	
	while(esquerda <= direita){
	
		meio = (esquerda + direita) / 2;
	
		if(valorBuscado == arr[meio]){
			*posicao = meio;
			while(achou == -1){
				if(arr[meio] == arr[meio - 1] && meio != 0){
					*posicao = --meio;
				}else{
					achou = 1;
				}

			}
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
