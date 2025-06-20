/*
    Esercizio finale corso fondamenti di programmazione in C
*/
#include <stdio.h> //includo la libreria per la gestione di I/O
#include <string.h>
#include <stdlib.h>

//eventuali strutture dati

typedef struct
{
    char nome[31];
    char password[21];
}Utente;

//funzione riempimenti array utenti
void riempimento(Utente *utenti, size_t m){

    for(size_t i = 0; i < m; i++){
        printf("Inserisci il nome utente %d: ", ((int)i)+1);
        scanf("%30s", utenti[(int)i].nome);
        printf("Inserisci la password per l'utente %s: ", utenti[(int)i].nome);
        scanf("%20s", utenti[(int)i].password);
    }
}

//funzione validazione nome e password
int validaLogin(Utente *ut, char nome[31], char passwd[21]){
    int e = 5;
    int r = 0;
    for(int i = 0; i < e; i++){
        if(strcmp(ut[i].nome, nome) == 0 && strcmp(ut[i].password, passwd) == 0){
            r = 1;
            break;
        }
    }

    return r;
};


int main(int argc, char *argv[]){


    //verifico ci sia almeno un argomento oltre al nome del programma
    if(argc <= 1){
        printf("\n");
        printf("!Devi inserire un intero compreso tra 1 e 5 per avviare il programma!\n");
        printf("\n");
        printf("Es. ./ex-struct_2_190625 5\n");
        printf("\n");

        return EXIT_FAILURE;
    }

    size_t n = (size_t)atoi(argv[1]);

    int login = 0;
    char nome[31];
    char password[21];

    
    //alloco la memoria per l'array che conterrà le struct Utente
    Utente *utenti = malloc(n * sizeof *utenti);
    if (utenti == NULL) {                     // 2) Controllo di errore
        fprintf(stderr, "malloc fallita\n");
        return EXIT_FAILURE;
    }


    printf("Effettuo il riempimento del db utenti...\n");

    riempimento(utenti, n);

    printf("\n");
    printf("Ora testo la funzione validaLogin...\n");

    while(login == 0){
        printf("Login utente: ");
        scanf("%30s", nome);

        printf("Login password: ");
        scanf("%20s", password);

        login = validaLogin(utenti, nome, password);

        if(!(login))printf("\nErrata, ritenta...\n");

    }

    printf("Login avvenuta con successo! Benvenuto %s!!\n", nome);
    
    //Esco dal programma senza errori
    return 0;
}