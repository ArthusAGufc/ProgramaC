#include <stdio.h>

int main( void ) //peça um numero de um a 10
{
    int n;

    do
    {
        printf("Entre com o numero entre 1 e 10: ");
        scanf("%d", &n);
    }while ( n < 1 || n > 10 );

    printf("O numero escolhido e %d\n", n);
    
    return 0;
}