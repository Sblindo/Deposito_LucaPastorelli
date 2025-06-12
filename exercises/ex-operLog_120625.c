#include <stdio.h>

int main(){
    //dichiaro le variabili
    int num1,num2,num3,x;
    int somma,prod;

    //Permetto all'utente di inserire i tre numeri e la soglia
    printf("Inserisci un primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci un secondo numero intero: ");
    scanf("%d", &num2);

    printf("Inserisci un terzo numero intero: ");
    scanf("%d", &num3);

    printf("Inserisci un numero intero di soglia: ");
    scanf("%d", &x);

    //definisco le variabili somma e prodotto
    somma = num1 + num2;
    prod = num2 * num3;

    printf("\n");
    //Stampo a video il valore di somma e prodotto
    printf("La Somma del primo e secondo numero è: %d\n", somma);
    printf("Il prodotto tra il secondo ed il terzo numero è: %d\n", prod);

    printf("\n");
    //utilizzo le condizioni per verificare se somma e prodotto siano minori o maggiori del valore di soglia
    if(somma > x){
        printf("La somma di num1 e num2 %d è maggiore della soglia %d\n", somma, x);
    }else if(somma == x){
        printf("La somma di num1 e num2 %d è uguale alla soglia %d\n", somma, x);
    }else{
        printf("La somma di num1 e num2 %d è minore della soglia %d\n", somma, x);
    }

    if(prod < x){
        printf("Il prodotto di num2 e num3 %d è minore della soglia %d\n", prod, x);
    }else{
        printf("Il prodotto di num2 e num3 %d è maggiore della soglia %d\n", prod, x);
    }

    printf("\n");
    //utilizzo condizioni e operatori logici per verificare alcune casistiche sui valori assegnati alle variabili num1 num2 e num3
    if(num1 < 0 || num2 < 0 || num3 < 0){
        printf("Almeno uno dei tre numeri è negativo\n");
    }else{
        printf("Nessuno dei tre numeri è negativo\n");
    }

    if(num1 != 0 && num2 != 0 && num3 != 0){
        printf("Nessuno dei tre numeri è uguale a zero\n");
    }else{
        printf("Almeno uno dei tre numeri è uguale a zero\n");
    }

    if(!(num1 == 100 || num2 == 100 || num3 == 100)){
        printf("Nessuno dei tre numeri è uguale a 100\n");
    }else{
        printf("Almeno uno dei tre numeri è uguale a 100\n");
    }
}