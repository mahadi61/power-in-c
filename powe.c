#include <stdio.h>

int main()
{
    // sum of square number

    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + (i * i);
    }

    printf("%d", sum);

    return 0;
}