#include <stdio.h>

int  inserisci(int c, int num[]);
int media(int d, int num1[]);

int main(int argc, char *argv[]){

    int numeri[50], quanti; //Contatore quanti numeri vuole inserire l'utente

    printf("Dimmi quanti numeri vuoi inserire: ");
    scanf("%d", &quanti);

    while(quanti <= 0 || quanti > 50){ //il numero di interi deve essere compreso tra 1 e 50 oppure lo chiede di nuovo
        printf("Puoi inserirne massimo 50!\n");
        printf("Dimmi quanti numeri vuoi inserire: ");
        scanf("%d", quanti);
    }

    if(!(inserisci(quanti, numeri))){
        printf("\n");
        printf("La media dei numeri inseriti è: %d\n", media(quanti,numeri));
    }

    

    return 0;
}

int inserisci(int c, int num[]){
    for(int i = 0; i < c; i++){
        printf("Inserisci il numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    return 0;
}

int media(int d, int num1[]){ //calcola la media dei numeri in un array di int
    int somma, media;

    for(int i = 0; i < d; i++){
        somma += num1[i];
    }

    media = somma / d;

    return media;
}