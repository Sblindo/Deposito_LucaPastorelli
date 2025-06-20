/*
    Definisce se un numero inntero in input è primo o composto
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, primo; //interi dove inserisco il numero fornito dall'utente ed il flag con cui traccio la primalità
    double radice; //double dove inserisco la radice quadrata del'intero fornito dall'utente 

    printf("Inserisci un numero: "); //stampo il testo
    scanf("%d", &num); //leggo il numero intero che fornisce l'utente

    radice = sqrt(num); //calcolo la radice quadrata del numero in oggetto
    primo = 1; //inizializzo il flag della primalità

    //ciclo per controllare che il numero fornito non abbia divisori compresi tra 2 e la sua radice quadrata
    for(int i = 2; i < radice; i++){
        if(num % i == 0){ //entrando in questa condizione vuol dire che avremmo trovato un ulteriore divisore oltre a 2 e se stesso
            primo = 0; //setto il flag primalità
            break; //esco dal ciclo for a prescindere dal contatore i
        }
    }
    //terminato il ciclo verifico che il flag sia rimasto a 1 e il numero inserito sia diverso da 1
    if(primo && num != 1){
        printf("%d è un numero primo.\n",num);
    } else {
        printf("%d non è un numero primo.\n",num);
    }

    return 0;
}
