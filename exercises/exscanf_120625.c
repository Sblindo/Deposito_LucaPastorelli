#include <stdio.h>
#include <ctype.h>

int main(){
    char citta[50];
    float num1,num2,num3,media;

    //inserisci il nome della città
    printf("\nInserisci il nome della tua città: ");
    scanf("%49s", citta);

    //inserisci un primo numero
    printf("\nInserisci un primo numero: ");
    scanf("%f", &num1);

    //inserisci un secondo numero
    printf("\nInserisci un secondo numero: ");
    scanf("%f", &num2);

    //inserisci un terzo numero
    printf("\nInserisci un terzo numero: ");
    scanf("%f", &num3);

    //calcolo la media
    media = (num1 + num2 + num3)/3;

    //contatore per il while
    int i = 0;

    if(media > 5){
        //ciclo la string citta sostituendo le minuscole con le maiuscole
        while(citta[i]){
            citta[i] = toupper(citta[i]);
            i++;
        }
    }
    else{
        //ciclo la string citta sostituendo le maiuscole con le minuscole
       while(citta[i]){
            citta[i] = tolower(citta[i]);
            i++;
        }
    }
    
    //stampo a video tutto
    printf("\nIl nome della tua città è %s e la media dei numeri inseriti è %.2f\n", citta,media);
    return 0;
}