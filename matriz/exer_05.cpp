/*
 5) Elabore um programa que preencha uma matriz 10 X 10 com números inteiros,
execute as trocas especificadas a seguir e mostre a matriz resultante.
 a linha 2 com a linha 8;
 a coluna 4 com a coluna 10;
 a diagonal principal com a diagonal secundária;
 a linha 5 com a coluna 10.
 */

/*
#include <cstdlib>
#include <stdio.h>
#define M 10
#define N 10
using namespace std;

void preenche_matriz(int A[M][N]);
void exibe_matriz(int A[M][N]);

int main() {
    int A[M][N];
    preenche_matriz(A);
    exibe_matriz(A);
    return 0;
}

void preenche_matriz(int A[M][N]) {
    int i, j;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Informe o %d valor: da linha %d: ", j + 1, i + 1);
            scanf("%d", &A[i][j]);
        }
    }
}

void exibe_matriz(int A[M][N]) {
    int i, j, l1 = 0, c1 = 0, aux = 0, cont1 = 0, cont2 = M - 1, P[M], S[M];

    printf("\n\nEXIBINDO A MATRIZ\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }


    printf("\n\nTROCA DE VALORES DA LINHA 2 PARA LINHA 8 DA MATRIZ\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (i == 1) {
                l1 = A[1][j];
                A[1][j] = A[7][j];
                A[7][j] = l1;
            }
        }
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTROCA DE VALORES DA COLUNA 4 PARA LINHA 10 DA MATRIZ\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (j == 3) {
                c1 = A[i][3];
                A[i][3] = A[i][9];
                A[i][9] = c1;
            }
        }
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }


    printf("\n\nTROCA DE VALORES DIAGONAL PRICIPAL\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {

        }
    }


    printf("\n\nTROCA DE VALORES DA DIAGONAL PRINCIPAL COM A DIAGONAL SECUNDARIA.\n");

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (j == cont1)
                P[i] = A[i][j];
            if (j == cont2)
                S[i] = A[i][j];
        }
        cont1++;
        cont2--;
    }


    cont1 = 0;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (j == cont1) {
                aux = A[i][j];
                A[i][j] = S[i];
            }
        }
        cont1++;
    }


    aux = 0;
    cont2 = M - 1;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (j == cont2) {
                aux = A[i][j];
                A[i][j] = P[i];
            }
        }
        cont2--;
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTROCA DA LINHA 5 COM A COLUNA 10\n");
    int ax1 = 0, ax2 = 0;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
           
                ax1 = A[i][4];
               // ax2 = A[9][j];
                A[i][4] = A[9][j];
                A[9][j] = ax1;
            
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }


}
*/ 


/*
#include <stdio.h>
#include <stdlib.h>
#define L 4
#define C 4

int main() {
    int i, j, id1 = 0, aux = 0, P[L], S[L], A[L][C], cont2 = L - 1, cont1 = 0;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Digite o %d valor da linha %d: ", j + 1, i + 1);
            scanf("%d", &A[i][j]);
        }
    }
 
    printf("\n\tMATRIZ ANTES DAS TROCAS\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }


    printf("\n\tMATRIZ PRINCIPAL EM VETOR P[i]\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (j == cont1){
                P[i] = A[i][j];
                printf(" %d ", P[i]);
            }else
                printf("  ");
        }
        cont1++;
        printf("\n");
    }


    printf("\n\tMATRIZ SECUNDARIA EM VETOR S[i]\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (j != cont2)
                printf("  ");
            else{
                S[i] = A[i][j];
                printf(" %d ", S[i]);
                
            }
        }
        cont2--;
        printf("\n");
    }
   
    
   cont1 = 0; 
    printf("\n\tTROCA VALOR DA DIAGONAL PRINCIPAL \n");
    for (i = 0; i < L; i++) {
      for(j = 0; j < C; j++){
         if(j == cont1){
             aux = A[i][j];
             A[i][j] = S[cont1];
         } 
      }
      cont1++;
    }
    
    cont2 = L - 1;
    aux = 0;
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(j == cont2){
                aux = A[i][j];
                A[i][j] = P[i];
            }
        }
        cont2--;
    }
    printf("\n");
    

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) 
            printf("%5d", A[i][j]);
            printf("\n");
        
    }

 
    return 0;
}

 */