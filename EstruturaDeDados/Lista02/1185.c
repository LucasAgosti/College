#include <stdio.h>

#define LINHAS 12
#define COLUNAS 12

void preencheMatriz(double M[LINHAS][COLUNAS]);

int main(){

	int i, j;
	char op;
	double M[LINHAS][COLUNAS], operacao, soma = 0;
	int aux = 0;
		
	scanf("%c", &op);

	preencheMatriz(M);
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS - i - 1; j++){
			soma += M[i][j];
			aux++;
		}
	}
	
	if(op == 'S'){
		operacao = soma;
	}else{
		operacao = soma / aux;
	}

	printf("%.1f\n", operacao);

	return 0;
}

void preencheMatriz(double M[LINHAS][COLUNAS]){

	int i, j;
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++)
			scanf("%lf", &M[i][j]);		
	}
}
