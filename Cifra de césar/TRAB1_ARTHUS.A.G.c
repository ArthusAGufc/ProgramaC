// ARTHUS ALMEIDA GIRAO - LABP - TURMA 1A - 511274

#include <stdio.h>

int main( void )
{
    // Determinando as variaveis.
    char frase[101];
    int contador, chave, escolha, conteudo_vetor;
    
    // Instrucoes para escrever a frase.
    printf( "\nCifra de Cesar - Criptografia e Descriptografia\n" );
    printf( "Digite uma string de ate 100 caracteres: ");
    scanf( "%[^\n]s", frase );

    // Chave de Cripto ou Descripto.
    printf( "Chave: " );
    scanf( "%d", &chave );

    
    // Tratamento de erro para chave Cripto ou Descripto.
    while ( 25 < chave || chave <= 0 )
    {
        printf( "Chave incorreta: " );
        scanf( "%d", &chave );    
    }

    // Escolher Cripto ou Descripto.
    printf( "Escolher Cripto(1) ou Descripto(2): " );
    scanf( "%d", &escolha );

    // Criptografia
    if ( escolha == 1 ) 
    {
        for ( contador = 0; frase[contador] != '\0'; contador++ )
        {
            conteudo_vetor = frase[contador];

            if ( conteudo_vetor >= 65 && conteudo_vetor <= 90 ) // ASCII MAIUSCULA CRIPTO
            {
                conteudo_vetor += chave;
                
                if ( conteudo_vetor > 90 )
                {
                    conteudo_vetor -= 26;
                }

                frase[contador] = conteudo_vetor;
            }

            else if ( conteudo_vetor >= 97 && conteudo_vetor <= 122 ) // ASCII minuscula CRIPTO
            {
                conteudo_vetor += chave;
                
                if ( conteudo_vetor > 122 )
                {
                    conteudo_vetor -= 26;
                }
                frase[contador] = conteudo_vetor;
            }
        
        printf( "%c", frase[contador] ); 
        }
    }
    
    //Descriptografia
    else if ( escolha == 2 ) 
    {
        for ( contador = 0; frase[contador] != '\0'; contador++ )
        {
            conteudo_vetor = frase[contador];

            if ( conteudo_vetor >= 65 && conteudo_vetor <= 90 ) // ASCII MAIUSCULA DESCRIPTO
            {
                conteudo_vetor -= chave;
                
                if ( conteudo_vetor < 65 )
                {
                    conteudo_vetor += 26;
                }

                frase[contador] = conteudo_vetor;
            }

            else if ( conteudo_vetor >= 97 && conteudo_vetor <= 122 ) // ASCII minuscula DESCRIPTO
            {
                conteudo_vetor -= chave;
                
                if ( conteudo_vetor < 97 )
                {
                    conteudo_vetor += 26;
                }

                frase[contador] = conteudo_vetor;
            }
            
        printf( "%c", frase[contador] );
        }
    } 

    return 0;

    


}