#include <stdio.h>
#include <stdlib.h>
/*
9. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:
◦ x for declarado como char?
◦ x for declarado como int?
◦ x for declarado como float?
◦ x for declarado como double?

10. Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou.
*/


int main()
{
    char x[4];
    int x1[4],*y=x1, i=*y;
    float x2[4];
    double x3[4];

    printf("x+1 = %d ,x+2 = %d , x+3 = %d !\n", x+1, x+2, x+3 );
    printf("x1+1 = %d ,x1+2 = %d , x1+3 = %d !\n", i+2, i+4, i+6 );
    printf("x2+1 = %d ,x2+2 = %d , x2+3 = %d !\n", x2+1, x2+2, x2+3 );
    printf("x3+1 = %d ,x3+2 = %d , x3+3 = %d !\n", x3+1, x3+2, x3+3 );
    return 0;
}
