#include <stdio.h>

int main(){
    int num; //dichiaro la variabile

    //chiedo all'utente di inserire un numero intero e valorizzo la variabile num
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);

    //verifico che il numero inserito sia positivo e pari
    if((num > 0) && (num % 2 == 0)){

        printf("Il numero inserito è positivo e pari\n"); //stampa a video

        //verifico se il numero inserito sia maggiore di 50
        if(num > 50){

            printf("Molto grande!\n"); //stampa a video

        }
    }else if((num < 0) || (num > 100)){ //verifico se il numero inserito sia negativo o maggiore di 100

        printf("Il numero inserito è negativo o maggiore di 100 e dispari\n"); //stampa a video

        //verifico ulteriormente se il numero inserito è multiplo di 5
        if(num % 5 == 0){

            printf("Multiplo di 5!\n"); //stampa a video
        }
    }else{
        printf("Il numero inserito non soddisfa nessuna delle seguenti condizioni!\n"); //stampa a video
    }

    //verifico che il numero sia diverso da zero
    if(num != 0){
        printf("Il numero inserito è diverso da zero\n"); //stampa a video
    }
}