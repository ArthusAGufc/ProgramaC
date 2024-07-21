#include <stdio.h>

int main (void)
{
    float n1, n2, nf, media;

    printf("Digite nota 1: \n");
    scanf("%f", &n1);

    printf("Digite nota 2: \n");
    scanf("%f", &n2);

    media = (n1 + n2)/2;

    printf("Media: %f\n", media);

    if (media >= 7)
        printf("APROVADO\n");
    else
        printf("REPROVADO\n");
    
    return 0;
}