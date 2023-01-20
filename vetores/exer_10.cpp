/*
 10) Faça um programa que preencha um vetor com os modelos de cinco carros (Exemplo
de modelos: Corsa, Gol,Palio, Sandero, etc.) Carregue outro vetor com o consumo
destes carros, isto é, quantos quilômetros cada um deles faz com um litro de
combustível, calcule e mostre:
- O modelo de carro mais econômico;
- Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.
 */



//#include <stdio.h>
//#include <cstdlib>
//#include <string.h>
//#define TAM 5
//#define K 20
//using namespace std;
//
//int main() {
//    char modelos[TAM][15];
//    int i, j, num = 0, cont = 0, aux = 0, quilometro[TAM];
//
//    for (i = 0; i < TAM; i++) {
//        printf("\nDigite o %d modelo: ", i + 1);
//        scanf("%s", modelos[i]);
//        printf("Digite seu consumo: ");
//        scanf("%d", &quilometro[i]);
//    }
//
//    printf("\n\nMODELOS E CONSUMOS\n");
//    for (i = 0; i < TAM; i++) {
//        printf("\n %s ", modelos[i]);
//        printf(" %d ", quilometro[i]);
//    }
//
//    num = quilometro[0];
//    for (i = 0; i < TAM; i++) {
//        if (num < quilometro[i])
//            num = quilometro[i];
//    }
//
//    printf("\n\nMODELO MAIS ECONOMICO\n\n");
//    for (i = 0; i < TAM; i++) {
//        if (num == quilometro[i])
//            printf("Modelo e: %s ", modelos[i]);
//    }
//
//    printf("\n\nCONSUMOS DOS CARROS PARA PERCORRER 1000 K ");
//    for (i = 0; i < TAM; i++) {
//        cont = quilometro[i];
//        for (j = cont; j < K; j += cont) {
//            aux += 1;
//        }
//        quilometro[i] = (aux + 1);
//        cont = 0;
//        aux = 0;
//    }
//
//    for(i = 0; i < TAM; i++){
//        printf("\n %s: ",modelos[i]);
//        printf(" %d litros",quilometro[i]);
//    }
//    printf("\n");
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

//
//
//#include <iostream>
//#include <stdio.h>
//#include <cstdlib>
//#include <string.h>
//
//int main() {
//
//    int i, j = 0, cont, aux = 0, a[5];
//
//    for (i = 0; i < 5; i++) {
//        printf("Digite o %d valor: ", i + 1);
//        scanf("%d", &a[i]);
//    }
//
//   
//    
//    printf("\n\nmaior");
//   for (i = 0; i < 5; i++) {
//       cont = a[i];
//       printf("\n [%d] ",cont);
//        for (j = cont; j < 20; j += cont) {
//            aux += 1;
//             printf(" {%d} ",aux);
//        }
//        a[i] = aux+1;
//        cont = 0;
//        aux = 0;
//   }
//
//    printf("\n\nRetorno");
//    for (i = 0; i < 5; i++) {
//       printf(" %d  ", a[i]);
//    }
//
//    return 0;
//}
//
// 
