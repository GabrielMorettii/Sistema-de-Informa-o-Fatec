#include <stdio.h>
#include <stdlib.h>

int A[10], B[10], C[10], i;
int main ()
{
    for (i=1; i <= 10; i++){
        printf("Digite os elementos de [A]=", i);
        scanf ("%d", &A [ i ]);
        printf("Digite os elementos de [B]=", i);
        scanf ("%d", &B [ i ]);
    }
    for (i=1; i <= 10; i++){
        C [ i ] = A [ i ] * B [ i ];
        printf("O vetor C e = %d \n", C[ i ]);
    }
    system("pause");
}
