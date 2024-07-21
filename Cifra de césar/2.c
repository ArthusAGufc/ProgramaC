if ( frase[contador] <= 64 ) // ASCII imprime normal de 32 a 64.
            {
                printf( "%c", frase[contador] );
            }

            else if ( frase[contador] + chave > 90 ) // ASCII imprime alterado com a soma da chave  de 65 a 90.
            {
                copia[contador] -= 26;
                printf( "%c", copia[contador] );
            }

            else if ( 91 <= frase[contador] <= 96 ) // ASCII imprime .
            {
                printf( "%c", frase[contador] );
            }



            else if ( frase[contador] + chave > 122 ) // ASCII imprime alterado com a soma da chave  de 97 a 122.
            {
                copia[contador] -= 26;
                printf( "%c", copia[contador] );
            }    

            else if ( 123 <= frase[contador] <= 127 ) // ASCII imprime .
            {
                printf( "%c", frase[contador] );
            }