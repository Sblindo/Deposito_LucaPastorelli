#include <stdio.h>

int main(){

    int i = 0;
    int cont; //contatore numeri che inserirà l'utente
    int dispari = 0; //contatore numeri dispari
    int num; //numero inserito dall'utente

    //chiede all'utente quanti numeri vuole inserire
    printf("Quanti numeri vuoi inserire?: ");
    scanf("%d", &cont);

    for(; i < cont; i++){ //ciclo for per il numero cont

        printf("Inserisci un numero intero tra 10 e 100: ");
        scanf("%d", &num);

        while(num < 10 || num > 100){ //verifico che il numero sia compreso tra 10 e 100 altrimenti lo chiedo di nuovo

            printf("Il numero deve essere compreso tra 10 e 100\n");
            printf("Inserisci un numero intero tra 10 e 100: ");
            scanf("%d", &num);

        }

        if(num % 2 != 0){ //se dispari aumento il contatore dispari
            dispari++;
        }
    }

    if(cont > 0){ //Se ho inserito almeno un numero è diverso da zero stampo sullo stdout
        printf("Il numero di dispari inseriti è: %d\n", dispari);
    }else{
        printf("Se non inserisci un intero > 0 non posso contare i dispari!!\n");
    }
    
    return 0;
}