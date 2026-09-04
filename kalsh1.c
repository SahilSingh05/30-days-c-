#include<stdio.h>
int main()
{
    float b;
    char c;
    int a;
    printf("Enter the integer to assign to a:");
    scanf("%d", &a);

    printf("enter the float number to assign to b:");
    scanf("%f", &b);

    printf("Enter the char to assign to c:");
    scanf(" %c", &c);

    printf("the size of the integer is %zu bytes \n ", sizeof(a));
    printf("the size of the float is %zu bytes \n ", sizeof(b));
    printf("the size of the char is %zu bytes \n", sizeof(c));

    return 0;
}