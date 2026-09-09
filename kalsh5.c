#include<stdio.h>
int main (){
    int age;
    printf("Enter the age =");
    scanf("%d",&age);

    age>=18? printf("The person is adult") : printf("The person is minor");

    return 0;
}