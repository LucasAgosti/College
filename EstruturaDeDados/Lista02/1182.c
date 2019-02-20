#include <stdio.h>

#define LINHAS 12
#define COLUNAS 12

void preencheMatriz(double M[LINHAS][COLUNAS]);


int main(){

	int coluna, i;
	char op;
	double M[LINHAS][COLUNAS], operacao, soma = 0;
		
	scanf("%d\n", &coluna);
	scanf("%c", &op);

	preencheMatriz(M);
	
	for(i = 0; i < LINHAS; i++){
		soma += M[i][coluna]; 
	}
	
	if(op == 'S'){
		operacao = soma;
	}else{
		
		operacao = soma / COLUNAS;
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
