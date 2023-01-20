/*11 Faça um programa que receba a hora de início de um jogo e a hora final
do jogo (cada hora é composta por duas variáveis inteiras: hora e minuto). 
Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o tempo
máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia
e terminar no dia seguinte.*/

#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include<stdio.h>

 int main(){
 
     int h_inicial, m_inicial, h_final, m_final,horas;
	 int minutos, h1,m1,h2,m2;

    system("cls");
    printf("\nDigite o horrio inicial");
    printf("\n hora: ");
    scanf("%i",&h_inicial);
    printf(" minuto: ");
    scanf("%i",&m_inicial);
   
    printf("\nDigite o horrio final ");
    printf("\n hora: ");
    scanf("%i",&h_final);
    printf(" minuto: ");
    scanf("%i",&m_final);  
    
    
	if(m_inicial < 60 && h_inicial < 24)
	  h1 = 24 - h_inicial-1;
      m1 = 60 - m_inicial;        
    if(m_final < 60 && h_final < 24)
	   h2 = h_final;
	   m2 = m_final;
	 ////////////////////////////////////////////////////////////
	 if(h1 + h2 < 24){
	 	horas = h1+h2;	
     if (m1+m2 <= 60){
 	    minutos = m1+m2;
 	    if(m1+m2 == 60)
 	    horas += 1;
 	    minutos = 0;
  	    printf("Tempo de jogo1 %d : %d\n",horas,minutos);	  
	  }
	  ////////////////////////////////////////////////////////////
	if(h_inicial== 0 && h_final ==0){
		if(m_inicial < m_final){
			horas = 0;
			minutos = m_final - m_inicial;
			printf("\nTempo de jogo %d : %d\n", horas, minutos);
		}	
	}
	//////////////////////////////////////////////////////////////   
    else{
	 	printf("\nHora informda e maior que 24.\n");
	 }
  }
  
  
 /////////////////////////////////////////////////////////////////////// 
  if (h_inicial < h_final){
     horas = h_final - h_inicial;
     minutos = m_inicial + m_final;
     if (minutos > 60){
     	horas += 1;
     	minutos -= 60;
     	printf("\nTempo de jogo %d : %d\n", horas, minutos);
	 }else{
	    	printf("\nTempo de jogo %d : %d\n", horas, minutos);
      }
	 }
    
	
	
     

 getch();
 return 0;
}




