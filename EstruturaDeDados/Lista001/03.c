#include <stdio.h>

int main(){

	int A[5][4], B[4][3], C[5][3], aux;

	//PREENCHENDO MATRIZ A	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			A[i][j] = 2;
		}
	}
	
	//PREENCHENDO MATRIZ B
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			B[i][j] = 2;
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			printf("|%d| ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");


	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("|%d| ", B[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++){
			C[i][j] = 0;
				for(int k = 0; k < 4; k++){
					aux += A[i][k] * B[k][j];
				}
				
				C[i][j] = aux;
				aux = 0;
		
		}
	}
	
	printf("\n\n");
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++){
			printf("|%d| ", C[i][j]);	
		}
		printf("\n\n");
	}



	return 0;
}
