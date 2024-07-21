#include <stdio.h>
#include<math.h>

int main ( void )
{
    float a, b, c, raiz1, raiz2, delta;

    printf("coeficiente a: ");
    scanf("%f", &a);

    printf("coeficiente b: ");
    scanf("%f", &b);

    printf("coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    raiz1 = (-b + sqrt(delta)) / (2 *a);
    raiz2 = (-b - sqrt(delta)) / (2 *a); 
    
    printf("Delta: %.2f\n", delta);
    printf("Raiz1: %.2f\n", raiz1);
    printf("Raiz2: %.2f\n", raiz2);
    
    return 0;
}    