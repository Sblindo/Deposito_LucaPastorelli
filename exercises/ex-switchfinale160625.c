#include <stdio.h>
#include <string.h>

int main(){

    int segreta = 24;
    int menu;
    char ruolo[11];

    //inserisce il ruolo
    printf("Inserisci il tuo ruolo: (studente|docente|ospite) ");
    scanf("%10s", ruolo);

    //inserisco la scelta di menù
    printf("Inserisci la scelta di menù: (1|2|3) ");
    scanf("%d", &menu);

    //faccio i controlli richiesti
    if(strcmp(ruolo, "studente") == 0 && (menu == 1 || menu == 2)){
        printf("Accesso materiali didattici\n");
    }else if(strcmp(ruolo, "docente") == 0 && menu == 2){
        printf("Accesso alla gestione corsi\n");
    }else if(strcmp(ruolo, "ospite") == 0){
        printf("Area Informativa\n");
    }else{
        printf("Opzione non disponibile\n");
    }

    //
    switch(menu){
        case 1:
            printf("Hai scelto: Visualizza\n");
            if(strcmp(ruolo, "ospite") == 0){
                printf("La varibile segreta esiste!\n");
            }else if(strcmp(ruolo, "studente") == 0 || strcmp(ruolo, "docente") == 0){
                printf("La variabile segreta è: %d\n", segreta);
            }else{
                printf("Ti piacerebbe sapere se esite una variabile segreta!!\n");
            }
            break;
        case 2:
            printf("Hai scelto: Modifica\n");
            if(strcmp(ruolo, "ospite") == 0){
                printf("La varibile segreta esiste!\n");
            }else if(strcmp(ruolo, "studente") == 0){
                printf("La variabile segreta è: %d\n", segreta);
            }else if(strcmp(ruolo, "docente") == 0){
                printf("Modifica la variabile segreta: ");
                scanf("%d", &segreta);
                printf("Ora la variabile segreta è: %d\n", segreta);
            }else{
                printf("Ti piacerebbe sapere se esite una variabile segreta!!\n");
            }
            break;
        case 3:
            printf("Hai scelto: Esci\n");
            break;
        default:
            printf("Hai scelto una voce non disponibile in menù\n");
            break;
    }

    return 0;
}