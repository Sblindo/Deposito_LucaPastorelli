#include <stdio.h>
#include <string.h>

int main(){

    int segreta = 69;
    int menu;
    char ruolo[11];

    //inserisce il ruolo
    printf("Inserisci il tuo ruolo: (studente|docente|ospite) ");
    scanf("%10s", ruolo);

    //inserisco la scelta di menù
    printf("Inserisci la scelta di menù: (1|2|3) ");
    scanf("%d", &menu);

    

    //effettuo i controlli partendo dalla voce di menù
    switch(menu){
        case 1:
            if(strcmp(ruolo, "studente") == 0){
                printf("Accesso materiali didattici\n");
            }
            printf("Hai scelto: Visualizza\n");
            break;
        case 2:
            if(strcmp(ruolo, "studente") == 0){
                printf("Accesso materiali didattici\n");
            }else if(strcmp(ruolo, "docente") == 0){
                printf("Accesso alla gestione corsi\n");
                printf("La variabile segreta è: %d\n", segreta);
            }
            printf("Hai scelto: Modifica\n");
            break;
        case 3:
            printf("Hai scelto: Esci\n");
            break;
        default:
            printf("Opzione di menù non valida\n");
            break;
    }

    return 0;
}