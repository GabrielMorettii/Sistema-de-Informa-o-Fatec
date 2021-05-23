#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma;

    n=0;
    soma=0;
    do
    {
        soma = soma + n;
        printf("O numero a ser somado e %d e a sona esta em %d \n", n, soma);
        n = n + 1;
    }
    while (n<100);
        printf("A soma total equivale a %d \n", soma);

    system("pause");

}
