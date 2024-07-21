//ARTHUS ALMEIDA GIRAO - 511274

/* RESPOSTAS:

>>>Respostas do ITEM A)

    Função Adicionar: CASO 3 - 

        Crio um ponteiro auxiliar do tipo NO que ira receber o endereço de inicio;
        Ultilizo um laço for para percorrer minha lista com o aux = aux->prox (auxiliar recebe endereço armazenado pelo prox);
        Ultilizo condicionais para adicinar na lista;
        Se (pos == tam) ser verdade entao o valor de ponteiro aux, com destino ao endereço do próximo NO que o aux está apontando recebe endereco do NO novo;
        valor do ponteiro novo com destino ao endereço do NO anterior recebe endereço de aux;
        Se o if nao for executado iremos para o else, o ponteiro prox do NO novo recebe o endereço de memoria do NO anterior aux->prox;
        NO anterior acessa endereço do ponterio ant do NO novo;
        NO novo acessa o endereco do ponteiro ant do onde aux aponta;
        aux acessa endereço de prox do NO novo;
    

    Função Remover: CASO 3 - ?????

>>>Respostas do ITEM B)

    Quanto tempo sera nescessario para processar os comandos do diferentes casos, quando a lista tem n elementos ?

    Função Adicionar: 

        Caso 1 - Lista Vazia -> CONSTANTE, sera realizado 5 operaçoes e somente uma vez pois n = 0.
        Caso 2 - Adicionar na posição 0, lista não vazia -> CONSTANTE, sera realizado 5 operações independente do valor de n > 0, e as mudanças nos ponteiros nunca ira caminhar pela lista.
        Caso 3 - Adicionar meio e fim -> LINEAR, por nao haver ponteiro fim e por meio de analise de algoritimo, na pior da hipoteses( pos == tam ) quanto maior o valor de pos, maior sera as operaçoes aux = aux->prox 
        no laço for, pois sera adicionando o novo No no final da lista e para isso deve-se percorrer todos os elementos presentes na lista.

    Função Remover:

        Caso 1 - Unico NO na lista -> CONSTANTE, sera realizado 7 operações e a remoçao ocorrera somente uma unica vez.
        Caso 2 - Mais de um no (meio) -> LINEAR, o ponteiro inicio ira percorrer um numero n de NOS para a remoção;
        Caso 3 - Fim -> LINEAR, a inexistencia do ponteiro fim obriga que o ponteiro inicio percorra ( pos == tam -1), quanto maior o valor de pos , maior sera as operações para percorrer a lisat.

>>> Respostas do ITEM C) 

    Implementado no codigo abaixo.

>>> Respostas do ITEM D) 

    Crio um ponteiro auxiliar do tipo NO que ira receber o endereço de inicio; 
    atribuo o valor 0 a variavel inteira n; 
    crio o ponteiro nome do tipo char;
    apos isso ultilizo um laço for para percorrer todos os nós da lista ultilizando a variavel auxiliar que recebe auxiliar acessando o endereço do proximo NO;
    dentro do laço for crio uma condição if para comparar se a variavel numero de vida é maior que n, se for verdade sera armazenado o valor da vida em n;
    sera acessado o nome do personagem;
    enquanto o laço for se tornar verdadeiro o valor de n sera substituido se aparecer uma variavel de vida maior alem do nome do personagem;
    quando o laço for se tornar falso sera retornado pela funçao o nome do heroi que estiver com a maior vida.

*/

#include <stdio.h> 
#include <stdlib.h> 

typedef struct no // Lista Duplamente encadeada
{ 
    char *nome; 
    int num_vidas; 
    struct no *prox; 
    struct no *ant; 
}NO; 

    NO *inicio = NULL; // Sem ponteiro fim
    int tam =0; 

void adicionar(char *nome, int num_vidas, int pos) // ITEM A) IMPLEMENTAÇÃO
{ 
    // Criação de novo nó
    NO *novo = malloc (sizeof (NO)); 
    novo->nome = nome; 
    novo->num_vidas = num_vidas; 
    novo->prox = NULL; 
    novo->ant = NULL; 
    
    // Casos para adicionar na lista.

    if(tam == 0 && pos == 0) // 1.Lista vazia;
    { 
        inicio = novo; 
        tam++; 
    }
    else if(pos == 0) // 2. Adicionar na posiçao 0, lista não vazia;
    { 
        novo->prox = inicio; 
        inicio->ant = novo; 
        inicio = novo; 
        tam++; 
    }
    else if( pos > 0 && pos <= tam) // 3. Adicionar no meio da lista ou fim;
    { 
        //ITEM a)
        NO * aux = inicio;

        for(int i = 0 ; i < pos - 1 ; i++) 
        {
            aux = aux->prox;
        }

        if(pos == tam)
        {
            aux->prox = novo;
            novo->ant = aux;
        }
        else
        {
            novo->prox = aux->prox;
            aux->prox->ant = novo;
            novo->ant = aux;
            aux->prox = novo;
        }
        tam++;
    }
    else
    { 
        printf("insercao invalida! :/"); 
    } 
} 

void remover(char *nome) // ITEM A) NAO FIZ ????
{ 
    if(tam == 1 && inicio->nome == nome)
    { 
        NO *lixo = inicio; 
        inicio = NULL; 
        free(lixo); 
        tam --; 
    }
    else if(tam > 1 && inicio->nome == nome)
    { 
        NO *lixo = inicio; 
        inicio = inicio->prox; 
        inicio->ant = NULL; 
        free(lixo); 
        tam--; 
    }
    else 
    { 
        //você deverá implementar este caso
        //?????
    } 
} 

void imprimir() // ITEM C) IMPLEMENTAÇÃO
{ 
    NO * aux = inicio;
    
    printf("\nImprimindo lista em ordem crescente...\n");

    for( int i = 0; i < tam ; i++)
    {
        printf("%s - %d\n",aux -> nome, aux -> num_vidas);
        aux = aux -> prox;
    }
    printf("\n");
} 

char* persMaisVidas() //ITEM D) IMPLEMENTAÇÃO
{ 
    NO * aux = inicio;
    int n = 0;
    char *nome;

    for (int i = 0; i < tam - 1; i++)
    {
        aux = aux->prox;

        if ( aux->num_vidas > n)
        {
            n = aux->num_vidas;
            nome = aux->nome;
        }
    }
    return nome;
} 

int main()
{ 
    adicionar("Mario", 2, 0); 
    adicionar("Luigi", 9, 0); 
    adicionar("Princesa", 7, 1); 
    adicionar("Toad", 3, 1); 
    adicionar("Browser", 12, 4); 
    imprimir(); 

    //você pode adicioar variáveis auxiliares caso ache necessário aqui.

    printf("Tamanho - %d\n", tam);
    printf("Personagem c/ mais vidas: %s\n", persMaisVidas());

    return 0;
}