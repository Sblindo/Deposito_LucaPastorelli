#include <stdio.h>

int  inserisci(int a, int num[]);
float media(int a, int num[]);
int sopraMedia(int a, int num[], float b);

int main(int argc, char *argv[]){

    int numeri[50], quanti = 0, sopra = 0;
    float mediaArr; 

    printf("Dimmi quanti numeri vuoi inserire: ");
    scanf("%d", &quanti);

    while(quanti <= 0 || quanti > 50){ //il numero di interi deve essere compreso tra 1 e 50 oppure lo chiede di nuovo
        printf("Puoi inserirne massimo 50!\n");
        printf("Dimmi quanti numeri vuoi inserire: ");
        scanf("%d", quanti);
    }

    if(!(inserisci(quanti, numeri))){
        mediaArr = media(quanti, numeri);
        sopra = sopraMedia(quanti, numeri, mediaArr);
        printf("\n");
        printf("La media dei numeri inseriti è: %.2f\n", mediaArr);
        printf("%d numeri sono sopra la media!\n", sopra);
    }

    

    return 0;
}

int inserisci(int a, int num[]){
    for(int i = 0; i < a; i++){
        printf("Inserisci il numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    return 0;
}

float media(int a, int num[]){ //calcola la media dei numeri in un array di int
    int somma = 0;
    float med;

    for(int i = 0; i < a; i++){
        somma += num[i];
    }

    med = (float)somma / a;

    return med;
}

int sopraMedia(int a, int num[], float b){
    int cont = 0;

    for(int i = 0; i < a; i++){
        if(num[i] > b)cont++;
    }

    return cont;
}

