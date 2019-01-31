#include <stdio.h>

long long int calcFib(int indice);

int main(){

	int T, indice;
	
	scanf("%d" ,&T);
	
	while(T-- > 0){
		scanf("%d", &indice);
		printf("Fib(%d) = %lld\n", indice, calcFib(indice));
	}
	
	return 0;
}

long long int calcFib(int indice){

	long long int fib[61];
	    fib[0]=0;
	    fib[1]=1;
	    for(int i = 2; i < 61; i++){
		 fib[i] = fib[i - 1] + fib[i - 2];
	    }
	    
	    return fib[indice];
}
