/*
 5) Faça um programa que preencha dois vetores de dez elementos numéricos cada um e
mostre o vetor resultante da intercalação.
 */


//#include <cstdlib>
//#include <stdio.h>
//#define TAM 10
//using namespace std;
//
//void preenche_vetor(int *vet1, int *vet2);
//void exibe_intercalacao_do_vetor(int vet3[]);
//        
//int main() {
//    int vet1[TAM], vet2[TAM];
//    preenche_vetor(vet1, vet2);    
//    return 0;
//}
//
//void preenche_vetor(int *vet1, int *vet2){
//    int i = 0, cont = 0, vet3[TAM * 2];
//    
//    do{
//        printf("Digite o %d valor do vetor um: ", i+1);
//        scanf("%i",&vet1[i]);
//        vet3[cont] = vet1[i];
//         printf("Digite o %d valor do vetor dois: ",i+1);
//        scanf("%i",&vet2[i]);
//        cont++;
//        vet3[cont] = vet2[i];
//        cont++;
//        i++;
//    }while(i < TAM);
//    exibe_intercalacao_do_vetor(vet3); 
//}
//
//
//
//void exibe_intercalacao_do_vetor(int vet3[]){
//    int i = 0; 
//    printf("\nIntercalacao: ");
//    do{
//        printf(" %i ", vet3[i]);
//        i++;
//    }while(i < (TAM * 2));
//    printf("\n");
//}
// 