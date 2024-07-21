// https://www.youtube.com/watch?v=kj21YRNXFAo&ab_channel=ProfessorRafaelIvo  00:39:00



#include <stdio.h>
#include <stdlib.h>

// Modelagem
typedef struct horario
{
    int hora;
    int minuto;
    int segundo;
} Horario;

typedef struct data
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct compromisso
{ 
    Data datinha;
    Horario horariozinho;
    char descricao[50];
}Compromisso;



int main ()
{
    Compromisso compromissinho;
    
    printf("Data do compromisso: ");
    scanf("%d-%d-%d", &compromissinho.datinha.dia
                    , &compromissinho.datinha.mes
                    , &compromissinho.datinha.ano);
    
    printf("Horario do compromisso: ");
    fflush(stdin);
    scanf("%d:%d:%d", &compromissinho.horariozinho.hora
                    , &compromissinho.horariozinho.minuto
                    , &compromissinho.horariozinho.segundo);
    
    printf("Nome do compromisso: ");
    fflush(stdin);
    scanf("%[^\n]s", &compromissinho.descricao );

    printf("%02d:%02d:%02d (%02d/%02d/%04d) - %s\n", compromissinho.horariozinho.hora
                                       , compromissinho.horariozinho.minuto
                                       , compromissinho.horariozinho.segundo
                                       , compromissinho.datinha.dia
                                       , compromissinho.datinha.mes
                                       , compromissinho.datinha.ano
                                       , compromissinho.descricao );

    return 0;
}