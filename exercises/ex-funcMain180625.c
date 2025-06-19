#include <stdio.h>
#include <stdlib.h>

int maximum(int *, int *); //calcola il massimo tra due interi in ingresso
int quad(int); //calcola il quadrato di un intero in ingresso

int main(int argc, char *argv[]){ //considero gli argomenti inseriti col programma

    if(argc != 3){ // verifico ci siano due e solo due argomenti (argc conta anche il nome del programma contenuto in argv[0])

        printf("Devi inserire due numeri interi dopo il nome del programma!\n(Es. ./funcMain180625 10 11)\n");
        exit(0); //interrompo il programma nel caso l'utente non abbia inserito i due argomenti necessari

    }

    int a, b; //dichiaro i due interi su cui lavorare

    a = atoi(argv[1]); //converto il primo argomento in un intero (atoi accetta un puntatore ad una stringa)
    b = atoi(argv[2]); //converto il secondo argomento in un intero (atoi accetta un puntatore ad una stringa)
    
    printf("Il massimo tra %d e %d è: %d\n", a, b, maximum(&a,&b)); //invio sullo stream stdout il risultato della funzione maximum
    printf("Il quadrato di %d è: %d\n", a, quad(a)); //invio sullo stream stdout il risultato della funzione quad di a
    printf("Il quadrato di %d è: %d\n", b, quad(b)); //invio sullo stream stdout il risultato della funzione quad di b

    return 0; //esco dal programma senza accodare errori 

}

int maximum(int *x, int *y){ //utilizzo dei puntatori a due interi come parametri 

    int max = *x; //considero il primo intero come massimo

    if(*y > *x) max = *y; //se il secondo intero è maggiore di max lo sostituisco al valore massimo

    return max; //restituisco la variabile max
}

int quad(int z){
    
    int q = z * z; //produco il prodotto dell'intero inserito 

    return q; //retituisco il valore di q
}