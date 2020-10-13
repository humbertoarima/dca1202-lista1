#include <stdio.h>
#include <stdlib.h>

void imprimir2(int **mat, int linha_mat, int coluna_mat){
    int linha, coluna;
    for(linha = 0; linha < linha_mat; linha++){
        for(coluna = 0; coluna < coluna_mat; coluna++)
            printf("%d ", *(*(mat + linha) + coluna));// imprime a matriz por meio de aritmética de ponteiros
            //printf("%d ", mat[linha][coluna]);// imprime a matriz usando os colchetes
        printf("\n");
    }
}

int **multimatriz(int **A,int **B,int **C,int nlinhasA,int ncolunasA,int ncolunasB){
	///Função que multiplica duas matrizes e retorna uma terceira;
	int acumulador = 0, i=0, j=0,k=0;
	for(i=0;i<nlinhasA;i++){
		for(j=0;j<ncolunasB;j++){
			for(int k=0;k<ncolunasA;k++){
				acumulador = acumulador + A[i][k]*B[k][j];
			}
			C[i][j] = acumulador;
			acumulador = 0;
		}
	}
	return C;
}



int main() {
    int i, linha, coluna, nlinhasA, ncolunasA, nlinhasB, ncolunasB;
    int **matA, **matB, **matC;
    printf("Digite o numero de linhas de A: ");
    scanf("%d", &nlinhasA);

    printf("Digite o numero de colunas de A: ");
    scanf("%d", &ncolunasA);

    nlinhasB = ncolunasA;

    printf("Digite o numero de colunas de B: ");
    scanf("%d", &ncolunasB);

    // aloca um vetor para guardar nlinhas ponteiros para inteiros
    matA = malloc(nlinhasA * sizeof(int*));
    matB = malloc(nlinhasB * sizeof(int*));
    matC = malloc(nlinhasA * sizeof(int*));
    for(i = 0; i < nlinhasA; i++)
    {
        matA[i] = malloc(ncolunasA * sizeof(int));// aloca um vetor de inteiros de tamanho ncolunasA
    }

    for(i = 0; i < nlinhasB; i++)
    {
        matB[i] = malloc(ncolunasB * sizeof(int));// aloca um vetor de inteiros de tamanho ncolunasB
    }

    for(i = 0; i < nlinhasA; i++)
    {
        matC[i] = malloc(ncolunasB * sizeof(int));// aloca um vetor de inteiros de tamanho ncolunasB
    }


    printf("Insira a Matriz A: \n");
    for(linha = 0; linha < nlinhasA; linha++){
        for(coluna = 0; coluna < ncolunasA; coluna++){
            printf("Digite o elemento %d %d: ", linha, coluna);
            scanf("%d", *(matA + linha) + coluna);// aritmética de ponteiros
        }
    }

    printf("Insira a Matriz B: \n");
    for(linha = 0; linha < nlinhasB; linha++){
        for(coluna = 0; coluna < ncolunasB; coluna++){
            printf("Digite o elemento %d %d: ", linha, coluna);
            scanf("%d", *(matB + linha) + coluna);// aritmética de ponteiros
        }
    }
multimatriz(matA,matB,matC,nlinhasA,ncolunasA,ncolunasB);
    printf("\n");
    printf("Imprimindo a matriz A:\n");
    imprimir2(matA,nlinhasA,ncolunasA);
    printf("\n");
    printf("Imprimindo a matriz B:\n");
    imprimir2(matB,nlinhasB,ncolunasB);
    printf("\n");
    printf("Imprimindo a matriz C:\n");
    imprimir2(matC,nlinhasA,ncolunasB);
    free(matA);
    free(matB);
    free(matC);

    return 0;
}
