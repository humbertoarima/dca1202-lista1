#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int ordenaCrescente(const void * a, const void *b){ // declaração  e implementação da funçao ordenaCrescente. tem como paramentos duas constantes ponteiro do tipo void, o que possibilita receber qualquer tipo de variável na chamada da funçao
if(*(float*)a==*(int*)b) // compara dois elementos do vetor v e retorna o inteiro '0' se eles forem iguais
    return 0;

else
    if(*(int *)a < *(int*)b)// compara dois elementos do vetor v e retorna o inteiro '-1' se a < b
    return -1;

    else
        return 1; //retorna o inteiro '1' se a > b

}

int main()
{
    clock_t inicio,fim;
    double tempo;
    float *v;
    int i, nValores = 1000000;
    v = (float*) malloc(nValores * sizeof(float));
    for (i=0; i<nValores; i++){
        v[i] = rand()%1000000;
    }; // fim do for
    inicio  = clock();
    qsort( v, nValores, sizeof(float), ordenaCrescente ); // a funçao qsort ordena os elementos da variavel ponteiro v. São passados os seguintes parametros: vetor v, tamanho do vetor v, tipo do vetor e a função que fará a comparação dos elementos desse vetor
    fim =clock()-inicio;
    tempo=(double)(fim)/CLOCKS_PER_SEC;
    printf("Valores em ordem crescente:\n");// imprime na tela a mensagem "Valores em ordem crescente:" em seguida da um enter

    // laço usado para imprimir todos os valores de cada posiçao do vetor v
    for (i=0; i< nValores; i++){
        printf("%f\n", v[i]);
    };
    //imprime o tempo na tela
    printf("\nTempo de Execucao: %lf",(double)tempo);
    ///printf("Tempo de execucao: %f", ((double)t)/((CLOCKS_PER_SEC/1000))); /// tempo em milissegundos
    free(v); // libera a mesmoria que foi alocada para o vetor v


    return 0; //fim
};

///TEMPO para ordenar 1 MILHAO de itens = 0.23900
