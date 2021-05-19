#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, s, calc;
    printf("Digite um valor: ");
    scanf("%d", &s);
    for(n=1; n<=10; n++)
    {
        printf("%d \n", calc=s+n);
    }
    system("pause");
}
