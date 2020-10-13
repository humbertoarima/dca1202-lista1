#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void ordenaCrescente( int tamVetor, float *v){
    float aux;
    int i, j;
    for(i=0; i<  tamVetor; i++){
        for(j=i+1; j< tamVetor; j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j] = aux;
            };

        };
    };

};

int main()
{
    clock_t inicio,fim;
    double tempo;
    float *v;
    int i, nValores = 10000;

    v = (float*) malloc(nValores * sizeof(float));
    for (i=0; i<nValores; i++){
        v[i] = rand()%10000;
    };
    inicio  = clock();
    ordenaCrescente(nValores, v);
    fim =clock()-inicio;
    tempo=(double)(fim)/CLOCKS_PER_SEC;
    printf("Valores em ordem crescente:\n");
     for (i=0; i< nValores; i++){
        printf("%f\n", v[i]);
    };
    printf("\nTempo de Execucao: %lf",(double)tempo);
    free(v);

    return 0;
};

///Efetuado em 0.34s
