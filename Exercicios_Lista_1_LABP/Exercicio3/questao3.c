#include <stdio.h>

int main ( void )
{
    int x, resultado;

    printf("Digite valor x: ");
    scanf("%d", &x);

    resultado = 3 * (x * x) - 6 * x + 5;

    printf("%d", resultado);

    return 0;
}
