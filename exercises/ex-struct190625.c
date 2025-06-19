#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char modello[31];
    int anno;
} Macchina;

int media(Macchina *macc,size_t m){
    int somma = 0;

    for(size_t i = 0; i < m; i++){
        somma += macc[(int)i].anno;
    }

    return somma / (int)m;

};

int main(int argc, char *argv[]){

    //verifico ci sia almeno un argomento oltre al nome del programma
    if(argc <= 1){
        printf("\n");
        printf("!Devi inserire un intero compreso tra 1 e 50 per avviare il programma!\n");
        printf("\n");
        printf("Es. ./ex-struct190625 5\n");
        printf("\n");

        return EXIT_FAILURE;
    }

    size_t n = (size_t)atoi(argv[1]); //numero di elementi dell'array che conterrà le macchine inserite
    int med; //media anno produzione macchine


    //alloco la memoria per l'array che conterrà le struct macchina
    Macchina *macc = malloc(n * sizeof *macc);
    if (macc == NULL) {                     // 2) Controllo di errore
        fprintf(stderr, "malloc fallita\n");
        return EXIT_FAILURE;
    }

    //valorizzazione dei componenti l'array
    for(size_t i = 0; i < n; i++){
        printf("Inserisci il modello e l'anno (Golf 2011): ");
        scanf("%30s %d", macc[i].modello,&macc[i].anno);
    }

    printf("\n");

    //stampo su stdout le macchine dell'array
    for(size_t i = 0; i < n; i++){
        printf("Modello: %s, Anno: %d\n", macc[i].modello, macc[i].anno);
    }

    med = media(macc,n); //media anno produzione delle automobili inserite

    printf("La media dell'anno di produzione delle automobili inserite è: %d\n", med);

    //libero la memoria occupata dall'array
    free(macc);
    macc == NULL;

    return EXIT_SUCCESS;
}