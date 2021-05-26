#include <stdio.h>
#include <stdlib.h>

int V[10];
int main ()
{
    for (int i=0; i < 10; i++){
        printf("Digite um numero [%d]=", i);
        scanf ("%d", &V [ i ]);
    }
    for (int i=0; i < 10; i++)
        printf("[%d] = %d \n", i, V [ i ]);

    system("pause");
}
