#include <stdio.h>
#include <stdlib.h>

struct subject
{
    char name[50];
    int marks;
};

int main()
{
    struct subject *s;
    int n, i;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of subjects!\n");
        return 1;
    }

    s = malloc(n * sizeof(struct subject));

    if (s == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter subject name and marks: ");
        scanf("%49s %d", s[i].name, &s[i].marks);
    }

    printf("\nStudent Subject Details:\n");

    for (i = 0; i < n; i++)
    {
        printf("Subject: %s, Marks: %d\n",
               s[i].name, s[i].marks);
    }

    free(s);

    return 0;
}