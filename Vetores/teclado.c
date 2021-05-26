#include <stdio.h>
#include <stdlib.h>

int V[20], i, K;
float mult, total;
int main ()
{
    for (i=1; i <= 20; i++){
        printf("Digite um numero [%d]=", i);
        scanf ("%d", &V [ i ]);
    }
        printf("Digite o valor de K: ");
        scanf ("%d", &K);

    for (i=1; i <= 20; i++){
        mult = K * V [ i ];
        total = total + mult;
        printf("O valor final e = %.2f \n", K, total);

    }
    system("pause");
}
