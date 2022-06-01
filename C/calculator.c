#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: "); // ins uses 32-bit
    // long x = get_long("x: "); for long numbers ex. 1000000000
    int y = get_int("y: ");
    // long y = get_long("y: "); long uses 64-bit
    printf("%i\n", x + y);
    // printf("%li\n", x + y);

    // This is a comment 

    // Conditions

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is not less than y\n");
    }
}

// Lesson 2