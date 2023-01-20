/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main() {

    int cont_1 = 0, cont_2 = 0, cont_3 = 0;
    int cont_4 = 0, cont_5 = 0, cont_6 = 0;

    int roll, face;

    for (roll = 1; roll <= 6000; roll++) {
        face = 1 + rand() % 6;
        switch (face) {
            case 1:
                cont_1++;
                break;
            case 2:
                cont_2++;
                break;
            case 3:
                cont_3++;
                break;
            case 4:
                cont_4++;
                break;
            case 5:
                cont_5++;
                break;
            case 6:
                cont_6++;
                break;
        }
    }
    printf("%s%13s ", "  face", "    controller.");
    printf("\n   1%13d ", cont_1);
    printf("\n   2%13d ", cont_2);
    printf("\n   3%13d ", cont_3);
    printf("\n   4%13d ", cont_4);
    printf("\n   5%13d ", cont_5);
    printf("\n   6%13d ", cont_6);

    return 0;
}
*/
