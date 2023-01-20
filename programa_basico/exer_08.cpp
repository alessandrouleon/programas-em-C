

#include <cstdlib>
#include <stdio.h>
#define LIM 3
using namespace std;

int main() {
    int i, j, y, cont1 = 0, cont2 = LIM-1, cont3 = LIM-1, cont4 = 0;
    float soma_ip = 0, soma_pa = 0, mult_pa = 1, mult_ip = 1;
    float soma = 0, mult = 1, mlimp = 1, mlpa = 1, slip = 0, slpa = 0, a[LIM][LIM];

    
    
    printf("\n\nPREENCHENDO A MATRIZ\n");
    for (i = 0; i < LIM; i++) {
        for (j = 0; j < LIM; j++) {
            printf("Informe os %d valores da %dª linha: ", LIM, i + 1);
            scanf("%f", &a[i][j]);
        }
    }

      


    
    printf("\n\nVALORES DA MATRIZ\n");
    for (i = 0; i < LIM; i++) {
        for (j = 0; j < LIM; j++) {
            printf(" %.0f ", a[i][j]);
        }
        printf("\n");
    }

    
    
    
    
    for (i = 0; i < LIM; i++) {
        for (j = 0; j < LIM; j++) {
            soma += a[i][j];
            mult *= a[i][j];
        }
    }
    printf("\nSOMA VALORES DA MATRIZ\n");
    printf("Soma total: %.2f", soma);
    printf("\n\nMULTIPLICA VALORES DA MATRIZ\n");
    printf("Valores multiplicados: %.2f\n\n", mult);

    

    
    
    printf("\nCOLUNAS IMPARES\n");
    for (i = 0; i < LIM; i++) {
        for (j = 0; j < LIM; j++) {
            if (j > 0 && j % 2 != 0) {
                printf(" %.0f ", a[i][j]);
                soma_ip += a[i][j];
                mult_ip *= a[i][j];
            }
        }
        printf("\n");
    }
    printf("\nSOMA VALORES DAS COLUNAS IMPARES\n");
    printf("\nSoma impa: %.0f\n", soma_ip);
    printf("\nMULTIPLICA VALORES DAS COLUNAS IMPARES\n");
    printf("\nMultiplica impa: %.0f\n", mult_ip);

    
    
    
    
    printf("\nCOLUNAS PARES\n");
    for (i = 0; i < LIM; i++) {
        for (j = 0; j < LIM; j++) {
            if (j > 0 && j % 2 == 0) {
                printf(" %.0f ", a[i][j]);
                soma_pa += a[i][j];
                mult_pa *= a[i][j];
            }
        }
        printf("\n");
    }
    printf("\nSOMA VALORES DAS COLUNAS PARES\n");
    printf("\nSoma par: %.0f\n\n", soma_pa);
    printf("\nMULTIPLICA VALORES DAS COLUNAS PARES\n");
    printf("\nMultiplica par: %.0f\n\n", mult_pa);

    


    
   printf("\n\nSENTIDO RAMPA 1\n");
   for(i = 0; i < LIM; i++){
       for(j = 0; j < LIM; j++){
           if(j == cont1)
               printf(" %.0f ",a[i][j]);
           else
               printf("  ");
       }
       cont1++;
       printf("\n");
   }    
    
   
   
   
   
   printf("\n\nSENTIDO RAMPA 2\n");
   for(i = LIM-1; i > -1; i--){
       for(j = LIM-1; j > -1; j--){
           if(j != cont2)
                printf("  ");
           else       
           printf(" %.0f ",a[i][j]);
       }
       cont2--;
       printf("\n");
   }
    
   
   
   
    
   printf("\n\nSENTIDO RAMPA 3\n"); 
   for(i = 0; i < LIM; i++){
       for(j = 0; j < LIM; j++){
           if(j != cont3)
                printf("   ");              
           else
              printf(" %.0f ",a[i][j]);
       }
       cont3--;
       printf("\n");
   }
    
    
    
    
  printf("\n\nSENTIDO RAMPA 4\n"); 
   for(i = LIM-1; i > -1; i--){
       for(j = 0; j < LIM; j++){
           if(j == cont4)
               printf(" %.0f ",a[i][j]);     
       }
       cont4++;
       printf("\n");
   }  
    
    
    
    
    printf("\nLINHAS IMPARES\n");
    for (i = 0; i < LIM; i++) {
        for (j = 0; j < LIM; j++) {
            if (i > 0 && i % 2 != 0) {
                printf(" %.0f ", a[i][j]);
                slip += a[i][j];
                mlimp *= a[i][j];
            }
        }
        printf("\n");
    } 
    printf("\nSOMA VALORES DAS LINHAS IMPARES\n");
    printf("\nSoma impa: %.0f\n", slip);
    printf("\nMULTIPLICA VALORES DAS LINHA IMPARES\n");
    printf("\nMultiplica impa: %.0f\n", mlimp);

    
    
    
    
    printf("\nLINHAS PARES\n");
    for (i = 0; i < LIM; i++) {
        for (j = 0; j < LIM; j++) {
            if (i > 0 && i % 2 == 0) {
                printf(" %.0f ", a[i][j]);
                slpa += a[i][j];
                mlpa *= a[i][j];
            }
        }
        printf("\n");
    } 
    printf("\nSOMA VALORES DAS LINHAS PARES\n");
    printf("\nSoma pa: %.0f\n", slpa);
    printf("\nMULTIPLICA VALORES DAS LINHA PARES\n");
    printf("\nMultiplica pa: %.0f\n", mlpa);

    
    
    
    
    return 0;
}

