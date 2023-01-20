//
//#include <cstdlib>
//#include <stdio.h>
//#define LIM 100
//using namespace std;
//
//int main() {
//
//    int i, j, la, ca, lb, cb, lc, cc, a[LIM][LIM], b[LIM][LIM], c[LIM][LIM];
//
//    printf("\nInforme quantidade de linha da matriz A: ");
//    scanf("%d", &la);
//    printf("Inforem a quantidade de coluna da matriz A: ");
//    scanf("%d", &ca);
//    printf("\nInforme quantidade de linha da matriz B: ");
//    scanf("%d", &lb);
//    printf("Inforem a quantidade de coluna da matriz B: ");
//    scanf("%d", &cb);
//
//    printf("\n\nPREENCHENDO A MATRIZ A\n");
//    for (i = 0; i < la; i++) {
//        for (j = 0; j < ca; j++) {
//            printf("Digite o %dº valor: ", i + 1);
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    printf("\nPREENCHENDO A MATRIZ B\n");
//    for (i = 0; i < lb; i++) {
//        for (j = 0; j < cb; j++) {
//            printf("Digite o %dº valor: ", i + 1);
//            scanf("%d", &b[i][j]);
//        }
//    }
//
//    if (la != lb || ca != cb)
//        printf("\nAS matrizis nao podem ser somadas: \n");
//    else {
//        lc = lb;
//        cc = cb;
//        for (i = 0; i < lc; i++) {
//            for (j = 0; j < cc; j++) {
//                c[i][j] = a[i][j] + b[i][j];
//            }
//        }
//        printf("\n\nSOMA DAS MATRIZIS\n");
//        for(i = 0; i < lc; i++){
//            for(j=0; j < cc; j++){
//                printf(" %d ",c[i][j]);
//            }
//                printf("\n");       
//        }
//    }
//
//
//    return 0;
//}
//
