/*
 7) Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre
o vetor resultante de uma ordenação decrescente.
 */

//#include <cstdlib>
//#include <stdio.h>
//#define TAM 10
//using namespace std;
//
//void preenche_vetor(int *vetor);
//void ordena_vetor(int vetor[]);
//
//int main() {
//    int vetor[TAM];
//    preenche_vetor(vetor);
//    return 0;
//}
//
//void preenche_vetor(int *vetor) {
//    int i = 0;
//    do {
//        printf("Digite o %d numero: ", i + 1);
//        scanf("%d", &vetor[i]);
//        i++;
//    } while (i < TAM);
//    ordena_vetor(vetor);
//}
//
//void ordena_vetor(int vetor[]) {
//    int i, j, aux = 0;
//
//    for(i = 0; i < TAM; i++){
//        for(j = 0; j < TAM; j++){
//            if (vetor[i] > vetor[j]){
//                aux = vetor[i];
//                vetor[i] = vetor[j];
//                vetor[j] = aux;
//            }    
//        }   
//    }
//
//    printf("Vetor ordenador: ");
//    for (i = 0; i < TAM; i++) {
//        printf(" %d ", vetor[i]);
//    }
//}
//
//
//
//
//#include <unistd.h>
//#include <cstdlib>
//#include <stdio.h>
//#define LIM 10
//using namespace std;
//
//void insere_em_vetor(int *vetor);
//void ordena_vetor(int *vetor);
//void exibe_vetor(int *vetor);
//
//int main(){
//    int V[LIM];
//    insere_em_vetor(V);
//    ordena_vetor(V);
//    exibe_vetor(V);
//    return 0;
//}
//
//void insere_em_vetor(int *vetor){
//    printf("\n\n\tINSERINDO EM VETOR\n");
//    for(int i = 0; i < LIM; i++){
//    printf("Digite o %d valor:  ",i+1);
//    scanf("%d",&vetor[i]);
//    }
//}
//
//
//void ordena_vetor(int *vetor){
//    int i, j, aux = 0;
//    for(i = 0; i < LIM; i++){
//        for(j = 0; j < LIM; j++){
//            if(vetor[j] < vetor[j+1]){
//            aux = vetor[j];
//            vetor[j] = vetor[j+1];
//            vetor[j+1] = aux;
//            }
//        }
//    }    
//}
//
//void exibe_vetor(int *vetor){
//    printf("\n\n\tORDENA DECRESCENTE\n");
//    for(int i = 0; i < LIM; i++){
//        printf("pausadamente %d \n",vetor[i]);
//       usleep(500000);    
//    }
//    
//    printf("\n\tVetor ordenado {");
//    for(int i = 0; i < LIM; i++){
//        printf(" %d ",vetor[i]);
//    }
//    printf("}\n\n");
//}
//
//
//
