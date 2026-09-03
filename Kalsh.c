#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    int b;
    printf("Enter a number ");
    scanf("%d", &b);
    int c;
    printf("Enter a number ");
    scanf("%d", &c);
    
    int d;
    d = (a+b+c)/3;
    printf("the average of three number is =");
    printf("%d", d);
    
    return 0;
}