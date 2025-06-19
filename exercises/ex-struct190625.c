#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char modello[31];
    int anno;
} Macchina;

int main(){

    int quante;
    Macchina macc[50];

    printf("Quante macchine vuoi inserire? ");
    scanf("%d", &quante);

    while(quante <= 0 || quante > 50){ //il numero di interi deve essere compreso tra 1 e 50 oppure lo chiede di nuovo
        printf("Puoi inserirne massimo 50 macchine!\n");
        printf("Dimmi quante macchine vuoi inserire: ");
        scanf("%d", &quante);
    }

    for(int i = 0; i < quante; i++){
        printf("Inserisci il modello: ");
        scanf("%30s", macc[i].modello);
        printf("Inserisci l'anno: ");
        scanf("%d", &macc[i].anno);
    }

    for(int i = 0; i < quante; i++){
        printf("Modello: %s; Anno: %d\n", macc[i].modello, macc[i].anno);
    }

    

    return 0;
}