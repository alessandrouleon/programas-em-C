/*
 4) Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre
dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos;
o segundo deve conter os números negativos. Cada vetor resultante vai ter, no
máximo, oito posições, que poderão não ser completamente utilizados.
 */

/*
#include <cstdlib>
#include <stdio.h>
#define TAM 8
using namespace std;

void preenche_vetor(int *num, int *p, int *n);

int main() {
    int num[TAM], p[TAM], n[TAM];
    preenche_vetor(num, p, n);
    return 0;
}

void preenche_vetor(int *num, int *p, int *n) {
    int i = 0, c1 = 0, c2 = 0;

    printf("\nPREENCHA O VETOR\n");
    while (i < TAM) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &num[i]);
        if (num[i] < 0) {
            n[c1] = num[i];
            c1++;
        } else {
            p[c2] = num[i];
            c2++;
        }
        i++;
    }



    if (c1 == 0)
        printf("\nNao foi digitado nenhum valor negativo..\n");
    else {
        printf("\nNegativo: \n");
        for (i = 0; i < c1; i++) {
            printf(" %d ", n[i]);
        }
    }


    if (c2 == 0)
        printf("\nNao foi digitado nenhum valor positivo..\n");
    else {
        printf("\nPositivo: \n");
        for (i = 0; i < c2; i++) {
            printf(" %d ", p[i]);
        }
    }

}

 */


//#include <cstdlib>
//#include <stdio.h>
//#define TAM 8
//
//void preenche_vetor(int num[]);
//void exibe_vetor(int *n, int c1, int *p,  int c2);
//
//int main() {
//    int num[TAM];
//    preenche_vetor(num);
//    return 0;
//}
//
//void preenche_vetor(int num[]) {
//    int i = 0, c1 = 0, c2 = 0, p[TAM], n[TAM];
//
//    do {
//        printf("Digite o %dº valor: ", i + 1);
//        scanf("%d", &num[i]);
//
//        if (num[i] < 0) {
//            n[c1] = num[i];
//            c1++;
//        } else {
//            p[c2] = num[i];
//            c2++;
//        }
//        i++;
//    } while (i < TAM);
//    exibe_vetor(n, c1, p, c2);
//}
//
//
//
//
//void exibe_vetor(int *n, int c1, int *p,  int c2) {
//    int i;
//    if (c1 == 0)
//        printf("\nNao foi informado numero negativo..\n");
//    else {
//        printf("\nVetor negativo: ");
//        for (i = 0; i < c1; i++) {
//            printf(" [%d] ", n[i]);
//        }
//    }
//
//    if (c2 == 0)
//        printf("\nNao foi informado numero positivo..\n");
//    else {
//        printf("\nVetor positivo: ");
//        for (i = 0; i < c2; i++) {
//            printf(" [%d] ", p[i]);
//        }
//    }
//    printf("\n\n");
//}
//
//
