#include <stdio.h>
int main()
{
    char palavra[30], aux[30];
    int chave=1, i;
    scanf(" %s", palavra);
 
    while(chave < 26)
    {
        i = 0;
        while(palavra[i] != '\0')
        {
            aux[i] = palavra[i] + chave;
            if((palavra[i] + chave) > 122)
            {
                aux[i] -=26;
            }
            if((palavra[i] + chave) < 97)
            {
                aux[i] += 26;
            }
            i++;
        }
        aux[i] = '\0';
        printf("chave %d: %s ", chave, aux);
 
        if(chave%5 == 0)
        {
            printf("\n\n");
        }
        chave++;
    }
    printf("\n");
    return 0;
}