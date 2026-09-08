#include<stdio.h>
int main(){
    int a = 6 , b = 19 , c;
    c = a;
    a = b;
    b = c;

    printf("a=%d\n b=%d\n",a,b);

    return 0;
}