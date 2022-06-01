#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);


int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    // float sale = regular * .85; - float 0.85
    float sale = discount(regular, percent_off); // we use discount because now we have the discount function
    printf("Sale Price: %2f\n", sale);
}

float discount(float price, int percentage)
{
    // float sale = price * .85; - we can do this or

    // return price * .85; - we can return discount here

    return price * (100 - percentage) / 100;
}

// Lesson 8