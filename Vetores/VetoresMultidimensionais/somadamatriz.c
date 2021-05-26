#include <stdio.h>
#include <stdlib.h>

int A[5][8], l, c, soma;
int main ()
{
    for (l=0; l<4; l++)
        for(c=0; c<7; c++){
            printf("Digite um numero A[%d][%d]=",l,c);
            scanf("%d", &A[l][c]);
        }
    for (l=0; l<4; l++)
        for(c=0; c<7; c++){
            soma = soma+A[l][c];
            printf("[%d][%d]=[%d]\n",l, c, soma);
        }
        printf("------------------------------------------------\n");
    system("pause");
}
