#include <stdio.h>

#define LINHAS 70
#define COLUNAS 70

void montaMatriz(int matrix[LINHAS][COLUNAS], int N);

int main(){
	
	int i, j, N, matrix[LINHAS][COLUNAS];
	
	while(scanf("%d\n", &N) != EOF){
		
		montaMatriz(matrix, N);
		
		for(i = 0; i < N; i++){
			for(j = 0; j < N; j++){
				printf("%d", matrix[i][j]);
			}
		printf("\n");	
		}
	}
	return 0;
}

void montaMatriz(int matrix[LINHAS][COLUNAS], int N){

	int i, j;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			matrix[i][j] = 3;
		}
	}
	
	for (i = 0; i < N; i++) {
      	matrix[i][i] = 1;
      	matrix[N - i - 1][i] = 2;
    }
}
