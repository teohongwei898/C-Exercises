#include <stdio.h>

int main (void)

{
    int n;

    printf("Please key in your integer = \n");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 != 0)

        printf("Fizz!");

    else if (n % 3 != 0 && n % 5 == 0)

        printf("Buzz!");

    else if (n % 3 == 0 && n % 5 == 0)

        printf("Fizzbuzz!");

    return 0;
}
