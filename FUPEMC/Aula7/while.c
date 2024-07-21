#include <stdio.h>

int main( void ) //Escreva as potencias de 3 menores do que 1000
{
    int pot, n;
    int maximo;

    printf("pot: ");
    scanf("%d", &pot);

    printf("maximo: ");
    scanf("%d", &maximo);


    n = pot;
    while( n < maximo )
    {
        printf("%d\n", n );
        n = n * pot ;
    }

    return 0;
}
