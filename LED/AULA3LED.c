#include <stdio.h>
#include <stdlib.h>

//Aula 3 - Adquirindo conhecimentos para criação da TAD NÓ: 
//um pouco sobre endereços de memória

// Ler pag 4 a 6 led

typedef struct pessoa
{  
    //int cpf;
    //char nome[10];
    int idade;
    float peso;
    float altura;
    //struct pessoa parentes[5];

    // Mecanismo de Ligaçao - PONTEIROS


}pessoa;
    
int x = 7; // variavel global

int main()
{
    printf( "Valor da variavel: %d\n", x );
    printf( "Endereço de memoria da variavel x: %p\n", &x);
    //chamamos o endereço de ponteiro
    //pois pedimos para apontar onde uma variavel esta
    //apontar pra memeoria o endereço onde uma variavel esta
    // usa %p

    printf( "Qtd bytes ultiliza um int: %lu\n", sizeof(int));
    // &lu é para inteiros grandes sem sinal negativo, long int, 

    pessoa p1;
    p1.idade = 25;
    p1.peso = 60;
    p1.altura = 1.70;

    printf("\n");

    printf( "Valor da variavel: %d\n", p1.idade );
    printf( "Endereço de memoria da variavel x: %p\n", &p1);
    printf( "Qtd bytes ultiliza variavel pessoa: %lu\n", sizeof(pessoa));

    /*
    pessoa p1;
    p1.idade = 25;
    p1.peso = 60;
    p1.altura = 1.70;

    pessoa p2;
    pessoa p3;

    pessoa vetor[3];
    vetor[0] = p1;
    vetor[1] = p2;
    vetor[2] = p3;
    */

    return 0;
}