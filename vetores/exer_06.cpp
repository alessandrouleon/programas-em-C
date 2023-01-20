/*
 6) Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada.
Calcule e mostre os seguintes vetores resultantes:
- A união de X com Y (Todos os elementos de X e de Y sem repetições);
- A diferença entre X e Y (Todos os elementos de X que não existam em Y, sem
repetições)
- A soma de X e Y (A soma de cada elemento de X com o elemento da mesma posição
em Y);
- O produto entre X e Y (Multiplicação de cada elemento de X com o elemento de
mesma posição em Y);
- A interseção entre X e Y (Apenas os elementos que aparecem nos dois vetores, sem
repetições).
 */
//
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//
//int verifica_repecicao(int numero, int *vetor, int tam);
//void lendo_vetores(int *X, int *Y, int tam);
//void exibe_vetores(int *X, int *Y, int tam);
//void uniao_de_x_y(int *Y, int *X, int tam);
//void diferenca_entre_x_y(int *X, int *Y, int tam);
//void soma_entre_x_y(int *X, int *Y, int tam);
//void produto_entre_x_y(int *X, int *Y, int tam);
//void interseccao_entre_x_y(int *X, int *Y, int tam);
//
//int main(){
//    int tam;
//    printf("\n\n\tQual o tamanho do vetor ?  ");
//    scanf("%d",&tam);
//    int X[tam], Y[tam];
//    lendo_vetores(X, Y, tam);
//    exibe_vetores(X, Y, tam);
//    uniao_de_x_y(Y, X, tam);
//    diferenca_entre_x_y(X, Y, tam);
//    soma_entre_x_y(X, Y, tam);
//    produto_entre_x_y(X, Y, tam);
//    interseccao_entre_x_y(X, Y, tam);
//    return 0;
//}
//
//int verifica_repecicao(int numero, int *vetor, int tam){
//    int i, existe = 0;
//    for(i = 0; i < tam; i++){
//        if(numero == vetor[i])
//        existe = 1;        
//    }
//    return existe;
//}
//
//void lendo_vetores(int *X, int *Y, int tam){
//    int i, qualquer;
//    printf("\n\n\tLENDO O VETOR [X] \n");
//    for(i = 0; i < tam; i++){
//        printf("\tDigite o %d valor: ",i+1);
//        scanf("%d",&qualquer);
//        if(verifica_repecicao(qualquer, X, tam) == 0)
//            X[i] = qualquer;
//          else{
//            i--;
//            printf("\n\tValor repetido nao e aceito......");
//            printf("\n\tNumero %d ja foi inserido no vetor X......\n\n",qualquer);
//        }      
//    }
//    system("clear");
//    printf("\n\n\tLENDO O VETOR [Y] \n");
//    for(i = 0; i < tam; i++){
//        printf("\tDigite o %d valor: ",i+1);
//        scanf("%d",&qualquer);
//        if(verifica_repecicao(qualquer, Y, tam) == 0)
//            Y[i] = qualquer;
//        else{
//             i--;
//             printf("\n\tValor repetido nao e aceito......");
//            printf("\n\tNumero %d ja foi inserido no vetor Y......\n\n",qualquer);
//        }
//    }
//    system("clear");
//    
//}
//
//void exibe_vetores(int *X, int *Y, int tam){
//    int i;
//    printf("\n\nVetor [X] = {");
//    for(i = 0; i < tam; i++){
//        printf(" %d ",X[i]);
//    }
//    printf("}");
//    
//    printf("\n\nVetor [Y] = {");
//    for(i = 0; i < tam; i++){
//        printf(" %d ",Y[i]);
//    }
//    printf("}");
//}
//
//void uniao_de_x_y(int *Y, int *X, int tam){
//    int i, cont = 0, uniao[tam * 2];
//    
//    for(i = 0; i < tam; i++){
//        uniao[cont++] = X[i];
//    }
//    for(i = 0; i < tam; i++){
//        if(verifica_repecicao(Y[i], X, tam) == 0)
//            uniao[cont++] = Y[i];
//    }
//    
//    printf("\n\nUniao de [X Y] = {");
//    for(i = 0; i < cont; i++){
//        printf(" %d ",uniao[i]);
//    }
//    printf("}");
//}
//
//void diferenca_entre_x_y(int *X, int *Y, int tam){
//    int i, cont = 0, diferenca[tam];
//    for(i = 0; i < tam; i++){
//        if(verifica_repecicao(X[i], Y, tam) == 0)
//            diferenca[cont++] = X[i];
//    }
//    printf("\n\nDiferenca entre [X Y] = {");
//    for(i = 0; i < cont; i++){
//        printf(" %d ",diferenca[i]);
//    }
//    printf("}");
//}
//
//void soma_entre_x_y(int *X, int *Y, int tam){
//    int i, vetor_soma[tam];
//    for(i = 0; i < tam; i++){
//        vetor_soma[i] = X[i] + Y[i];
//    }
//    
//    printf("\n\nSoma entre [X Y] = {");
//    for(i = 0; i < tam; i++){
//        printf(" %d ",vetor_soma[i]);
//    }
//    printf("}");
//}
//
//void produto_entre_x_y(int *X, int *Y, int tam){
//    int i, vetor_mult[tam];
//    for(i = 0; i < tam; i++){
//        vetor_mult[i] = X[i] * Y[i];
//    }
//    printf("\n\nProduto entre [X Y] = {");
//    for(i = 0; i < tam; i++){
//        printf(" %d ",vetor_mult[i]);
//    }
//    printf("}");
//}
//
//void interseccao_entre_x_y(int *X, int *Y, int tam){
//    int i, cont = 0, interseccao[tam];
//    for(i = 0; i < tam; i++){
//        if(verifica_repecicao(X[i], Y, tam) == 1)
//            interseccao[cont++] = X[i];
//    }
//    printf("\n\nInterseccao entre [X Y] = {");
//    for(i = 0; i < cont; i++){
//        printf(" %d ",interseccao[i]);
//    }
//    printf("}\n\n");
//}
// 