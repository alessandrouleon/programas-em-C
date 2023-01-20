/*
2) Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior
elemento da linha em que se encontra o menor elemento da matriz. Elabore um
programa que carregue uma matriz 4 X 4 com números reais, calcule e mostre seu
MINMAX e sua posição (linha e coluna).
 */


//#include <stdio.h>
//#include<stdlib.h>
//
//void insere_em_matriz(int mat[][4]) {
//    int i, j;
//    system("cls");
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("\nDigite o elemento %d - %d:  ", i, j);
//            scanf("%d", &mat[i][j]);
//        }
//    }
//}
//
//void minmax(int mat[][4]) {
//    int i, j, menor, maior, linha_menor, coluna;
//    menor = mat[0][0];
//    linha_menor = 0;
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) {
//            if (mat[i][j] < menor) {
//                menor = mat[i][j];
//                linha_menor = i;
//            }
//        }
//    }
//    maior = mat[linha_menor][0];
//    coluna = 0;
//    for (j = 0; j < 4; j++) {
//        if (mat[linha_menor][j] > maior) {
//            maior = mat[linha_menor][j];
//            coluna = j;
//        }
//    }
//    printf("\n\nO elemento MiNMAX  = %d  est  na linha %d coluna %d", maior, linha_menor, coluna);
//
//}
//
//void imprime_matriz_resultante(int mat[][4]) {
//    int i, j;
//    printf("\nImprimindo a matriz resultante\n");
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("        %d", mat[i][j]);
//
//        }
//        printf("\n");
//
//    }
//}
//
//int main() {
//    int mat[4][4];
//    system("cls");
//    insere_em_matriz(mat);
//    imprime_matriz_resultante(mat);
//    minmax(mat);
//
//
//    return 0;
//}