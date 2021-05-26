#include <stdio.h>
#include <stdlib.h>

int A[3][7], B[3][7], C[3][7], l, c;
int main ()
{
    for (l=0; l<3; l++)
        for(c=0; c<7; c++){
            printf("Digite um numero A[%d][%d]=",l,c);
            scanf("%d", &A[l][c]);
        }
        printf("------------------------------------------------\n");
    for (l=0; l<3; l++)
        for(c=0; c<7; c++){
            printf("Digite um numero B[%d][%d]=",l,c);
            scanf("%d", &B[l][c]);
        }
        printf("\n------------------------------------------------\n");
    for (l=0; l<3; l++)
        for(c=0; c<7; c++){
            C[l][c] = A[l][c] + B[l][c];
            printf("[%d][%d]=[%d]\n",l, c, C[l][c]);
        }
        printf("------------------------------------------------\n");
    system("pause");
}
