#include <stdio.h>
#include <stdlib.h>

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
    float *v;
    int i, nValores;

    printf("Quantos valores vode vai digitar?\n");
    scanf("%d", &nValores);
    v= (float*) malloc(nValores * sizeof(float));
    for (i=0; i<nValores; i++){
        printf("Ditige o valor para a posicao: %d\n", i);
        scanf("%f", &v[i]);
    };
    ordenaCrescente(nValores, v);
    printf("Valores em ordem crescente:\n");
     for (i=0; i< nValores; i++){
        printf("%f\n", v[i]);
    };
    free(v);

    return 0;
};
