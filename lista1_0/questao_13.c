/*13. Sabe-se que:
1 p� = 12 polegadas
1 jarda = 3 p�s
1 milha = 1760 jardas
Fa�a um programa que que receba uma medida em p�s, fa�a a convers�es a
seguir e mostre os
resultados.
a) Polegadas;
b) Jardas;
c) Milhas.
d)*/



#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>

 main(){
 	
 	float pes, polegadas, jardas, milhas;
 	
 	system("cls");
 	printf("Informe um medida em pes: ");
 	scanf ("%f", &pes);
    
    polegadas = (pes * 12);
    jardas = (pes / 3);
    milhas = (jardas / 1760);
    
    printf ("Polegadas:  %.2f\n", polegadas);
    printf ("jardas: %.2f\n", jardas);
    printf ("milhas: %.2f\n", milhas);
 	
 	
 	getch();
 }
