/*
 6. Elabore um programa contendo uma sub-rotina que receba três notas e uma letra
 como parâmetros. Se a letra for A, então deve ser retornada a média aritmética
 das notas; se a letra for P, então deve ser retornada a média ponderada, com pesos
 5, 3 e 2, respectivamente. A média calculada deverá ser devolvida ao programa 
 principal para, então, ser mostrada. (7)
 */
/*
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;

float retorno_media(float n1, float n2, float n3, char c);

int main(void) {
    char c;
    float n1, n2, n3, soma = 0;

    printf("\nDigite as tres notas:\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("\nDigite a letra, 'A' ou 'P': ");
    scanf("%s", &c);
    soma = retorno_media(n1, n2, n3, c);
    printf(" ", soma);
    return 0;
}

float retorno_media(float n1, float n2, float n3, char c) {
    float media = 0;
    if (!(n1 > 0) || (n2 < 0) || (n3 < 0))
        media = printf("\nValor negativo nao e calculado.\n");
    else if ((n1 > 10) || (n2 > 10) || (n3 > 10))
        media = printf("\nNota maior que dez nao e calculado.\n");
    else {
        if (c == 'a' || c == 'A') {
            media = printf("\nMedia Aritimetica: %.2f\n", (n1 + n2 + n3) / 3);
        } else if (c == 'p' || c == 'P')
            media = printf("\nMedia Ponderada: %.2f\n", ((n1 * 5)+(n2 * 3)+ (n3 * 2)) / 10);
        else
            media = printf("\nLetra informada nao e valida..\n");
    }
    return media;
}

*/
