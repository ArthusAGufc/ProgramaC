// Arthus Almeida Girao - 511274 - LAB TURMA 1 2021.2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Variaveis globais
int contartwett = 0;
int contarbloco = 0;
int contarhashtags = 0;

FILE *ponteiro_arq; // Criando arquivo

// Modelagem
typedef struct nobloco{
    char **twett;
    struct nobloco *prox;
}NOBLOCO;

NOBLOCO *comeco = NULL; // VAZIO

// Funções
void adicionarbloco(NOBLOCO *xion)
{
    if(comeco == NULL)
    {
        comeco = xion;
    }
    else 
    {
        NOBLOCO *auxiliar = comeco;

        for( int i = 0; i < contarbloco - 1; i++)
        {
            auxiliar = auxiliar->prox;
        }
        auxiliar->prox = xion;
    }
    contarbloco++;
}

void variostweets(int aux)
{
    char *contarttag;

    NOBLOCO *xion; // ponterio do tipo nobloco
    xion = malloc(sizeof(NOBLOCO)); // alocar bloco 
    xion->twett = malloc(sizeof(char*) * aux); // aloca tweets qtd do usuario

    xion->prox = NULL;
    
    for (int i = 0; i < aux; i++) // aqui vai digitar os twetts por parametro
    {
        xion->twett[i] = malloc(sizeof(char) * 281); // acessa o maloc parar digitar tweets

        printf("Digite tweet: ");
        fflush(stdin);
        scanf("%[^\n]s", xion->twett[i]);

        contarttag = xion->twett[i];
        
        for( contarttag = strchr(contarttag, '#'); contarttag != NULL; contarttag = strchr(contarttag, '#'))
        {
            contarhashtags++;
            contarttag += 1;
        }
        contartwett++;
    }    
    adicionarbloco(xion);  
}

void administrador()
{
    puts("........Informações do Administrador........");
    printf(". Quantidade de tweets: %d\n", contartwett);
    printf(". Quantidade de blocos: %d\n", contarbloco);
    printf(". Quantidade de hashtags: %d\n,", contarhashtags);
    puts("............................................");
}

void salvar(int aux)
{
    char nomearquivo[50]; // nome do arquivo

    printf("Digite o nome do arquivo: "); // pedindo nome do arquivo
    fflush(stdin);
    scanf("%[^\n]s", nomearquivo);

    ponteiro_arq = fopen(nomearquivo,"a"); // abrindo arquivo

    if(ponteiro_arq == NULL){ // tratamento de erro sobre criar arquivo
        printf("Erro! O arquivo não pode ser aberto\n");
        exit(1);
    }
    else{
        printf("Arquivo criado/salvo\n");
    }
       
    NOBLOCO *auxiliar = comeco; // ponteiro auxiliar para percorrer os blocos

    int x = 0;
    while(auxiliar != NULL)
    {   
        x++;

        fprintf(ponteiro_arq,"Bloco [%d]\n",x);
        fputs("*********************************************\n", ponteiro_arq);
        for(int i = 0; i < aux ; i++)
            fprintf(ponteiro_arq," Tweet(%d): %s \n", i+1 , auxiliar->twett[i]);                                                              
        fputs("*********************************************\n", ponteiro_arq);

        auxiliar = auxiliar->prox;
    } 

    fprintf(ponteiro_arq,"Salvo em %s as %s\n",__DATE__,__TIME__); // DATA E HORA

    fclose(ponteiro_arq); // fechando arquivo
}

void imprimirtwett(int aux)
{
    NOBLOCO *auxiliar = comeco;
    
    int x = 0;
    while(auxiliar != NULL)
    {   
        x++;
        printf("Bloco [%d]\n", x);
        puts("*********************************************");
        for(int i = 0; i < aux ; i++)
            printf(" Tweet(%d): %s \n", i+1 ,auxiliar->twett[i]);                                                              
        puts("*********************************************");

        auxiliar = auxiliar->prox;
    } 
}

// Main
int main(void)
{
    SetConsoleOutputCP(65001); // impressora de acentuação

    int twtnobloco;

    printf("Quantos tweets você deseja armazenar em um bloco? ");
    scanf("%d", &twtnobloco);

    while("Laco Infinito") // Para o menu
    {
        int escolha;

        puts("\n----------------------------------------------");
        puts("*  TWITTER LITE                              *");
        puts("*                                            *");
        puts("* [1]. Fazer um tweet                        *");
        puts("* [2]. Listar todos os tweets                *");
        puts("* [3]. Informações do Administrador          *");
        puts("* [4]. Salvar                                *");
        puts("* [0]. Sair                                  *");
        puts("----------------------------------------------");

        scanf("%d", &escolha);

        if(escolha == 0) break;

        switch (escolha)
        {
            case 1:
                variostweets(twtnobloco);
                break;
            case 2:
                imprimirtwett(twtnobloco);
                break;
            case 3:
                administrador();
                break;
            case 4:
               salvar(twtnobloco);
                break;
        }
    }
    return 0;
}
