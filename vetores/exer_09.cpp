/*
 9) Faça um programa que preencha dois vetores com cinco elementos numéricos cada e
depois ordene-os de maneira crescente. Deverá ser gerado um terceiro vetor com dez
posições, composto pela junção dos elementos dos vetores anteriores, também
ordenado de maneira crescente.
 */

//#include <cstdlib>
//#include <stdio.h>
//#define TAM 5
//using namespace std;
//
//void preenche_vetores();
//void ordena_vetores_crescente(int *vet1, int *vet2);
//void ordena_juncao_crescente(int *juncao);
//
//int main() {
//    preenche_vetores();
//    return 0;
//}
//
//void preenche_vetores() {
//    int vet1[TAM], vet2[TAM];
//    int i = 0, j = 0, cont = 0, juncao[2 * TAM];
//
//    do {
//        printf("Digite a %d posicao do vetor 1: ", i + 1);
//        scanf("%d", &vet1[i]);
//        juncao[cont++] = vet1[i];
//        i++;
//    } while (i < TAM);
//    printf("\n\n");
//
//    do {
//        printf("Digite a %d posicao do vetor 2: ", j + 1);
//        scanf("%d", &vet2[j]);
//        juncao[cont++] = vet2[j];
//        j++;
//    } while (j < TAM);
//    ordena_vetores_crescente(vet1, vet2);
//    ordena_juncao_crescente(juncao);
//}
//
//void ordena_vetores_crescente(int *vet1, int *vet2) {
//    int i, j, aux = 0;
//
//    for (i = 0; i < TAM; i++) {
//        for (j = 0; j < TAM; j++) {
//            if (vet1[i] < vet1[j]) {
//                aux = vet1[i];
//                vet1[i] = vet1[j];
//                vet1[j] = aux;
//            }
//        }
//    }
//    for (i = 0; i < TAM; i++) {
//        for (j = 0; j < TAM; j++) {
//            if (vet2[i] < vet2[j]) {
//                aux = vet2[i];
//                vet2[i] = vet2[j];
//                vet2[j] = aux;
//            }
//        }
//    }
//
//    printf("\n\nVetor1: ");
//    for(i = 0; i < TAM; i++) {
//        printf("[%d] ", vet1[i]);
//    }  
//    printf("\n\nVetor2: ");
//    for(j = 0; j < TAM; j++) {
//        printf("[%d] ", vet2[j]);
//    } 
//}
//
//void ordena_juncao_crescente(int *juncao) {
//    int i, j, aux = 0;
//    
//    for(i = 0; i < (2 * TAM); i++){
//        for(j = 0; j < (2 * TAM); j++){
//            if(juncao[i] < juncao[j]){
//                aux = juncao[i];
//                juncao[i] = juncao[j];
//                juncao[j] = aux;
//            }
//        }
//    }
//    
//    printf("\n\nJuncao: ");
//    for (i = 0; i < (2 * TAM); i++) {
//        printf(" %d ", juncao[i]);
//    }
//    printf("\n\n");
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//#define LIM 5
//
//void lendo_vetores(float *A, float *B, float *C);
//void ordena_vetores(float *A, float *B, float *C);
//void exibe_vetores(float *A, float *B, float *C);
//
//int main(){
//    float A[LIM], B[LIM], C[LIM * 2];
//    lendo_vetores(A, B, C);
//    ordena_vetores(A, B, C);
//    exibe_vetores(A, B, C);
//    return 0;
//}
//
//void lendo_vetores(float *A, float *B, float *C){
//    int i, id = 0;
//    printf("\n\n\tLENDO VETOR A\n");
//    for(i = 0; i < LIM; i++){
//       printf("\tDigite o %d valor: ",i+1); 
//       scanf("%f",&A[i]);
//       C[id++] = A[i];
//    }
//  
//    printf("\n\n\tLENDO VETOR B\n");
//    for(i = 0; i < LIM; i++){
//       printf("\tDigite o %d valor: ",i+1); 
//       scanf("%f",&B[i]);
//       C[id++] = B[i];
//    }
//}
//
//void ordena_vetores(float *A, float *B, float *C){
//    int i, j;
//    float aux = 0;
//    
//    for(i = 0; i < LIM; i++){
//        for(j = 0; j < LIM; j++){
//            if(A[i] < A[j]){
//                aux = A[i];
//                A[i] = A[j];
//                A[j] = aux;
//            }
//        }
//    }
//    aux = 0;
//    for(i = 0; i < LIM; i++){
//        for(j = 0; j < LIM; j++){
//            if(B[i] < B[j]){
//                aux = B[i];
//                B[i] = B[j];
//                B[j] = aux;
//            }
//        }
//    }
//    aux = 0;
//    for(i = 0; i < (LIM * 2); i++){
//        for(j = 0; j < (LIM * 2); j++){
//            if(C[i] < C[j]){
//                aux = C[i];
//                C[i] = C[j];
//                C[j] = aux;
//            }
//        }
//    }
//}
//
//void exibe_vetores(float *A, float *B, float *C){
//    int i;
//    printf("\n\n\t Vetor A {");
//    for(i = 0; i < LIM; i++){
//        printf(" %.2f ",A[i]);
//    }
//    printf("}");
//    
//    printf("\n\n\t Vetor B {");
//    for(i = 0; i < LIM; i++){
//        printf(" %.2f ",B[i]);
//    }
//    printf("}");
//    
//    printf("\n\n\t JUNCAO DE A e B {");
//    for(i = 0; i < (LIM * 2); i++){
//        printf(" %.2f ",C[i]);
//    }
//    printf("}\n\n");
//}