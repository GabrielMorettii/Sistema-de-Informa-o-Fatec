#include <stdio.h>
#include <stdlib.h>

int A[3][3], l, c, mult=1;
int main ()
{
    for (l=0; l<3; l++)
        for(c=0; c<3; c++){
            printf("Digite um numero A[%d][%d]=",l,c);
            scanf("%d", &A[l][c]);
        }
        printf("------------------------------------------------\n");
    for (l=0; l<3; l++)
        for(c=0; c<3; c++){
            mult = mult*A[l][c];
            printf("[%d][%d]=[%d]\n",l, c, mult);
        }
        printf("------------------------------------------------\n");
    system("pause");
}
