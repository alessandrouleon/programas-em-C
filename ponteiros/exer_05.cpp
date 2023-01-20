/*
#include<stdio.h>    //Biblioteca para entrada e saída de dados
#include<stdlib.h>  //Biblioteca para utilizar funções próprias do Sistema Operacional
main()
{
      int a=0,b,c,n,d;           //Declarando as variáveis
      printf("Quantos numeros primos pretende exibir? ");
      scanf("%i",&n);
      d=n*(-1);
      printf("Os primeiros %i numeros primos sao:\n",n);
      do         //Inicio do bloco de repetição
      {  a++;         
         c=0;
         for(b=1;b<a;b++)
             if(a%b==0)
             c++;
         if(c==1){
             printf(" %i ",a);      //Imprimindo os números primos
             d++;
                 }
      }while(d); //Repete o bloco enquanto d for diferente de zero 0.
      printf("\n\n");     //Dá duas quebras de linha para ficar mais bonito
return 0;          
}    
 */  


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, aux = 0;
    
    printf("\nDigite o valor de n:  ");
    scanf("%d",&n);
    
    for(i= 2; i <= n; i++){ 
        if(i <= 3 || i == 5 || i == 7 || i == 11 || i == 13)
            printf(" %d ",i);
        else if(i % 2 == 0)
            continue;
        else if(i % 3 == 0)
            continue;
        else if(i % 5 == 0)
            continue;
         else if(i % 7 == 0)
            continue;
        else if(i % 11 == 0)
            continue;
         else if(i % 13 == 0)
            continue;
        else
             printf(" %d ",i);
    }
    return 0;
}