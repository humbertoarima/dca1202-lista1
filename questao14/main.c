#include <stdio.h>
#include <stdlib.h>


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
    float *v; // declaração da variavel ponteiro *v do tipo float
    int i, nValores; // declaraçao das variaveis i e nValores do tipo inteiro
    printf("Quantos valores vode vai digitar?\n"); // imprime a mensagem "Quantos valores vode vai digitar?" em seguida da um enter
    scanf("%d", &nValores); // capita o valor digitado pelo usuario e atribui ao endereço de memoria da variavel nValores
    v= (float*) malloc(nValores * sizeof(float)); // pega o tipo do valor a ser guardado vezes a quantidade de valores e aloca um espaço de memoria para a ser usada pela variavel ponteiro v
    for (i=0; i<nValores; i++){ // itera os i de '0' até (nValores-1)
        printf("Ditige o valor para a posicao: %d\n", i);//imprime a mensagem "Ditige o valor para a posicao: e apossicão de 'i'" em seguida da um enter
        scanf("%f", &v[i]);//capita o valor digitado pelo usuario e atribui ao endereço de memoria da posição 'i' da veriavel ponteiro 'v'
    }; // fim do for
    qsort( v, nValores, sizeof(float), ordenaCrescente ); // a funçao qsort ordenar os elementos da variavel pornteiro v. São passados os seguintes parametros: vetor v, tamanho do vetro v, tipo do vetor e a fonção que fará a comparação dos elementos desse vetor
    printf("Valores em ordem crescente:\n");// imprime na tela a mensagem "Valores em ordem crescente:" em seguida da um enter

    // laço usado para imprimir todos os valores de cada posiçao do vetor v
    for (i=0; i< nValores; i++){
        printf("%f\n", v[i]);
    };
    free(v); // libera a mesmoria que foi alocada para o vetor v

    return 0; //fim
};
