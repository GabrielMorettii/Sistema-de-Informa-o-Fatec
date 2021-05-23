#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, quadrado;

    n=15;
    quadrado=0;
    do
    {
        quadrado = n * n;
        printf("O quadrado de %d e = %d \n", n, quadrado);
        n = n + 1;
    }
    while (n<=200);
        printf("A soma total equivale a %d \n", quadrado);

    system("pause");

}
