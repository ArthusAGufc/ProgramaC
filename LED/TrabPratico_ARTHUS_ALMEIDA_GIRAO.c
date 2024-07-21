//Trabalho Pratico - Remover de arvore binaria - LINHA 45 ESTA A FUNCAO REMOVER DE TODOS OS TIPOS DE NOS

// ARTHUS ALMEIDA GIRAO - 511274

#include<stdio.h>
#include<stdlib.h>

// Modelagem
typedef struct vertice{
    int chave;
    struct vertice *dir;
    struct vertice *esq;
}VERTICE;

// Funcoes de Adicionar, Buscar, Remover 
VERTICE* adicionar(VERTICE *raiz, int numero){
    if(raiz == NULL){
        VERTICE *aux = malloc(sizeof(VERTICE));
        aux->chave = numero;
        aux->esq = NULL;
        aux ->dir = NULL;
        return aux;
    }
    else{
        if(numero < raiz->chave)
            raiz->esq = adicionar(raiz->esq, numero);
        else
            raiz->dir = adicionar(raiz->dir, numero);
        return raiz;
    }
}

VERTICE* buscar(VERTICE *raiz, int numero){
    if(raiz){
        if(numero == raiz->chave)
            return raiz;
        else if(numero < raiz->chave)
            return buscar(raiz->esq, numero);
        else
            return buscar(raiz->dir, numero);
    }
    return NULL;
}

VERTICE* remover(VERTICE *raiz, int numero){
    if(raiz == NULL){ // Verificar se arvore é nula
        printf("Valor nao encontrado!\n");
        return NULL;
    }
    else{ // Proucura de no a ser removido
        if(raiz->chave == numero){

            if(raiz->esq == NULL && raiz->dir == NULL){ // Remover no folha (sem filhos)
                free(raiz);
                printf("Folha removida: %d !!!\n", numero);
                return NULL;
            }
            else{
                if(raiz->esq != NULL && raiz->dir != NULL){ // Remover no de 2 filhos
                    VERTICE *aux = raiz->esq;
                    while(aux->dir != NULL)
                        aux = aux->dir;
                    raiz->chave = aux->chave;
                    aux->chave = numero;
                    raiz->esq = remover(raiz->esq, numero);
                    printf("No de 2 filhos removido: %d !!!\n", numero);
                    return raiz;
                }
                else{ // Remover no com 1 filho
                    VERTICE *aux;
                    if(raiz->esq != NULL)
                        aux = raiz->esq;
                    else
                        aux = raiz->dir;
                    free(raiz);
                    printf("No de 1 filho removido: %d !!!\n", numero);
                    return aux;
                }  
            }
        }
        else{
            if(numero < raiz->chave)
                raiz->esq = remover(raiz->esq, numero);
            else
                raiz->dir = remover(raiz->dir,numero);
            return raiz;
        }    
    }
}

// Funcoes de verificar altura, altura de no, imprimir em diferentes ordens
int altura(VERTICE *raiz){
    if(raiz == NULL){
        return -1;
    }
    else{
        int armzesq = altura(raiz->esq);
        int armzdir = altura(raiz->dir);
        if(armzesq > armzdir)
            return armzesq + 1;
        else
            return armzdir + 1;
    }
}

int altura_no(VERTICE *raiz, int numero){
    VERTICE *x = buscar(raiz, numero);
    if(x)
        return altura(x);
    else
        return -1;
}

void imprimir_pre_ordem(VERTICE *raiz){ // pre ordem
    if(raiz){
        printf("%d,",raiz->chave);
        imprimir_pre_ordem(raiz->esq);
        imprimir_pre_ordem(raiz->dir);
    }
}

void imprimir_in_ordem(VERTICE *raiz){ // in ordem
    if(raiz){
        imprimir_in_ordem(raiz->esq);
        printf("%d,",raiz->chave);
        imprimir_in_ordem(raiz->dir);
    }
}

void imprimir_pos_ordem(VERTICE *raiz){ // pos ordem
    if(raiz){
        imprimir_pos_ordem(raiz->esq);
        imprimir_pos_ordem(raiz->dir);
        printf("%d,",raiz->chave);
    }
}


// Main
int main()
{
    VERTICE *raiz = NULL; // arvore vazia

    // Adicinar na arvore
    raiz = adicionar(raiz, 0);
    raiz = adicionar(raiz, 1);
    raiz = adicionar(raiz, 2);
    raiz = adicionar(raiz, -20);
    raiz = adicionar(raiz, -30);
    raiz = adicionar(raiz, -15);
    raiz = adicionar(raiz, 3);
    raiz = adicionar(raiz, 4);
    raiz = adicionar(raiz, 50);
    raiz = adicionar(raiz, 49);
    raiz = adicionar(raiz, 30);
    raiz = adicionar(raiz, 53);
    raiz = adicionar(raiz, 71);
    raiz = adicionar(raiz, 717);
    raiz = adicionar(raiz, 77);
    raiz = adicionar(raiz, -84);
    raiz = adicionar(raiz, 97);
    raiz = adicionar(raiz, 33);
    raiz = adicionar(raiz, -2);
    raiz = adicionar(raiz, 5);
    raiz = adicionar(raiz, -54);

    printf("\n"); //------------------

    // Remover da arvore (TRABALHO PRATICO)
    raiz = remover(raiz, 50); // no de 2 filhos 
    raiz = remover(raiz, -2); // folha
    raiz = remover(raiz, -54); // folha
    raiz = remover(raiz, 5); // folha
    raiz = remover(raiz, -30); // no com 1 filho
    raiz = remover(raiz, 49); // no com 1 filho
    raiz = remover(raiz, 0); // no com 2 filhos raiz
    


    printf("\n"); //------------------
   
    imprimir_pre_ordem(raiz);
    printf("\n"); //------------------

    imprimir_in_ordem(raiz);
    printf("\n"); //------------------

    imprimir_pos_ordem(raiz);
    printf("\n"); //------------------

    printf("%d", altura(raiz));
    printf("\n"); //------------------


    printf("%d, ", altura_no(raiz, 0));
    printf("%d, ", altura_no(raiz, 10));
    printf("%d, ", altura_no(raiz, 17));
    printf("%d, ", altura_no(raiz, 3));
    printf("%d, ", altura_no(raiz, 12));
    
    
    return 0;
}