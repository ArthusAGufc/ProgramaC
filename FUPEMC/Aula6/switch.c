#include <stdio.h>

int main ( void )
{
    int a, b, c, opcao;

    printf ( "a: " );
    scanf ( "%d", &a );

    printf ( "b: " );
    scanf ( "%d", &b );

    printf ( "Escolha uma opcao: \n"
            "[1] Soma\n"
            "[2] Subtracao\n" 
            "[3] Multiplicacao\n"
            "[4] Divisao\n"
            "Opcao: " );
    scanf ( "%d",&opcao );

    switch ( opcao )
    {
        case 1: c = a + b; break;
        case 2: c = a - b; break;
        case 3: c = a * b; break;
        case 4: c = a / b; break;
    }

    printf( "Resultado: %d\n", c );

    return 0;
}