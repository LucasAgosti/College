#include <stdio.h>
#include <stdlib.h>

typedef int PILHA_TYPE;

typedef struct{
    PILHA_TYPE *values;
    int indice;
    int size;
    
}*PILHA;

PILHA pilha(int size);
void reset(PILHA pilha);
void push(PILHA pilha, PILHA_TYPE valor);
PILHA_TYPE pop(PILHA pilha);
PILHA_TYPE peek(const PILHA pilha);
int size(const PILHA pilha);
int empty(const PILHA pilha);

#define PILHA_SIZE 1001

int main(){

	int quantidadeDeVagoes, vagaoQueEstaEntrando,
	vagaoQueDeveSair, vagoes;

	PILHA vagoesQueEntraram;

	vagoesQueEntraram = pilha(PILHA_SIZE);

	while(scanf("%d", &quantidadeDeVagoes), quantidadeDeVagoes != 0){

		while(scanf("%d", &vagaoQueDeveSair), vagaoQueDeveSair != 0){
		
			reset(vagoesQueEntraram);
			vagaoQueEstaEntrando = 1;
			vagoes = 1;

		      while(vagoes < quantidadeDeVagoes && vagaoQueEstaEntrando <= quantidadeDeVagoes){
				if(vagaoQueDeveSair == vagaoQueEstaEntrando){
					scanf("%d", &vagaoQueDeveSair);
					vagoes++;
					vagaoQueEstaEntrando++;
				
				}else if(!empty(vagoesQueEntraram) && vagaoQueDeveSair == peek(vagoesQueEntraram)){
					while(size(vagoesQueEntraram) > 0 && vagaoQueDeveSair == peek(vagoesQueEntraram)){
						pop(vagoesQueEntraram);

		 				if(vagoes < quantidadeDeVagoes){
							scanf("%d", &vagaoQueDeveSair);
							vagoes++;
						}
					}
				}else{
					push(vagoesQueEntraram, vagaoQueEstaEntrando);
					vagaoQueEstaEntrando++;
				}
			}

			while(size(vagoesQueEntraram) > 0 && vagaoQueDeveSair == peek(vagoesQueEntraram)){
				pop(vagoesQueEntraram);

				if(vagoes < quantidadeDeVagoes){
					scanf("%d", &vagaoQueDeveSair);
					vagoes++;
				}
			}

			if(size(vagoesQueEntraram) == 0){
				printf("Yes\n");
			
			}else{
				printf("No\n");
			}

			while(vagoes++ < quantidadeDeVagoes){
		          scanf("%*d");
		      }
		  }

		printf("\n");
	}

	return 0;
}

PILHA pilha(int size){

	PILHA pilha;

	pilha = malloc(sizeof(PILHA));

	if(pilha == NULL)
		printf("Sem espaço na memória\n");

	pilha->values = malloc(sizeof(PILHA_TYPE) * size);

	if(pilha->values == NULL)
		printf("Sem espaço na memória\n");

	pilha->indice = 0;
	pilha->size = size;

	return pilha;
}

void reset(PILHA pilha){
	pilha->indice = 0;
}

void push(PILHA pilha, PILHA_TYPE valor){
	pilha->values[pilha->indice++] = valor;
}

PILHA_TYPE pop(PILHA pilha){
	return pilha->values[--pilha->indice];
}

PILHA_TYPE peek(const PILHA pilha){
	return pilha->values[pilha->indice - 1];
}

int size(const PILHA pilha){
	return pilha->indice;
}

int empty(const PILHA pilha){
	return size(pilha) == 0;
}
