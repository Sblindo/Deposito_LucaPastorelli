/*
    Esercizio finale corso fondamenti di programmazione in C
*/
#include <stdio.h> //includo la libreria per la gestione di I/O
#include <string.h>

//eventuali strutture dati

typedef struct
{
    char nome[31];
    char password[21];
}Utente;

//funzione validazione nome e password
int validaLogin(Utente ut[], char nome[], char passw[]){
    int e = 5;
    int r = 0;
    for(int i = 0; i < e; i++){
        if(strcmp(ut[i].nome, nome) == 0 && strcmp(ut[i].password, passw) == 0){
            r = 1;
        }
    }

    return r;
};


int main(int argc, char *argv[]){

    int res = 0, quanti = 5;
    Utente utenti[5];
    char nome[31];
    char password[21];

    for(int i = 0; i < quanti; i++){
        printf("Inserisci il nome utente %d: ", i+1);
        scanf("%30s", utenti[i].nome);
        printf("Inserisci la password per l'utente %s: ", utenti[i].nome);
        scanf("%20s", utenti[i].password);
    }

    printf("\n");

    while(res == 0){
        printf("Login utente: ");
        scanf("%30s", nome);

        printf("Login password: ");
        scanf("%20s", password);

        res = validaLogin(utenti, nome, password);


    }

    printf("Login avvenuta con successo! Benvenuto %30s", nome);
    
    //Esco dal programma senza errori
    return 0;
}