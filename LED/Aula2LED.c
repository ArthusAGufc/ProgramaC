#include <stdio.h>
#include <stdlib.h>

//Aula 2 - Adquirindo conhecimentos para criação da TAD NÓ: 
//um pouco sobre structs em linguagem C

typedef struct pessoa
    {
        // lista de variaveis que pertencem a um conjunto
        int idade;
        float peso;
        float altura;

    }pessoa;// coloca o nome para o tipedef 
    // TERMINA SEMPRE COM ;
        

/* O tipo strcut é um nome muito gande 
e pode deixar o codigo feio, portanto é aconselhavel
utilizar o typedef (dar um nome de um tipo)
*/


int main( void )
{
   
    //struct pessoa p1; // variavel p1 recebe toda struct pessoa
    //struct pessoa p2;
    //struct pessoa p3;
    
    pessoa p1; // criando espaços de memoria
    pessoa p2;
    pessoa p3;

    /*
    p1.altura = 1.70;
    p1.idade = 19;
    p1.peso = 70;

    p2.peso = 65;

    p3.altura = 1.70;
    */

   // Se eu quiser unir essas pessoas em um unico conjunto, basta usar um vetor

    pessoa aluno[10];
    aluno[0] = p1;
    aluno[1] = p2;
    aluno[2] = p3;


    printf("Qual a altura de P1?\n");
    scanf("%f", &p1.altura);


    printf( "Altura: %f\n", p1.altura );
    printf( "Peso: %f\n", p1.peso );
    printf( "Idade: %d\n", p1.idade );

    printf( "Altura: %f\n", p2.altura );
    printf( "Peso: %f\n", p2.peso );
    printf( "Idade: %d\n", p3.idade );

    return 0;
}


