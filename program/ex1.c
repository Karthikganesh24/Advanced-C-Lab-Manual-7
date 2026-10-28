#include <stdio.h>

struct eligible
{
    int age;
    char n[50];
};

int main()
{
    struct eligible e[1];

    printf("Enter name: ");
    scanf("%49s", e[0].n);

    printf("Enter age: ");
    scanf("%d", &e[0].age);

    if (e[0].age <= 6)
        printf("Vaccine Eligibility: No\n");
    else
        printf("Vaccine Eligibility: Yes\n");

    printf("Name: %s\n", e[0].n);
    printf("Age: %d\n", e[0].age);

    return 0;
}