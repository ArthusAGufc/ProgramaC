#include <stdio.h>

int main (void)
{
    float n1, n2, nf, media;

    printf("Digite nota 1: \n");
    scanf("%f", &n1);

    printf("Digite nota 2: \n");
    scanf("%f", &n2);

    media = (n1 + n2)/2;

    if(media < 7 && media >= 4)
    {
       printf("Media: %f\n", media);
       printf("Final: \n");
       scanf("%f",&nf);

       media = (media + nf)/2;                     
    }

    printf("MEDIA: %f",media );

    return 0;
}