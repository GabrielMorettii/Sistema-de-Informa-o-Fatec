#include <stdio.h>
#include <stdlib.h>

int k, A[5][8], B[5][8], l, c;
int main ()
{
    printf("Digite um numero: ");
    scanf("%d", &k);
    for (l=0; l<5; l++)
        for(c=0; c<8; c++){
            printf("Digite um numero A[%d][%d]=",l,c);
            scanf("%d", &A[l][c]);
        }
        printf("\n------------------------------------------------\n");
    for (l=0; l<5; l++)
        for(c=0; c<8; c++){
            B[l][c] = k * A[l][c];
            printf("[%d][%d]=[%d]\n",l, c, B[l][c]);
        }
        printf("------------------------------------------------\n");
    system("pause");
}
