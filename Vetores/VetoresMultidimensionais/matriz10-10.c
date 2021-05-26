#include <stdio.h>
#include <stdlib.h>

int A[10][10], L[10], C[10], l, c, resp, Borda, soma=0, somal, somac, l2, coluna;
int main ()
{
    for (l=0; l<10; l++)
    {
        somal=0;
        for(c=0; c<10; c++)
        {
            printf("Digite um numero [%d][%d]=",l,c);
            scanf("%d", &A[l][c]);
             if(l==c)
            {
                soma = soma+A[l][c];
            }
            somal= somal+A[l][c];
        }
        L[l]=somal;
    }
    for (l=0; l<10; l++)
    {
        for(c=0; c<10; c++){
            printf("[%d][%d]=[%d]\n",l, c, A[l][c]);
        }
            for(c=0; c<10; c++)
            {
                somac=0;
                for(l=0; l<10; l++)
            {
                somac = somac + A[l][c];
            }
                C[c]=somac;
            }
    }
        Borda = L[0]+L[10]+C[0]+C[10]-A[0][0]-A[0][10]-A[10][0]-A[10][10];
        printf("*-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*\n");
        printf("Codigo da operacao: | Tipo de Operacao:\n \n");
        printf("    1   | A soma dos elementos das diagonais da matriz\n ------------------------------------------------------------------------------ \n");
        printf("    2   | A soma dos elementos posicionados na borda externa da matriz \n ------------------------------------------------------------------------------ \n");
        printf("    3   | A soma dos elementos posicionados na linha escolhida pelo usuario\n ------------------------------------------------------------------------------ \n");
        printf("    4   | A soma dos elementos posicionados na coluna escolhida pelo usuario\n ------------------------------------------------------------------------------ \n");
        printf("    5   | A soma dos elementos de uma submatriz determinada por dois elementos \n        |posicao inicial [linha e coluna] e posicao final [linha e coluna] \n ------------------------------------------------------------------------------ \n");
        printf("Digite o codigo da operacao:");
        scanf("%d", &resp);
        if (resp==1){
            printf("O valor da operacao e: %d\n", soma);
        }
        else if (resp==2){
            printf("O valor da operacao e: %d\n", Borda);
        }
        else if (resp==3){
            printf("Digite a linha da matriz a ser somada:");
            scanf("%d", &l2);
            switch(l2)
            {

                case 0:
                printf("O valor da operacao e: %d\n", L[0]);
                break;

                case 1:
                printf("O valor da operacao e: %d\n", L[1]);
                break;

                case 2:
                printf("O valor da operacao e: %d\n", L[2]);
                break;

                case 3:
                printf("O valor da operacao e: %d\n", L[3]);
                break;

                case 4:
                printf("O valor da operacao e: %d\n", L[4]);
                break;

                case 5:
                printf("O valor da operacao e: %d\n", L[5]);
                break;

                case 6:
                printf("O valor da operacao e: %d\n", L[6]);
                break;

                case 7:
                printf("O valor da operacao e: %d\n", L[7]);
                break;

                case 8:
                printf("O valor da operacao e: %d\n", L[8]);
                break;

                case 9:
                printf("O valor da operacao e: %d\n", L[9]);
                break;

                case 10:
                printf("O valor da operacao e: %d\n", L[10]);
                break;

                default:
                printf("Valor invalido");
                break;
            }
        }else if(resp==4){
            printf("Digite a coluna da matriz a ser somada:");
            scanf("%d", &coluna);
            switch(coluna)
            {

                case 0:
                printf("O valor da operacao e: %d\n", C[0]);
                break;

                case 1:
                printf("O valor da operacao e: %d\n", C[1]);
                break;

                case 2:
                printf("O valor da operacao e: %d\n", C[2]);
                break;

                case 3:
                printf("O valor da operacao e: %d\n", C[3]);
                break;

                case 4:
                printf("O valor da operacao e: %d\n", C[4]);
                break;

                case 5:
                printf("O valor da operacao e: %d\n", C[5]);
                break;

                case 6:
                printf("O valor da operacao e: %d\n", C[6]);
                break;

                case 7:
                printf("O valor da operacao e: %d\n", C[7]);
                break;

                case 8:
                printf("O valor da operacao e: %d\n", C[8]);
                break;

                case 9:
                printf("O valor da operacao e: %d\n", C[9]);
                break;

                case 10:
                printf("O valor da operacao e: %d\n", C[10]);
                break;

                default:
                printf("Valor invalido");
                break;
                }
        }
        //Não consegui fazer a 5, não compreendi muito bem...
    system("pause");
}
