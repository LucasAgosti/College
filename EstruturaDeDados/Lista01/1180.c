#include <stdio.h>

int main(){

	int N, arr[1000], i,  
		menorValor, posMenor = 0;

	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	
		if(arr[i] < menorValor){
			menorValor = arr[i];
			posMenor = i;
		}
	}
	
	printf("Menor valor: %d\n", menorValor);
	printf("Posicao: %d\n", posMenor);
	
	return 0;
}
