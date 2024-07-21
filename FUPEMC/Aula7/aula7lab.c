#include <stdio.h>

int main ( void )
{
    int x, n, v, qtd;

    printf( "x: " );
    scanf( "%d", &x );

    printf( "quantidade: " );
    scanf( "%d", &qtd );

    for( n = 1 ; n <= qtd ; n++ )
    {
        v = x * n;
        printf( "%d, ", v );

    }

    printf("\n");

    return 0;
}