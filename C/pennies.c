#include <cs50.h>
// #include <math.h> - include math library to use the round function
#include <stdio.h>

int main(void)
{
    float amount = get_float("Dollar amount: ");
    int pennies = amount * 100;
    printf("Pennies: %i\n", pennies);
}

/* The program works until we want to calculate 4.20 the result is 419 pennies not 420 
The solution is to round the result */

/*
int main(void)
{
    float amount = get_float("Dollar amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}
*/