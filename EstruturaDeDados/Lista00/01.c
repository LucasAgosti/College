#include<stdio.h>

int main(){	

	int nMax, n[100], countImpar = 0, countPar = 0;;
	
	
	printf("Insira o numero max de numeros\n");
	scanf("%d", &nMax);
	
	for(int i = 0; i < nMax; i++){
		scanf("%d", &n[i]);
		while(n[i] >= 256){
			printf("Numero maior que 255, digite novamente\n"); 
			scanf("%d", &n[i]);
		}
		if(n[i] % 2 == 0){
			countPar++;
		}else{
			countImpar++;
		}
	
	}
	
	printf("Numero na pos 0 = %d", n[0]);

	printf("Impares: %d\n", countImpar);
	printf("Pares: %d\n", countPar);

	return 0;
}

/*void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}*/
