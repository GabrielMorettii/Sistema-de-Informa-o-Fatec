#include <stdio.h>
#include <stdlib.h>

int A[10][1], l, c, mult=1;
char name [10][15];
int main ()
{
    for(l=0; l<10; l++){
        printf("Digite um nome: ");
        scanf("%s", &name [l]);
    }
    for (l=0; l<10; l++)
        for(c=0; c<1; c++){
            printf("Digite a nota do aluno= ",l,c);
            scanf("%d", &A[l][c]);
        }
        printf("------------------------------------------------\n");
    for (l=0; l<10; l++)
        for(c=0; c<1; c++){
            if(A[l][c]>=5){
                printf("\nA nota do aluno %s foi superior a 5. nota = %d\n", name [l], A[l][c]);
            }else{
                printf("\nA nota do aluno %s foi inferior a 5. nota = %d\n", name [l], A[l][c]);
            }
        }
        printf("\n------------------------------------------------\n");
    system("pause");
}
