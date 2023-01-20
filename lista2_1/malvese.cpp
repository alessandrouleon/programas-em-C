#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
main()
{ float sal_min, nht, ndep, nhet, sal_receber, vh, smes, vdep, vhe, imp, sbruto, sliq, grat;
  //Limpa a tela
	system("cls");
	// Mostra mensagem para receber o valor do sal rio m¡nimo
	printf("\nDigite o valor do sal rio m¡nimo ");
	// Recebe o valor do sal rio m¡nimo
	scanf("%f",&sal_min);
	// Mostra mensagem para receber o n£mero de horas trabalhadas
	printf("Digite o n£mero de horas trabalhadas ");
	// Recebe o n£mero de horas trabalhadas
	scanf("%f",&nht);
	// Mostra mensagem para receber o n£mero de dependentes
	printf("Digite o n£mero de dependentes ");
	// Recebe o n£mero de dependentes
	scanf("%f",&ndep);
	// Mostra mensagem para receber o n£mero de horas extras
	printf("Digite o n£mero de horas extras trabalhadas ");
	// Recebe o n£mero de horas extras
	scanf("%f",&nhet);
	// Calcula o valor da hora trabalhada
	vh = sal_min * 1/5;
	// Calcula o valor do sal rio ms
	smes = nht * vh;
	// Calcula o valor dos dependentes
	vdep = ndep * 32;
	// Calcula a valor a receber pelas horas extras
	vhe = nhet * (vh + (vh * 50/100));
	// Calcula o valor do sal rio bruto
	
	printf("\n Atencao :  %.2f",vhe);
	sbruto = smes + vdep + vhe;
	// Calcula o imposto
	if (sbruto < 200)
		 imp = 0;
	else if (sbruto >= 200 && sbruto <= 500)
		 imp = sbruto * 10/100;
	     else 
	     	 imp = sbruto * 20/100;
	// Calcula o sal rio l¡quido
	sliq = sbruto - imp;
	// Calcula a gratificaao
	if (sliq <= 350)
	     grat = 100;
	else 
	     grat = 50;
	// Calcula o sal rio a receber
	sal_receber = sliq + grat;
	// Mostra o valor do sal rio a receber
	printf("\nSal rio a receber = %.2f",sal_receber);
	//P ra o programa a espera de um ENTER
	getch();
}

