#include <stdio.h>
#include <stdlib.h>

int S[50], I[50], T[50], ma=0, m=0, f=0, i;

void main ()

{
    for (i=1; i <= 3; i++)
    {
        printf("Digite o sexo do animal [%d]: \n Masculino : 1 \n Feminino : 2 \n= ", i);
        scanf ("%d", &S [ i ]);
        printf("Digite a idade do animal [%d] =", i);
        scanf ("%d", &I [ i ]);
        printf("Digite o tipo do animal [%d]: \n Mamifero: 1 \n Aves : 2 \n Repteis: 3 \n Anfibios: 4 \n e Peixes: 5 \n=", i);
        scanf ("%d", &T [ i ]);
        if(T[i]==1)
        {
            ma = ma + 1;
        }
        if(S[i]==1 && I[i]>10 && T[i]==1);
        {
            m = m + 1;
        }
    }
        printf("A quantidade de mamiferos e %d e o numero de machos com mais de 10 anos e: %d", ma, m);
}
