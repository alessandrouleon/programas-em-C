/*
 4) Um elemento Aij de uma matriz é dito ponto de sela da matriz A se, e somente se,
Aij for ao mesmo tempo o menor elemento da linha i e o maior elemento da coluna j.
Faça um programa que carregue uma matriz de ordem 2 X 3, verifique se a matriz
possui ponto de sela e, se possuir, mostre seu valor e sua localização.
 */


/*
#include <cstdlib>
#include <stdio.h>
#define L 3
#define C 3
using namespace std;

int preenche_matriz(int A[][C]);
void exibe_matriz(int A[][C]);
void exibe_aij(int A[][C]);

int main() {
    int A[L][C];
    preenche_matriz(A);
    exibe_matriz(A);
    exibe_aij(A);
    return 0;
}

int preenche_matriz(int A[][C]) {
    int i, j;
    printf("\n\nPREENCHENDO A MATRIZ\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Digite o %d valor: ", j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    return A[L][C];
}

void exibe_matriz(int A[][C]) {
    int i, j;
    printf("\n\nEXIBINDO A MATRIZ\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }
}

void exibe_aij(int A[][C]) {
    int i, j, k, b, p_sela = 0, V[L], menor = A[0][0];

    printf("\n\nEXIBINDO Aij \n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (menor > A[i][j])
                menor = A[i][j];
        }
        V[i]= menor;
    }
   
    for(i = 0; i < L; i++){
         printf(" %d ", V[i]);
    }
       
    
   
}

 */














/*

#include <stdio.h> 

int main() {
    int m, n, i, j, k, menor_lin, maior_col, ponto = 0;
    int matriz [100][100];
    printf("Digite o numero de linhas e colunas\n");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite o %d valo da linha %d: ", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("\n\nEXIBINDO A MATRIZ\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nPONTO DE SELA\n");
    for (i = 0; i < m; i++) {
        menor_lin = matriz[i][0];

        for (j = 0; j < n; j++) {
            if (menor_lin > matriz[i][j])
                menor_lin = matriz[i][j];
            maior_col = matriz[0][j];

            for (k = 1; k < m; k++)
                if (maior_col < matriz[k][j])
                    maior_col = matriz[k][j];
            if (menor_lin == maior_col) {
                printf("Ponto de sela: matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
                ponto++;
            }
        }
    }
    if (ponto == 0)
        printf("Não existe ponto de sela\n");
    return 0;
}

*/
