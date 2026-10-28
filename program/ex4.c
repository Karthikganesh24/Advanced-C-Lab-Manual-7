#include <stdio.h>

int main()
{
    FILE *p;
    char name[100];
    char text[200];
    int num, i;

    printf("Enter file name: ");
    scanf("%99s", name);

    printf("Enter number of strings: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid number of strings!\n");
        return 1;
    }

    p = fopen(name, "w");

    if (p == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    getchar();

    for (i = 0; i < num; i++)
    {
        printf("Enter string %d: ", i + 1);

        if (fgets(text, sizeof(text), stdin) == NULL)
            break;

        fputs(text, p);
    }

    fclose(p);

    printf("Data added successfully.\n");

    return 0;
}