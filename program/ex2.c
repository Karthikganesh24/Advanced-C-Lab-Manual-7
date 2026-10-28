#include <stdio.h>

struct numbers
{
    int a;
    int b;
};

struct numbers add(struct numbers n)
{
    struct numbers result;
    result.a = n.a + n.b;
    result.b = 0;
    return result;
}

int main()
{
    struct numbers n, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &n.a, &n.b);

    result = add(n);

    printf("Sum = %d\n", result.a);

    return 0;
}