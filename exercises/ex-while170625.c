#include <stdio.h>

int main(){
    int num = 1; //valorizzo a 1 perchè cosi num potrà essere usato nel while
    int somma = 0;

    while(num){
        //l'utente deve inserire un numero intero
        printf("Inserisci un numero intero: ");
        scanf("%d", &num);

        //verifico se num è zero, quindi stampo somma ed esco da programma
        if(num == 0){
            break;
        }
        //verifico se num è positivo
        if(num > 0){
            somma += num;
        }


    }

    //stampo sullo stdout il valore di somma
    printf("La somma dei numeri positivi inseriti è: %d\n", somma);
    return 0;
}