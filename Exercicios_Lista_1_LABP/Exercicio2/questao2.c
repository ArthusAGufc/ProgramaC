#include <stdio.h>

int main( void )
{
    float area, altura, largura;

    printf("Digite altura: ");
    scanf("%f", &altura);

    printf("Digite largura: ");
    scanf("%f", &largura);

    area = altura * largura;

    printf("%.2f", area);

    return 0;
}
