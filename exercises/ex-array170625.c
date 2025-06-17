#include <stdio.h>

int main(){

    int arr[100], num, i = 0, somma = 0; //var
    
    printf("Quanti elementi vuoi inserire? (Max 100) ");
    scanf("%d", &num);

    while(num >= 100){
        printf("Massimo 100...");
        printf("Quanti elementi vuoi inserire? ");
        scanf("%d", &num);
    }
    

    printf("Inserisci, separando con l'invio i numeri\n");

    for(; i < num; i++){
        scanf("%d", &arr[i]);
        somma += arr[i];
    }

    printf("La somma degli elementi dell'array è: %d\n", somma);

    return 0;
}