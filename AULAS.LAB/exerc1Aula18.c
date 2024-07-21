// https://youtu.be/QWp8zxlrKko 37:02 1:25:04 1:32:00

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);



    char a = 'R';
    char z = 'G';
   // int b = 2;
   // float c = 4.5f;
    //double d = 3.14;

    char *p = &a;

   // char *p; // criando ponteiro, p é um ponteiro que aponta  apenas para caracteres 

   // p = &a; // estou passando o enderenco de memoria da variavel a, para o ponteiro p que é exclusico de char

    printf("\n\n");
      
    printf("Localizaçao(a) = %p, Conteudo(a) = %c\n", &a, a);
    printf("Localizaçao(z) = %p, Conteudo(z) = %c\n", &z, z);
    printf("Conteudo(p) = %p\n\n", p);

    *p = 'A'; // Altera o conteudo apontado pela variavel p
    
    printf("Localizaçao(a) = %p, Conteudo(a) = %c\n", &a, a);
    printf("Localizaçao(z) = %p, Conteudo(z) = %c\n", &z, z);
    printf("Conteudo de p = %p\n\n", p);

    p = &z;

    *p = 'Q';

    printf("Localizaçao(a) = %p, Conteudo(a) = %c\n", &a, a);
    printf("Localizaçao(z) = %p, Conteudo(z) = %c\n", &z, z);
    printf("Conteudo de p = %p, tamanho(p) = %ld\n", p, sizeof(p));
    printf("Conteudo de p = %p\n\n", p);


  //  printf("size(a) = %ld, location(a) = %p\n",sizeof(a),&a); // %p = imprime endereco de memoria
  //  printf("size(b) = %ld, location(b) = %p\n",sizeof(b),&b);
  //  printf("size(c) = %ld, location(c) = %p\n",sizeof(c),&c);
  //  printf("size(d) = %ld, location(d) = %p\n",sizeof(d),&d);

    




    return 0;
}