/*
 2) Preencha dois vetores de 5 posições cada, e faça a troca de valores entre os 
 vetores, de modo que o primeiro vetor receba os valores do segundo vetor e o segundo
 vetor, receba os valores do primeiro vetor. Exiba os vetores antes e após a troca.
 */

/*
#include <cstdlib>
#include <stdio.h>
#define TAM 5
using namespace std;

void preenche_vetores(int *vetor1, int *vetor2);
void troca_valor_vetores(int *vetor1, int *vetor2);

int main() {
    int vetor1[TAM], vetor2[TAM];
    preenche_vetores(vetor1, vetor2);
    troca_valor_vetores(vetor1, vetor2);
    return 0;
}

void preenche_vetores(int *vetor1, int *vetor2) {
    int i = 0, j = 0;
    printf("\nVETOR 1\n");
    while (i < 5) {
        printf("Digite o %d Valor do Vetor1: ", i + 1);
        scanf("%d", &vetor1[i]);
        i++;
    }
    printf("\nVETOR 2\n");
    while (j < 5) {
        printf("Digite o %d Valor do Vetor2: ", j + 1);
        scanf("%d", &vetor2[j]);
        j++;
    }
    i = 0, j = 0;
    printf("\nVETOR 1\n");
    while (i < 5) {
        printf(" %d ", vetor1[i]);
        i++;
    }
    printf("\nVETOR 2\n");
    while (j < 5) {
        printf(" %d ", vetor2[j]);
        j++;
    }
}

void troca_valor_vetores(int *vetor1, int *vetor2) {
    int i = 0, aux = 0;
    printf("\n\nTROCA DE VALORES");
    while (i < 5) {
        aux = vetor1[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = aux;
        printf("\n vetor1[%d]  vetor2[%d]", vetor1[i], vetor2[i]);
        i++;
    }
}

 */







//#include <cstdlib>
//#include <stdio.h>
//#define LIM 5
//using namespace std;
//
//void preenche_vetores_A_B(int *A, int *B);
//void troca_de_valores_A_B(int *A, int *B);
//
//int main() {
//    int A[LIM], B[LIM];
//    preenche_vetores_A_B(A, B);
//    troca_de_valores_A_B(A, B);
//    return 0;
//}
//
//void preenche_vetores_A_B(int *A, int *B) {
//    int i, j;
//
//    printf("\n\nPREENCHENDO VETOR [A]\n");
//    for (i = 0; i < LIM; i++) {
//        printf("Digite o %d valor: ", i + 1);
//        scanf("%d", &A[i]);
//    }
//    printf("\n\nPREENCHENDO VETOR [B]\n");
//    for (j = 0; j < LIM; j++) {
//        printf("Digite o %d valor: ", j + 1);
//        scanf("%d", &B[j]);
//    }
//
//    printf("\n\nVETOR [A] ANTES DA TROCA\n");
//    for (i = 0; i < LIM; i++) {
//        printf(" %d ", A[i]);
//    }
//    printf("\n\nVETOR [B] ANTES DA TROCA\n");
//    for (j = 0; j < LIM; j++) {
//        printf(" %d ", B[j]);
//    }
//}
//
//
//void troca_de_valores_A_B(int *A, int *B){
//    int i, j, aux = 0;
//    for(i = 0; i < LIM; i++){
//        aux = A[i];
//        A[i] = B[i];
//        B[i] = aux;
//    }
//    
//    printf("\n\nVETOR [A] APOS A TROCA\n");
//    for (i = 0; i < LIM; i++) {
//        printf(" %d ", A[i]);
//    }
//    printf("\n\nVETOR [B] APOS A TROCA\n");
//    for (j = 0; j < LIM; j++) {
//        printf(" %d ", B[j]);
//    }
//    
//}
// 