#include <stdio.h>

int main(){
    char nome[20];
    int num1,num2,sum;

    printf("Inserisci il tuo nome:\n");
    if(scanf("%19s", nome) != 1){
        printf("inpunt non valido come nome");
        return 1;
    }

    printf("Inserisci un numero:\n");
    if(scanf("%d", &num1) != 1){
        printf("inpunt non valido come numero");
        return 1;
    }

    printf("Inserisci un secondo numero:\n");
    if(scanf("%d", &num2) != 1){
        printf("inpunt non valido come numero");
        return 1;
    }

    sum = num1 + num2;

    printf("\nIl tuo nome è: %s e la somma di %d e %d è %d\n",nome,num1,num2,sum);

    return 0;
}