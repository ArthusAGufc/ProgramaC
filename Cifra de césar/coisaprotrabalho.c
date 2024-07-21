#include <stdio.h>
#include <string.h>

int main( void )
{
    /* strings em C nao sao um tipo basico, ela é composta pois é foramda 
    pela aglomeraçao de um tipo basico que é o char(carctere)
    string é um vetor */




    char frase[21] = "Dragon Ball Z";     // carcateres validos é a string + o \0

    printf("nome = %s\n", frase); //%s é o marcador para imprimir strings

    // imprimir um cractere por vez

    /*
    for ( int i = 0 ; i < strlen(frase) ; i++ )
    {
        printf("nome[%02d] = %c\n", i, frase[i] );
    }
    */

   /*


   // mais otimizado

   for ( int i = 0 ; frase[i] != '\0' ; i++ )
    {
        printf("nome[%02d] = %c\n", i, frase[i] );
    }
    */



    int n = 0;
    while ( frase[n] != '\0' ) n++;
    printf( "tamanho do nome = %d\n", n );

    return 0;

    // tudo acima é o suficiente para o trabalho, alem de entender a tabela asncii

    // DICA PARA O TRABALHO: CARCATERE EM C TAMBEM É NUMERO!!!!!!! 

    /* NO TRABALHO VAMOS CONTRUIR O NOVA STRING A PARTIR DE UM CAUCULO APLICADO NOS CARCATERES
    DA STRING ORIGINAL, NO FINAL DA CONSTRUCAO DEVE LEMBRAR DE FAZER O \0
    */

}
