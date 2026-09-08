#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    int age;

    printf("Enter Candidate's pronoun (he/she): ");
    scanf("%s", a);

    printf("Enter your age = ");
    scanf("%d", &age);

    if(age >= 18 && strcmp(a, "he") == 0)
    {
        printf("The Candidate is an Adult\n");
        printf("The Candidate is a male\n");
        printf("The Candidate can Vote\n");
    }
    else if(age >= 18 && strcmp(a, "she") == 0)
    {
        printf("The Candidate is an Adult\n");
        printf("The Candidate is a female\n");
        printf("The Candidate can Vote\n");
    }
    else
    {
        printf("The Candidate is not adult\n");
    }

    return 0;
}