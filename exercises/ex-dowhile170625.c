#include <stdio.h>

int main(){
    int num; //intero inserito dall'utente
    int cont = 0; //contatore numeri pari
    char scelta = 's';

    do{

        //faccio inserire l'intero all'utente
            printf("Inserisci un numero intero: ");
            scanf("%d", &num);

            if(num % 2 == 0){
                cont++;
            }
        

        do{
            printf("Vuoi Continuare? (s | n) ");
            scanf(" %c", &scelta);
        }while(scelta != 's' && scelta != 'n'); //chiedo all'utente se vuole continuare fino a quando la scelta non è 's' o 'n'
        

    }while(scelta != 'n'); //controllo se la risposta è n

    printf("Il numero di interi pari inseriti è: %d\n", cont);

    return 0;
}