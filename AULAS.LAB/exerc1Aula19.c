// https://youtu.be/rOJOeiNRYHU 6:14 12:53 38:17

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// vetores sao ponteiros. ponteiros sao endereços de memoria. vetores sao endereços

int main()
{
    SetConsoleOutputCP(65001);

    char entrada[200];
    char *nome;

    printf("Digite seu nome: ");
    scanf("%[^\n]s",entrada);

    // contar a quantidqade de caracteres que a entrada tem
    int n = strlen(entrada);

    // rservar o espaco na variavel nome [somente o suficiente paracaber string]
    nome = malloc((n+1)*sizeof(char));

    // copiar conteudo de entrdapara variavel nome 
    strcpy(nome, entrada); // destino,fonte

    printf("nome = %s (tamanho de nome na memoria = %ld)\n",nome,strlen(nome));

    return 0;
}