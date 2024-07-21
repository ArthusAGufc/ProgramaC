// Arthus Almeida Girao - 511274 - LAB TURMA 1 2021.2

// NAO CONSEQUI FAZER A 3 ASSOSCIAR FILMES

#include <stdio.h>
#include <stdlib.h>

FILE *ponteiro_arq; // Criando arquivo

// Modelagem
typedef struct filme
{
    char nomef[50];
    char generof[50];
    int codigof;
    int duracaof;
} Filme;

typedef struct ator
{
    char nomea[50];
    int codigoa;
    int codigoAF;
} Ator;

// Funções
void cadastrarfilme(Filme *fiome)
{
    printf("Nome do filme: ");
    fflush(stdin);
    scanf("%[^\n]s", fiome->nomef);

    printf("Genero do filme: ");
    fflush(stdin);
    scanf("%[^\n]s", fiome->generof);

    printf("Codigo do filme: ");
    fflush(stdin);
    scanf("%d", &fiome->codigof);

    printf("Duracao do filme: ");
    fflush(stdin);
    scanf("%d", &fiome->duracaof);
}

void cadastrarator(Ator *atuor)
{
    printf("Nome do ator: ");
    fflush(stdin);
    scanf("%[^\n]s", atuor->nomea);

    printf("Codigo do ator: ");
    fflush(stdin);
    scanf("%d", &atuor->codigoa);
}

void imprimirFilmes(Filme fiome)
{   puts("*********************************************");
    printf(" Codigo do filme: %d \n Nome do Filme: %s \n Genero: %s \n Duracao: %d\n", 
                                                                                      fiome.codigof, 
                                                                                      fiome.nomef, 
                                                                                      fiome.generof, 
                                                                                      fiome.duracaof);
    puts("*********************************************");
}

void imprimirAtores(Ator atuor)
{
    puts("---------------------------------------------");
    printf(" Codigo Ator: %d \n Nome do Ator: %s \n Codigo Filme que ator participa: %d \n", 
                                                                                            atuor.codigoa, 
                                                                                            atuor.nomea, 
                                                                                            atuor.codigoAF);
    puts("---------------------------------------------");
}

void cadastrarListafilmes(Filme lista[], int *aux)
{
    Filme A;
    cadastrarfilme(&A);
    lista[*aux] = A;
    *aux = *aux + 1; // (*aux)++;
}

void cadastrarAtores(Ator listaAtores[], int *auxa )
{
    Ator B;
    cadastrarator(&B);
    listaAtores[*auxa] = B;
    *auxa = *auxa + 1;
}

void listarfilmes(Filme lista[], int aux)
{
    for( int i = 0; i < aux; i++ )
        imprimirFilmes(lista[i]);
}

void listaratores(Ator lista1[], int auxa )
{
    for( int i = 0; i < auxa; i++)
        imprimirAtores(lista1[i]);   
}

void salvardados(Filme lista[], int aux)
{
    ponteiro_arq = fopen("TabelaDeFilmes.txt","a");

    if(ponteiro_arq == NULL){
    printf("Erro! O arquivo não pode ser aberto\n");
    exit(1);
    }
    else
    printf("Arquivo criado/salvo\n");
    
    for( int i = 0; i < aux; i++ )
    {
    fputs("*********************************************\n",ponteiro_arq);
    fprintf(ponteiro_arq," Codigo do filme: %d \n Nome do Filme: %s \n Genero: %s \n Duracao: %d\n", 
                                                                                                lista[i].codigof, 
                                                                                                lista[i].nomef, 
                                                                                                lista[i].generof, 
                                                                                                lista[i].duracaof);
    fputs("*********************************************\n",ponteiro_arq);
    fputc('\n',ponteiro_arq);
    }

    fclose(ponteiro_arq);
}

// Main
int main( )
{
    Filme locadora[50]; // Vetores
    Ator atores[50];

    int qtd = 0; // Auxiliar para percorrer vetor
    int qtda = 0;

    while("Laco Infinito") // Para o menu
    {
        int opcao;

        puts("[1] Cadastrar filme");
        puts("[2] Cadastrar ator");
        puts("[3] Associar filme ator");
        puts("[4] Exibir atores");
        puts("[5] Exibir filme");
        puts("[6] Salvar tabela filmes");
        puts("[0] Sair");

        scanf("%d", &opcao);

        if(opcao == 0) break;

        switch (opcao)
        {
            case 1:
                cadastrarListafilmes(locadora, &qtd);
                break;
            case 2:
                cadastrarAtores(atores, &qtda);
                break;
            case 3:
                break;
            case 4:
                listaratores(atores, qtda);
                break;
            case 5:
                listarfilmes(locadora, qtd);
                break;
            case 6:
                salvardados(locadora,qtd);
                break;
        }
    }

    return 0;
}
