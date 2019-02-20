#include <stdio.h>
#include <string.h>

void avalia(char *expressao);

int main(){

	char expressao[1000];
	
	while(scanf("%s", expressao) != EOF){
		avalia(expressao);
	}
	
	return 0;
}

void avalia(char *expressao){

	int i, parentesesEsq = 0, parentesesDir = 0;
	
	for(i = 0; expressao[i] != '\0'; i++){
		if(expressao[i] == '(') {
	     	parentesesEsq++;
		
		}else if(expressao[i] == ')'){
			parentesesDir++;
			
			if(parentesesEsq > 0){
				parentesesEsq--;
				parentesesDir--;
			}
		}
	}
	if(parentesesEsq == 0 && parentesesDir == 0){ 
		printf("correct\n");
	}else{
		printf("incorrect\n");
	}
}
