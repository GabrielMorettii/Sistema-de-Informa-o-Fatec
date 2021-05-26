#include <stdio.h>
#include <stdlib.h>

int A[5], B[5], M, i;
int main ()
{
    for (i=1; i <= 5; i++){
        printf("Digite o numero do cheque [A]=", i);
        scanf ("%d", &A [ i ]);
        printf("Digite o valor do cheque [B]=", i);
        scanf ("%d", &B [ i ]);
    }
        printf("Digite o numero do cheque que deseja consultar: ");
        scanf("%d", &M);

    for (i=1; i <= 5; i++){
        if(M==A [ i ]){
            printf("O valor do cheque e = %d \n", B [ i ]); exit(0);
        }
    }

        printf("O cheque nao esta cadastrado...\n");
    system("pause");
}
