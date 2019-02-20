#include <stdio.h>
#include <string.h>

int extracao(char *minerios, int metade, int diamantes);

int main(){

	int N, i;
	char minerios[1000];

	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		scanf("%s", minerios);
		printf("%d\n", extracao(minerios, 0, 0));
	}

	return 0;
}

int extracao(char *minerios, int metade, int diamantes){

	if(*minerios == '\0'){
		return diamantes;
		
	}else if(*minerios == '<'){
		return extracao(minerios + 1, metade + 1, diamantes);
	
	}else if(*minerios == '>'){
	
		if(metade > 0){
			return extracao(minerios + 1, metade - 1, diamantes + 1);
			
		}else {
           		return extracao(minerios + 1, metade, diamantes);
        	}

	}else{
		return extracao(minerios + 1, metade, diamantes);
	}
}
