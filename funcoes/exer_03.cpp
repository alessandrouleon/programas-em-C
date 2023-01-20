/*
 3. Crie uma função que receba três números inteiros a, b, c, sendo a maior que 1.
 A função deverá somar todos os inteiros entre b e c que sejam divisíveis por a 
 (inclusive b e c) e retornar o resultado para a função principal. (3)
 */

/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int soma_inteiro(int a, int b, int c) {
    int soma = 0;
    if (b <= c) {
        while (b <= c) {
            if (b % a == 0)
                soma += b;
            b++;
        }
    } else {
        while (c <= b) {
            if (c % a == 0)
                soma += c;
            c++;
        }
    }
    return soma;
}

int main() {
    int a, b, c;
    printf("\nSoma e: %d \n", soma_inteiro(3, 10, 2));
    return 0;
}
 */

/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int soma_inteiros(int a, int b, int c) {
    int soma = 0;

    if (b == c && b % a == 0 && c % a == 0)
        soma = b + c;
    else {
        if (b <= c) {
            while (b <= c) {
                if (b % a == 0)
                    soma += b;
                b++;
            }
        } else {
            if (c <= b) {
                while (c <= b) {
                    if (c % a == 0)
                        soma += c;
                    c++;
                }
            }
        }
    }

    return soma;
}

int main() {
    int a, b, c, soma;
    printf("\nDifite o valor de a: ");
    scanf("%d", &a);
    if (a <= 1)
        printf("\nValor de A deve ser maior que 1!\n");
    else {
        printf("\nDigite valor de  B e C\n");
        scanf("%d %d", &b, &c);
        if (b < a && c < a)
            printf("\nValor de B ou C deve ser maior que a!\n");
        else {
            soma = soma_inteiros(a, b, c);
            printf("\nSoma e: %d \n", soma);
        }
    }
    return 0;
}
*/
