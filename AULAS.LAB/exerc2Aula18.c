// https://youtu.be/QWp8zxlrKko  1:30:04

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    
    SetConsoleOutputCP(65001);

    int *numeros;
    int qtd;

    printf("Digite a quantidade de números: ");
    scanf("%d",&qtd);

    numeros = (int *) malloc(sizeof(qtd));

    for (int i = 0; i < qtd; i++)
    {
        numeros[i] = rand() ;
    }

    for (int i = 0; i < qtd; i++)
    {
       printf("%d ", numeros[i]);
    }
    printf("\n");


    


    return 0;
}