#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, n, result;

    contador=0;
    result=0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Esta e a tabuada do numero %d \n", n);
    do
    {
        result = n * contador;
        printf("%d X %d = %d \n", n, contador, result);
        contador = contador +1;
    }
    while (contador<=10);
    system("pause");
}
