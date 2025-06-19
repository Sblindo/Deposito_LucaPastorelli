#include <stdio.h>

int  inserisci(int c, int num[]);
int media(int d, int num1[]);
int sopraMedia(int e, int num2[]);
int sottoMedia(int f, int num3[]);

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
        printf("La media dei numeri inseriti è: %d\n", media(quanti, numeri));
        printf("%d numeri sono sopra la media!\n", sopraMedia(quanti, numeri));
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
    int somma, med;

    for(int i = 0; i < d; i++){
        somma += num1[i];
    }

    med = somma / d;

    return med;
}

int sopraMedia(int e, int num2[]){
    int media1, cont = 0;

    media1 = media(e, num2);

    for(int j = 0; j < e; j++){
        if(num2[j] > media1)cont++;
    }

    return cont;
}

int sottoMedia(int f, int num3[]){
    int media2, cont1 = 0;

    media2 = media(f, num3);

    for(int j = 0; j < f; j++){
        if(num3[j] < media2) cont1++;
    }

    return cont1;
}