#include <stdio.h>
#include <stdlib.h>

int V[10], i;
float soma, media;
int main ()
{
    for (i=1; i <= 10; i++){
        printf("Digite uma nota [%d]=", i);
        scanf ("%d", &V [ i ]);
    }
    for (i=1; i <= 10; i++)
        soma = soma+V [ i ];
        media = soma / 10;
        printf("A media das notas e %.2f \n", media);

    system("pause");
}
