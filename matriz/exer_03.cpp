/*
 3) Crie um programa que preencha uma primeira matriz de ordem 3 X 4 e uma
segunda matriz 4 X 2. O programa deverá, também, calcular e mostrar a matriz
resultante do produto matricial das duas matrizes anteriores, armazenando-o em uma
terceira matriz de ordem 3 X 2.
 */


//#include <cstdlib>
//#include <stdio.h>
//#define LIM 100
//using namespace std;
//
//void preenchendo_as_matrizis(float A[LIM][LIM], float B[LIM][LIM]);
//void exibe_as_matrizis(float A[LIM][LIM], float B[LIM][LIM], int am, int an, int bm, int bn);
//void resultante_do_produto_matricial(float C[LIM][LIM], int cm, int cn);
//
//int main() {
//    float A[LIM][LIM], B[LIM][LIM];
//    preenchendo_as_matrizis(A, B);
//    return 0;
//}
//
//void preenchendo_as_matrizis(float A[LIM][LIM], float B[LIM][LIM]) {
//    int i, j, am, an, bm, bn;
//
//    printf("\n\nINFORME O NUMERO DE LINHAS E COLUNAS DA MATRIZ A. \n");
//    printf("Linha: ");
//    scanf("%d", &am);
//    printf("Coluna: ");
//    scanf("%d", &an);
//
//    printf("\n\nINFORME O NUMERO DE LINHAS E COLUNAS DA MATRIZ B. \n");
//    printf("Linha: ");
//    scanf("%d", &bm);
//    printf("Coluna: ");
//    scanf("%d", &bn);
//
//    if (am > LIM || an > LIM || bm > LIM || bn > LIM)
//        printf("\n\nNAO E POSSIVEL PREENCHER A MATRIZ\n");
//
//    else {
//        printf("\n\nPREENCHENDO A MATRIZ A. \n");
//        for (i = 0; i < am; i++) {
//            for (j = 0; j < an; j++) {
//                printf("Informe o %d valor da linha %d: ", j + 1, i + 1);
//                scanf("%f", &A[i][j]);
//            }
//        }
//
//        printf("\n\nPREENCHENDO A MATRIZ B. \n");
//        for (i = 0; i < bm; i++) {
//            for (j = 0; j < bn; j++) {
//                printf("Informe o %d valor da linha %d: ", j + 1, i + 1);
//                scanf("%f", &B[i][j]);
//            }
//        }
//        exibe_as_matrizis(A, B, am, an, bm, bn);
//    }
//}
//
//void exibe_as_matrizis(float A[LIM][LIM], float B[LIM][LIM], int am, int an, int bm, int bn) {
//    int i, j, k, cm, cn;
//    float C[LIM][LIM];
//
//    printf("\n\nVALORES DA MATRIZ A. \n");
//    for (i = 0; i < am; i++) {
//        for (j = 0; j < an; j++) {
//            printf(" %.0f ", A[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("\n\nVALORES DA MATRIZ B. \n");
//    for (i = 0; i < bm; i++) {
//        for (j = 0; j < bn; j++) {
//            printf(" %.0f ", B[i][j]);
//        }
//        printf("\n");
//    }
//
//    if (an != bm)
//        printf("\n\nNAO E POSSIVEL CALCULAR O PRODUTO DAS MATRIZIS\n");
//    else {
//        cm = am;
//        cn = bn;
//        for (i = 0; i < cm; i++) {
//            for (j = 0; j < cn; j++) {
//                C[i][j] = 0.0;
//                for (k = 0; k < an; k++) {
//                    C[i][j] += A[i][k] * B[k][j];
//                }
//            }
//        }
//        resultante_do_produto_matricial(C, cm, cn);
//    }
//}
//
//void resultante_do_produto_matricial(float C[LIM][LIM], int cm, int cn) {
//    int i, j;
//    
//    printf("\n\nPRODUTO DAS MATRIZIS\n");
//    for(i = 0; i < cm; i++){
//        for(j = 0; j < cn; j++)
//            printf(" %.0f ",C[i][j]);
//            printf("\n");
//    }
//}
// 