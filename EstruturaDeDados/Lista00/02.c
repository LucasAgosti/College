#include<stdio.h>

int main(){
	
	int N, x[1000], y[1000];
	
	printf("Insira o tamanho N do vetor\n");
	scanf("%d", &N);
	
	int sizeW = N/2;
	
	for(int i = 0; i < N; i++){
		y[i] = 0;
	}

	for(int i = 0; i < N; i++){
		scanf("%d", &x[i]);
	}
	
	int aux = 0;
	for(int i = 0; i < N; i++){
		
		if(x[i] >= 10 && x[i] <= 40){
			y[aux] = x[i];
			aux++;
		}
	}
	
	
	
	//Printar o vetor
	printf("\n\nVetor x:\n");
	for(int i = 0; i < N; i++)
		printf("%d ", x[i]);
	printf("\n");
	
	printf("Vetor y:\n");
	for(int i = 0; i < aux; i++)
		printf("%d ", y[i]);
	printf("\n");
		
		
	return 0;
}
