#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char name [50];
    int n;
    printf("Digite um nome: ");
    gets(name);
    for(n=0; n<10; n++)
    {
        printf("%s \n", name);
    }
    system("pause");
}
