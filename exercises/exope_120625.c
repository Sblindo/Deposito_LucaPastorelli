#include <stdio.h>
#include <stdbool.h>

int main(){

    int num1,num2;
    int somma,diff,prod,quoz,res;

    //inserimento numero 1 dall'utente
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    //inserimento numero 2 dall'utente
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    //calcolo a somma, la differenza, il prodotto, il quoziente, ed il modulo tra num1 e num2
    somma = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    
    //stampo a video la somma, la differenza ed il prodotto
    printf("Somma = %d\n",somma);
    printf("Differenza = %d\n",diff);
    printf("Prodotto = %d\n",prod);

    if(!(num2 == 0)){
        quoz = num1 / num2;
        res = num1 % num2;

        printf("Quoziente = %d\n",quoz);
        printf("Modulo = %d\n",res);
    } else {
        printf("Quoziente e modulo non possono essere calcolati con 0 a denominatore\n");
    }
    
    if((num1 > 0) && (num2 > 0)){
        printf("Entrambi i numeri sono > di 0\n");
    }

    if((((num1 % 2) == 0) || ((num2 % 2) == 0)) && !(num2 == 0)){
        printf("Almeno uno dei due numeri è pari\n");
    }
    
    return 0;
}
