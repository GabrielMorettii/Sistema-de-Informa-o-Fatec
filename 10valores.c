#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, calc=0, x;
    for(n=1; n<=10; n++)
    {
        printf("Digite um numero:");
        scanf("%d", &x);
        calc = calc + x;
    }
    printf("%d \n", calc);
    system("pause");
}
