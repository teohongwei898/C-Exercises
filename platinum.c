#include <stdio.h>

int main (void)

{
    float weight;
    float value;

    printf("Are you worth your weight in platinium?\n");
    printf("Let's check it out!\n");
    printf("Please key in your weight in pounds.\n");
    scanf("%f", &weight);
    
    value = 1700.0 * weight * 14.5833;
    
     printf("Your weight in platinum is worth $%.2f.\n, value");
    printf("You are easily worth that! If prices of platinium drop,\n");
    printf("eat more to maintain your current value!\n");

    return 0;
}
