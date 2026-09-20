#include<stdio.h>
int main () {
    int num, i;
    int isPrime = 1; 

    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &num);

   
    if (num <= 1) {
        isPrime = 0;
    }

    for(i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0; 
            break;       
        }
    }

    
    if (isPrime == 1) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }

    return 0;
}
