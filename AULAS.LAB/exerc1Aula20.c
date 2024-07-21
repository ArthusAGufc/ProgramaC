// ttps://youtu.be/hd8u2rvZQoU

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> 

int main()
{
    int *p;

    p = (int*) malloc( 5 * sizeof(int));

    for ( int i = 0; i < 5; i++)
    {
        p[i] = 2*i;
    }

    printf("p =  ");
    for ( int i = 0; i < 5; i++)
    {
        printf("%d, ",p[i]);
    }
    puts("");
    

    return 0;
}