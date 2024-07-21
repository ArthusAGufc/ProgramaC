#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    
    //qualquer informação pode vir dentro do nó
    //depende da aplicação
    int valor;
    
    
    //MUITO IMPORTANTE
    //mecanismo de ligacao <3 - PONTEIROS
    struct no * prox;
    
}NO;

NO * inicio = NULL; //VAZIA!!!    
int tam = 0;

void adicionar (int valor)
{
    // alocaçao dinamica
    NO * novo = malloc(sizeof(NO));
    novo->valor = valor;
    novo->prox = NULL;

    if (inicio == NULL)// LISTA ESTA VAZIA
    {
        inicio = novo;
        tam++;
    }

}





int main(){

    adicionar(10);

    return 0;
}