#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[31];
    char telefono[16];
} Contatto;

int trova(Contatto *contact,size_t m, char nome[31]){
    int trovato = 0;

    for(size_t i = 0; i < m; i++){
        if(strcmp(contact[(int)i].nome, nome) == 0)trovato = 1;
        if(trovato)break;
    }

    return trovato;

};

int main(int argc, char *argv[]){

    //verifico ci sia almeno un argomento oltre al nome del programma
    if(argc <= 1){
        printf("\n");
        printf("!Devi inserire un intero compreso tra 1 e 20 per avviare il programma!\n");
        printf("\n");
        printf("Es. ./ex-struct_2_190625 5\n");
        printf("\n");

        return EXIT_FAILURE;
    }

    size_t n = (size_t)atoi(argv[1]); //numero di elementi dell'array che conterrà le macchine inserite
    int presente = 0; //presenza contatto
    char cerca[31]; //nome da cercare in rubrica


    //alloco la memoria per l'array che conterrà le struct macchina
    Contatto *contact = malloc(n * sizeof *contact);
    if (contact == NULL) {                     // 2) Controllo di errore
        fprintf(stderr, "malloc fallita\n");
        return EXIT_FAILURE;
    }

    //valorizzazione dei componenti l'array
    for(size_t i = 0; i < n; i++){
        printf("Inserisci il nome ed il numero del contatto (Luca 555-546576): ");
        scanf("%30s %15s", contact[i].nome, contact[i].telefono);
    }

    printf("\n");

    
    printf("Inserisci un nome da cercare nella rubrica: ");
    scanf("%30s", cerca);

    if(trova(contact, n, cerca)){
        printf("Contatto presente in rubrica!\n");
    }else{
        printf("Contatto non presente in rubrica!\n");
    }
    

    //libero la memoria occupata dall'array
    free(contact);
    contact == NULL;

    return EXIT_SUCCESS;
}