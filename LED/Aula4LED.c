#include <stdio.h>
#include <stdlib.h>

// Aula 4 - Conceitos iniciais sobre a TAD Nó

typedef struct no{
    
    //qualquer informação pode vir dentro do nó
    //depende da aplicação
    int valor;
    
    
    //MUITO IMPORTANTE
    //mecanismo de ligacao <3 - PONTEIROS
    struct no * prox;
    
}NO;



int main(){
    
    NO n1;
    n1.valor = 8;
    
    NO n2;
    n2.valor = 10;
    
    NO n3;
    n3.valor = 5;
    
    n1.prox = &n2;
    n2.prox = &n3;
    n3.prox = NULL;
    
    
    return 0;
}
