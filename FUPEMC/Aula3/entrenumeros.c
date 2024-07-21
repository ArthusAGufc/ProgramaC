#include <stdio.h>

int main ()
{
    float a, b, c;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    printf("c maior que a: %d\n", c > a);
    printf("c maior que a: %d\n", c < a);
    printf("c maior que b: %d\n", c > b);
    printf("c maior que b: %d\n", c < b);
    printf("c maior que a e b: %d\n", 
        ( c >= a ) && ( c <= b) );

    return 0;
}