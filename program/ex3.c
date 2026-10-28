#include <stdio.h>

int main()
{
    FILE *p;
    char name[100];

    printf("Enter file name: ");
    scanf("%99s", name);

    p = fopen(name, "w");

    if (p == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    fclose(p);

    printf("File closed successfully.\n");

    return 0;
}