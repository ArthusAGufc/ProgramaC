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

    if ( opcao == 1 )           c = a + b;
    else if ( opcao == 2 )      c = a - b;
    else if ( opcao == 3 )      c = a * b;
    else if ( opcao == 4 )      c = a / b;

    printf( "Resultado: %d\n", c );

    return 0;
}