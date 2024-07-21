#include <stdio.h>

int main( void )
{
    int numero;

    printf("Digite um numero para saber sucessor e antecessor: ");
    scanf("%d", &numero);

    printf("%d, %d, %d", numero - 1, numero, numero + 1);

    return 0;
}
