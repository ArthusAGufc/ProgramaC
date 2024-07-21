#include <stdio.h>

int main( void )
{
    int a, b, c, delta, x, resultado;

    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    printf("C: ");
    scanf("%d", &c);

    printf("x: ");
    scanf("%d", &x);

    delta = (b * b) - 4 * a * c;

    if ( delta < 0)
        printf("Quando o discriminante e menor que zero, não existem raizes reais (em R)");
    
    if ( delta = 0)
    {
        
    }



    printf("Valor do discriminante e: %d", delta);

    return 0;
}
