#include <stdio.h>
#include <locale.h>

int main ( void )
{
    int largura, altura, area;
    
    printf( "Largura: " );
    scanf( "%d", &largura);

    printf( "Altura: " );
    scanf( "%d", &altura);

    area = altura * largura;

    printf( "Area é: %d", area );

    return 0;
}