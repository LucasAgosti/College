#include <stdio.h>
#define SIZE 61

long long int calcFib(int indice);

int main(){

	int T = 0, indice = 0;
	
	scanf("%d" ,&T);
	
	while(T-- > 0){
		scanf("%d", &indice);
		printf("Fib(%d) = %lld\n", indice, calcFib(indice));
	}
	
	return 0;
}

long long int calcFib(int indice){

	int i;
	long long int fib[SIZE];
	    fib[0]=0;
	    fib[1]=1;
	    for(i = 2; i < SIZE; i++){
		 fib[i] = fib[i - 1] + fib[i - 2];
	    }
	    
	    return fib[indice];
}
