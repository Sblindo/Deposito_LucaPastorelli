#include <stdio.h>

int main(){
    int num; //dichiaro la cariabile num

    //chiedo all'utente di inserire un valore intero per la variabile num
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);

    printf("\n");

    
    if(num > 0){ //verifico se il numero inserito è positivo

        printf("Il numero inserito è positivo!\n");

        if(num > 100){ //se positivo verifico ulteriormente se il numero inserito è maggiore di 100
            printf("\"WOW\" il numero è maggiore di 100\n");
        }

    }else if(num == 0){ //se non positivo verifico se uguale a zero

        printf("Il numero inserito è zero!\n");

    }else { // per esclusione il numero inserito sarà sicuramente negativo

        printf("Il numero inserito è negativo!\n");

    }

    return 0;
}