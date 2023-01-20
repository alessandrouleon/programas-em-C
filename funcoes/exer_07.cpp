/*
 7. Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo N 
 e retorne o valor de S, obtido pelo seguinte cálculo: (10).
 */
/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

float valor_s(int n);

int main() {
    int n;
    float s;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    if (n < 0)
        printf("\nValor informado nao e positivo....\n");
    else if (n == 0)
        printf("\nZero nao pode ser calculado...\n");
    else {
        s = valor_s(n);
        printf("\nValor e: %.2f\n", s);
    }
    return 0;
}

float valor_s(int n) {
    int i;
    float soma = 1, fat = 1;

    for (i = n; i >= 2; i--) {
        fat *= i;
    }
    for (i = n; i >= 2; i--) {
        soma += 1 / fat;
        fat /= i;
    }
    return soma;
}
*/
