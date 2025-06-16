#include <stdio.h>
#include <string.h>

int main(){

    int giornoInt; //variabile giorno in intero 1 < giorno < 7
    char giorno[10]; //variabile stringa inserita dall'utente
    
    //faccio inserire la stringa del giorno dall'utente
    printf("Inserisci il giorno della settimana: ");
    scanf("%9s", giorno);

    //valorizzo giornoInt con l'intero corrispondente al giorno della settimana
    if(strcmp(giorno, "lunedì") == 0){
        giornoInt = 1;
    }else if(strcmp(giorno, "martedì") == 0){
        giornoInt = 2;
    }else if(strcmp(giorno, "mercoledì") == 0){
        giornoInt = 3;
    }else if(strcmp(giorno, "giovedì") == 0){
        giornoInt = 4;
    }else if(strcmp(giorno, "venerdì") == 0){
        giornoInt = 5;
    }else if(strcmp(giorno, "sabato") == 0){
        giornoInt = 6;
    }else if(strcmp(giorno, "domenica") == 0){
        giornoInt = 7;
    }else{
        printf("Giorno inserito non valido\n"); //Giorno non valido stampo un messaggio di errore ed esco dal programma
        return 1;
    }

    switch(giornoInt){
        case 1:
            printf("Lunedì\n");
            break;
        case 2:
            printf("Martedì\n");
            break;
        case 3:
            printf("Mercoledì\n");
            break;
        case 4:
            printf("Giovedì\n");
            break;
        case 5:
            printf("Venerdì\n");
            break;
        case 6:
            printf("Sabato\n");
            break;
        case 7:
            printf("Domenica\n");
            break;
    }

    return 0;
}