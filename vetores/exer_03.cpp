/*
 3) Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos
de objetos. O vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5%
do valor total de suas vendas. O valor unitário dos objetos deve ser informado e
armazenado em um vetor; a quantidade vendida de cada peça deve ficar em outro
vetor, mas na mesma posição. Crie um programa que receba os preços e as
quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com
tamanho dez). Depois, determine e mostre:
- um relatório contendo quantidade vendida, valor unitário e valor total de cada objeto.
Ao final, deverá ser mostrado o valor geral das vendas e o valor da comissão que será
paga ao vendedor;
- o valor do objeto mais vendido e sua posição no vetor (não se preocupe com
empates.
 */

/*
#include <cstdlib>
#include <stdio.h>
#define TAM 10
using namespace std;

void preenche_vetor(float *v_unitario, int *v_quant);
void exibe_vetor(float *v_unitario, int *v_quant);

int main() {
    float v_unitario[TAM];
    int v_quant[TAM];
    preenche_vetor(v_unitario, v_quant);
    exibe_vetor(v_unitario, v_quant);
    return 0;
}

void preenche_vetor(float *v_unitario, int *v_quant) {
    int i = 0;
    while (i < TAM) {
        printf("\n %dº VENDA \n", i + 1);
        printf("Digite o preco unitario: ");
        scanf("%f", &v_unitario[i]);
        printf("Informe a quantidade: ");
        scanf("%d", &v_quant[i]);
        i++;
    }
}

void exibe_vetor(float *v_unitario, int *v_quant) {
    int i = 0, quant_vendido = 0, pos, maior;
    float valor_unitario[TAM], valor_geral_venda = 0, comissao = 0, sal = 545.00, v_ob;
    
    printf("\n\n///////////////////////////////////////////////////////////////////\n");
    printf("//                RELATORIO DE VENDAS REALIZADAS                ///\n");
    printf("///////////////////////////////////////////////////////////////////\n\n");
    
    
    while (i < TAM) {
        quant_vendido += v_quant[i];
        i++;
    }
    printf("\n\nQuantidade vendida: %d \n", quant_vendido);

    i = 0;
    while (i < TAM) {
        valor_unitario[i] = (v_unitario[i] * v_quant[i]);
        valor_geral_venda += valor_unitario[i];
        printf("\nValor Unitario: R$ %.2f ", v_unitario[i]);
        printf("Valor total de cada Objeto R$ %.2f", valor_unitario[i]);
        i++;
    }
    comissao = (valor_geral_venda * 5) / 100;
    printf("\n\nValor geral das vendido: R$ %.2f \n", valor_geral_venda);
    printf("\nValor a pagar de comissao e R$ %.2f\n", comissao);
     
    i = 0;
    maior = v_quant[0];
    v_ob = v_unitario[0];
    while (i < TAM) {
        if (maior < v_quant[i]){
            maior = v_quant[i];
            v_ob = v_unitario[i];
            pos = i;
       }
        i++;
    } 
       
    sal += comissao;          
    printf("\nMaior item vendido e: %.2f  Posicao %d \n", v_ob, pos);
    printf("\nComissao do vendedor e: R$ %.2f\n\n",sal);
}

 */
 

//
//#include <cstdlib>
//#include <stdio.h>
//#define TAM 10
//using namespace std;
//
//void preenche_vetor(float *v_unidade, int *quant);
//void exibe_r_vetor(float *v_unidade, int *quant);
//
//int main(){
//    float v_unidade[TAM];
//    int  quant[TAM];
//    preenche_vetor(v_unidade, quant);
//    exibe_r_vetor(v_unidade, quant);   
//    return 0;
//}
//
//
//void preenche_vetor(float *v_unidade, int *quant){
//    int i  = 0;
//    do{
//        printf("\n%dº VENDA \n",i+1);
//        printf("Digite o valor do objeto: ");
//        scanf("%f",&v_unidade[i]);
//        printf("Informe a quantidade: ");
//        scanf("%d",&quant[i]);
//        i++;
//    }while(i < TAM);
//}
//
//
//
//
//void exibe_r_vetor(float *v_unidade, int *quant){
//    
//    int i = 0, qunat_vendida = 0, pos = 0, maior = quant[0];
//    float v_t_obj_vendidos = 0, total_unidades[TAM], valor_ob = v_unidade[0];
//    float sal = 545.00, comissao = 0;
//    
//    
//    printf("\n\n==============================================================================\n");
//    printf("\n");       
//    printf("========================RELATORIO DE VENDAS REALIZADAS========================\n");
//    printf("\n");
//    printf("==============================================================================\n\n");
//   
//    printf("\n-----------------QUANTIDADES VENDIDAS-----------------\n");
//    printf("------------------------------------------------------\n");
//    do{
//       qunat_vendida += quant[i];
//       printf("|  %dº venda %d unidades \n", i+1, quant[i]);
//       i++;
//    }while(i < TAM);
//    printf("| \n");
//    printf("|  Quantidade total vendida: %d \n\n",qunat_vendida);
//    printf("==============================================================================\n\n");
//    
//    
//    
//    i = 0;
//    printf("\n--------------------------VALOR DAS VENDIDAS----------------------------\n");
//    printf("------------------------------------------------------------------------\n");
//    do{
//        total_unidades[i] = (v_unidade[i] * quant[i]);
//        v_t_obj_vendidos += total_unidades[i];
//        printf("| valor da unidade R$ %.2f, ",v_unidade[i]);
//         printf("valor total por objetos R$ %.2f \n",total_unidades[i]);
//         i++;
//    }while(i < TAM);
//    printf("| \n");
//    printf("| Valor total vendido R$ %.2f \n\n", v_t_obj_vendidos);
//    printf("==============================================================================\n\n");
//      
//      
//      
//    i = 0;   
//    printf("\n--------------------------VALOR DA COMISSAO----------------------------\n");
//    printf("-----------------------------------------------------------------------\n");
//    do{
//        comissao = (v_t_obj_vendidos * 0.05)/100;
//        i++;
//    } while(i < TAM);
//    printf(" \n");
//    printf(" Valor da comissao do vendedor R$ %.2f \n\n", comissao);
//    printf("==============================================================================\n\n");
//       
//     
//    
//    i = 0;   
//    printf("\n--------------VALOR DO OBJETO MAIS VENDIDO E SUA POSICAO--------------\n");
//    printf("----------------------------------------------------------------------\n");     
//    do{   
//       if(maior < quant[i]){
//           maior = quant[i];
//           valor_ob = v_unidade[i];
//           pos = i;
//       } 
//       i++;
//    }while(i < TAM);
//     printf("\n Valor do objeto: R$ %.2f, posicao %d \n\n", valor_ob, pos);   
//    printf("==============================================================================\n\n");
//   
//    
//    printf("\n----------------------SALARIO BRUTO DO VENDEDOR-----------------------\n");
//    printf("----------------------------------------------------------------------\n"); 
//    printf("\n Salario vendedor e: R$ %.2f \n\n", sal += comissao); 
//    printf("==============================================================================\n\n");
//   
//}
//
// 
//
// 