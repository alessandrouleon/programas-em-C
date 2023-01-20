/*
1) Crie um programa que preencha uma matriz 3 X 4 com números inteiros e some
cada uma das linhas, armazenando os resultados das somas em um vetor. A seguir, o
programa deverá multiplicar cada elemento da matriz pela soma da linha
correspondente e mostrar a matriz resultante.
 */


//#include <cstdlib>
//#include <stdio.h>
//#define L 3
//#define C 4
//using namespace std;
//
//int preenchendo_matriz(int matriz[L][C]);
//void exibe_matriz(int matriz[L][C]);
//
//int main() {
//    int matriz[L][C];
//    preenchendo_matriz(matriz);
//    exibe_matriz(matriz);
//    return 0;
//}
//
//int preenchendo_matriz(int matriz[L][C]) {
//    int i, j;
//    printf("\n\nPREENCHENDO A MATRIZ\n");
//    for (i = 0; i < L; i++) {
//        for (j = 0; j < C; j++) {
//            printf("Digite o %dº valor da linha %d: ", j + 1, i + 1);
//            scanf("%d", &matriz[i][j]);
//        }
//    }
//    return matriz[L][C];
//}
//
//void exibe_matriz(int matriz[L][C]) {
//    int i, j, id = 0, soma = 0, vetor[L];
//   
//    
//    printf("\n\nEXIBINDO A MATRIZ\n");
//    for (i = 0; i < L; i++) {
//        for (j = 0; j < C; j++) {
//            printf(" %d ", matriz[i][j]);
//            soma += matriz[i][j];
//        }
//        vetor[i] = soma;
//        soma = 0;
//        printf("\n");
//
//    }
//    
//    
//    printf("\n\nEXIBINDO A SOMA DAS LINHAS\n");
//    for (i = 0; i < L; i++) {
//        printf(" [%d] ", vetor[i]);
//    }
//
//    
//    printf("\n\nEXIBINDO A MULTIPLICACAO DAS LINHAS\n");
//    for (i = 0; i < L; i++) {
//        for (j = 0; j < C; j++) {
//            matriz[i][j] *= vetor[i];
//        }
//    }
//
//    
//    for (i = 0; i < L; i++) {
//        for (j = 0; j < C; j++) {
//            printf(" [%d] ", matriz[i][j]);
//        }
//       printf("\n"); 
//    }
//}
// 
