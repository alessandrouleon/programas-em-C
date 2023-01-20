/*
 8) Faça um programa que, no momento de preencher um vetor com oito números inteiros,
já os armazene de forma crescente.
 */

//#include <cstdlib>
//#include <stdio.h>
//#define TAM 8
//using namespace std;
//
//void preenche_e_ordena(int *vetor);
//
//int main() {
//    int vetor[TAM];
//    preenche_e_ordena(vetor);
//    return 0;
//}
//
//void preenche_e_ordena(int *vetor) {
//    int i, j, aux = 0, ordena[TAM];
//
//    for (i = 0; i < TAM; i++) {
//        printf("\n\nDigite o %d numero: ", i + 1);
//        scanf("%d", &vetor[i]);
//        printf("Ordenado: ");
//        for (j = 0; j <= i; j++) {
//            if (vetor[i] < vetor[j]) {
//                aux = vetor[i];
//                vetor[i] = vetor[j];
//                vetor[j] = aux;
//            }
//            printf(" [%d] ", vetor[j]);
//        }
//    }
//    printf("\n");
//}


//#include <unistd.h>
//#include <cstdlib>
//#include <stdio.h>
//#define LIM 8
//
//void lendo_vetor(int *V);
//void exibe_vetor(int *V);
//
//int main() {
//    int V[LIM];
//    lendo_vetor(V);
//    exibe_vetor(V);
//    return 0;
//}
//
//void lendo_vetor(int *V) {
//    int i, j, aux = 0;
//    printf("\n\n\tLENDO VETOR\n");
//    for (i = 0; i < LIM; i++) {
//        printf("\nDigite o %d valor: ", i + 1);
//        scanf("%d", &V[i]);
//        // printf("Ordena = {");
//        for (j = 0; j  <= i; j++) {       
//            if (V[i] < V[j]) {
//                aux = V[i];
//                V[i] = V[j];
//                V[j] = aux;
//            }
//           // printf(" %d ",V[j]);
//        }
//        // printf("}\n");
//    }
//}
//
//void exibe_vetor(int *V) {
//    int i;
//    printf("\n\n\tVetor odenado {");
//    for (i = 0; i < LIM; i++) {
//        printf(" %d ", V[i]);
//    }
//    printf("}\n\n");
//}


//#include <stdio.h>
//#include <stdlib.h>
//#define LIM 8
//void lendo_vetor(int *V);
//void exibe_vetor(int *V);
//
//int main() {
//    int V[LIM];
//    lendo_vetor(V);
//    exibe_vetor(V);
//    return 0;
//}
//
//void lendo_vetor(int *V) {
//    int i, j, aux = 0;
//    printf("\n\n\tLENDO E ORDENANDO VETOR\n");
//    for(i = 0; i < LIM; i++){
//        printf("Digite o %d valor: ",i+1);
//        scanf("%d",&V[i]);
//        for(j = 0; j <= i; j++){
//            if(V[i] < V[j]){
//                aux = V[i];
//                V[i] = V[j];
//                V[j] = aux;
//            }
//        }
//    }
//}
//
//void exibe_vetor(int *V){
//    printf("\n\n\tEXIBE VETOR\n");
//    for(int i = 0; i < LIM; i++){
//        printf(" %d ",V[i]);
//    }
//}