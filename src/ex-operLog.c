#include <stdio.h>

void decimalToBinary(int num) {   
    if (num == 0) {
        printf("0");
        return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   int num1 = num;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num = num / 2;
   }
   printf("%d --> ", num1);
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);

    printf("\n");
}
    

int main() {
   int num = 36;
   decimalToBinary(num);
   num <<= 1;
   decimalToBinary(num);
   return 0;
}