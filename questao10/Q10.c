#include <stdio.h>
#include <stdlib.h>
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
