//   https://www.youtube.com/watch?v=kj21YRNXFAo&ab_channel=ProfessorRafaelIvo  1:00:00

#include <stdio.h>
#include <stdlib.h>

#define QTD_NOTAS 3
#define QTD_ALUNOS 3

// Modelagem
typedef struct aluno
{
    int matricula;
    char nome[50];
    float conjnotas[QTD_NOTAS];
} Aluno;

int main ()
{
    Aluno turma[50];

    for(int i = 0; i < QTD_ALUNOS; i++)
    {
        printf("Nome do aluno: ");
        fflush(stdin);
        scanf("%[^\n]s", turma[i].nome);

        printf("Nome de matricula: ");
        fflush(stdin);
        scanf("%d", &turma[i].matricula);

        printf("Notas: \n");

        for(int n = 0; n < QTD_NOTAS; n++)
        {
            printf("n%d; ", n + 1);
            scanf("%f", &turma[i].conjnotas[n]);
        }    
    }

    for(int i = 0; i < QTD_ALUNOS; i++)
    {
        printf("%d - %s (", turma[i].matricula, turma[i].nome);
        for(int n = 0; n < QTD_NOTAS; n++)
        {
            printf("n%d: %.2f  ", n + 1, turma[i].conjnotas[n]);
        }    
        printf(")\n");
    }

    return 0;
}