/*
    Definisce se un numero inntero in input è primo o composto
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, primo;
    double radice;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    radice = sqrt(num);
    primo = 1;

    for(int i = 2; i < radice; i++){
        if(num % i == 0){
            primo = 0;
            break;
        }
    }
    if(primo && num != 1){
        printf("Il numero inserito è un numero primo.\n");
    } else {
        printf("Il numero inserito non è un numero primo.\n");
    }

    return 0;
}