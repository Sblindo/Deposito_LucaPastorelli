#include <stdio.h>

int main(){
    int num; //intero inserito dall'utente
    int cont = 0; //contatore numeri pari
    char scelta = 's';

    do{

        //verifico la scelta dell'utente
            printf("Inserisci un numero intero: ");
            scanf("%d", &num);

            if(num % 2 == 0){
                cont++;
            }
        

        do{
            printf("Vuoi Continuare? (s | n) ");
            scanf(" %c", &scelta);
        }while(scelta != 's' && scelta != 'n');
        

        
        


    }while(scelta != 'n');

    printf("Il numero di interi pari inseriti è: %d\n", cont);

    return 0;
}