#include <stdio.h>
#include <string.h>

int main(){

    int segreta = 24; //docente può visualizzarla o modificarla, studente può visualizzarla
    int menu;
    char ruolo[11];

    //inserisce il ruolo
    while(1){
        printf("Inserisci il tuo ruolo: (studente|docente|ospite) ");
        scanf("%10s", ruolo);

        if(strcmp(ruolo,"studente") == 0 || strcmp(ruolo,"docente") == 0 || strcmp(ruolo,"ospite") == 0){
            break;
        }else{
            
        }
    }
    

    
    while(1){
        printf("Inserisci la scelta di menù: (1|2|3) ");
        scanf("%d", &menu);

        if(menu <= 3 && menu >= 1){
            break;
        }else{
            printf("Le uniche opzioni sono 1 | 2 | 3\n");
        }
    }
    //inserisco la scelta di menù
    

    //verifica if else casi specifici
    if(strcmp(ruolo, "studente") == 0 && menu == 1){ //se menu == 1 e ruolo studente
        printf("Accesso ai materiali didattici\n");
    }else if(strcmp(ruolo, "docente") == 0 && menu == 2){ //se menu == 1 e ruolo docente
        printf("Accesso alla gestione corsi\n");
    }else if(strcmp(ruolo, "ospite") == 0){ //qualsiasi menu e ruolo ospite
        printf("Area informativa\n");
    }else{
        printf("Opzione non disponibile!\n");
    }


    //controllo le opzioni tramite uno switch 
    switch(menu){
        case 1:
            printf("Hai scelto: Visualizza\n");
            if(strcmp(ruolo, "studente") == 0 || strcmp(ruolo, "docente") == 0){ //docente e studente possono visualizzare la variabile segreta
                printf("La variabile segreta è: %d\n", segreta);
            }else{
                printf("Solo studenti e docenti possono visualizzare la variabile segreta!\n");
            }
            break;
        case 2:
            printf("Hai scelto: Modifica\n");
            if(strcmp(ruolo, "docente") == 0){ //il docente può variare il valore della variabile segreta
                printf("Modifica la variabile segreta, che ora vale %d: ", segreta);
                scanf("%d", &segreta);
                printf("Ora la variabile segreta vale: %d\n", segreta);
            }else{
                printf("Solo i docenti possono modificare la variabile segreta!\n");
            }
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