/*
 8. Crie uma sub-rotina que receba como parâmetro a altura e o sexo de uma 
 pessoa e retorne o seu peso ideal. Para homens: peso ideal = 72.7 * altura – 58;
 Para mulheres: peso ideal: 62.1 * altura – 44.7.
 */
/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

float peso_ideal(float altura, char sexo);

int main(void) {
    char sexo;
    float altura;

    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    printf("\nDigite o sexo: 'M' ou 'F':  ");
    scanf("%s", &sexo);

    printf("\nPeso ideal e: %.2f\n", peso_ideal(altura, sexo));
    return 0;
}

float peso_ideal(float altura, char sexo) {
    float peso = 0;
    if (sexo == 'm' || sexo == 'M')
        peso = (72.7 * altura - 58);
    else if (sexo == 'f' || sexo == 'F')
        peso = (62.1 * altura - 44.7);
    return peso;
}
 */
/*
#include <stdio.h>
#include <stdlib.h>

float peso_ideal(float altura, char sexo);

int main(void) {
    char sexo;
    float altura;
    printf("\nDigite a altura:  ");
    scanf("%f", &altura);
    printf("Digite o sexo 'M' ou 'F':  ");
    scanf("%s", &sexo);
    printf(" ", peso_ideal(altura, sexo));
    return 0;
}

float peso_ideal(float altura, char sexo) {
    float peso = 0;
    if (altura < 0)
        peso = printf("\nAltura nao pode ser negativo.\n");
    else {
        if (sexo == 'm' || sexo == 'M')
            peso = printf("\nPeso ideal Masculino: %.2f\n", (72.7 * altura - 58));
        else if (sexo == 'f' || sexo == 'F')
            peso = printf("\nPeso ideal Femenino: %.2f\n", (62.7 * altura - 44.7));
        else
            peso = printf("\nLetra informada nao e valida: \n");
    }
    return peso;
}
 */