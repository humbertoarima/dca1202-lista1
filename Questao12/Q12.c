#include <stdio.h>
#include <stdlib.h>

int multiplicacao (int n1, int n2)
{
    return n1*n2;
}

int main()
{
int (*ponteiro)();/// (*ponteiro)() é a forma de declarar um ponteiro para uma função;
int n1 = 5, n2 = 6, resultado;

ponteiro = multiplicacao; /// Atribui da função multiplicacao ao ponteiro ponteiro;

resultado = ponteiro(n1,n2);

printf("%d",resultado); /// 5x6 = 30

return 0;

}
