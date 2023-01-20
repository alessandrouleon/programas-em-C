/*4. Faça uma função que receba um único valor representando segundos. Essa 
 função deverá convertê-lo para horas, minutos e segundos. Os segundos devem ser
 passados como parâmetro. (4)
 */
/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

void horas(int segundos);

int main() {
    int segundos;
    printf("\nDigite o numeros de segundos:  ");
    scanf("%d", &segundos);
    horas(segundos);
    return 0;
}

void horas(int segundos){
    int hora, minuto, segundo, aux;
    hora = segundos / 3600;
    aux = segundos % 3600;
    minuto = aux / 60;
    segundo = aux % 60;
    printf("%d:%d:%d",hora,minuto,segundo);    
}
 */




/*
//Converter horas em sgundos, usando void.
#include <cstdlib>
#include <stdio.h>
using namespace std;

void segundos(int hora, int minuto, int segundo);

int main() { printf("\nINFORME A HORA\n");
    int hora, minuto, segundo;
    printf("\nHora dois digitos: ");
    scanf("%d", &hora);
    printf("Minuto dois digitos: ");
    scanf("%d", &minuto);
    printf("Segundo dois digitos: ");
    scanf("%d", &segundo);
    segundos(hora, minuto, segundo);
    return 0;
}

void segundos(int hora, int minuto, int segundo){
    int horaEmSegundo, minutosEmSegundos, totalSegundos;
    horaEmSegundo = hora * 3600;
    minutosEmSegundos = minuto * 60;
    totalSegundos = (horaEmSegundo + minutosEmSegundos + segundo);
    printf("\nTotal segundos: %d\n",totalSegundos);
}
 */

/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int segundos(int hora, int minuto, int segundo);

int main() {
    int hora, minuto, segundo, totalSegundos;
    printf("\nDigite a hora: ");
    scanf("%d", &hora);
    printf("Digite o minuto: ");
    scanf("%d", &minuto);
    printf("Digite o segundo: ");
    scanf("%d", &segundo);
    totalSegundos = segundos(hora, minuto, segundo);
    printf("\nTotal segundo e: %d \n",totalSegundos);
    return 0;
}

int segundos(int hora, int minuto, int segundo){
    int horaEmSegundos, minutosEmSegundos, totalSegundos = 0;
    horaEmSegundos = hora * 3600;
    minutosEmSegundos = minuto * 60;
    totalSegundos = (horaEmSegundos + minutosEmSegundos + segundo);
    return totalSegundos;
}

*/


