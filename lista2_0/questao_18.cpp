/*18 Dados tr�s valores X, Y e Z, verificar se eles podem ser os 
comprimentos dos lados de um tri�ngulo e, se forem, verificar se � 
um tri�ngulo equil�tero, is�sceles ou escaleno. Se eles n�o formarem um 
tri�ngulo escrever uma mensagem. Considerarque:
O comprimento de cada lado de um tri�ngulo � menor que a soma dos outros 
dois lados;
Chama-se tri�ngulo equil�tero o tri�ngulo que tem tr�s lados iguais;
Chama-se tri�ngulo is�sceles o tri�ngulo que tem o comprimento de dois 
lados iguais;
Chama-se tri�ngulo escaleno o tri�ngulo que tem os tr�s lados diferentes.
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int x, y, z;
  	
  	system("cls");
  	printf("\ninforme o valor de 'X':  \n");
  	scanf("%i",&x);
  	printf("\ninforme o valor de 'Y':  \n");
  	scanf("%i",&y);
  	printf("\ninforme o valor de 'Z':  \n");
  	scanf("%i",&z);
  	
  	if(x == 0 || y == 0 || z == 0){
  		printf("Dados informado nao Forma um triagulo!..\n");  		
	  }else{
	  	if(x == y && x == z){
	  	 if(y == z)
	  	printf("\ntriangulo equilatero.\n");
	  	printf("       ..         \n");
  		printf("      .   .       \n");
		printf("     .     .      \n");
		printf(" X  .       .  Y  \n");
		printf("   .         .    \n");
        printf("  .           .   \n");
        printf(" ...............  \n");
		printf("\n      Z         \n");
		
	  }
	  else if(x == y || x == z || y == z){
	  	 
 	    printf("\ntriangulo isosceles..\n");
	  	printf("       ..        \n");
  		printf("      .  .       \n");
		printf("     .    .      \n");
		printf(" X  .      .  Y  \n");
		printf("   .        .    \n");
        printf("  ............   \n");
		printf("\n      Z        \n");  
	  }
	  else if(x == z && x != y){
	  	   if(z != y)
        printf("\ntriangulo isosceles..\n");
	  	printf("       .    X        \n");
  		printf("       .  ' .        \n");
		printf("       .       .     \n");
		printf("    Y  .         .   \n");
		printf("       .       .     \n");
        printf("       .    .        \n");
        printf("       .  '  Z       \n");
		printf("\n                   \n");
	  }
	  else if(y == z && y != x){
	  	   if(z != x)
        printf("\ntriangulo isosceles..\n");
        printf("          .         \n");
  		printf("   Y  . ' .         \n");
		printf("   .      .         \n");
		printf(" .        .  X      \n");
		printf("   .      .         \n");
        printf("      .   .         \n");
        printf("   Z    ' .         \n");
		printf("\n                  \n");
	  }
	  else
         printf("\ntriangulo escaleno\n");
  }
  	
  	getch();
  	return 0;
  }
