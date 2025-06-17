#include <stdio.h>

int main(){
    int num = 1; //valorizzo a 1 perchè cosi num potrà essere usato nel while
    int somma = 0;
    char term;

    while(num){
        //l'utente deve inserire un numero intero
        printf("Inserisci un numero intero(0 per terminare): ");

        if(scanf("%d%c", &num, &term) == 2 && term == '\n'){
            if(num == 0){
                break;
            }
        //verifico se num è positivo
            if(num > 0){
                somma += num;
            }
        }else{
            printf("!!Puoi inserire solo interi!!\n");
            break;
        }

        //verifico se num è zero, quindi stampo somma ed esco da programma
        


    }

    //stampo sullo stdout il valore di somma
    if(somma != 0){
        printf("La somma dei numeri positivi inseriti è: %d\n", somma);
    }
    
    return 0;
}