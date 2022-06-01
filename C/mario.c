#include <cs50.h>
#include <stdio.h>

/*
int main(void)
{
    // printf("????\n"); - ASCII art

    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}

result ????
*/

/*
int main(void)
{
    int n;
    do  // do loop - do first then check
    {
        n = get_int("Width: ");
    } 
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n"); 
}

result print as many ? as the user input ??? or ?????
*/

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } 
    while (n < 1);

    // For each row
    for (int i = 0; i < n; i++)
    {
        // printf("#");

        // For each column
        for (int j = 0; j < n; j++)
        {
            // Print a brick
            printf("#");
        }

        // Move to next row
        printf("\n");
    }
    // printf("\n");  
}

// result will take the same amount of bricks that user input them and put them on rows and columns
// ex. input == 3;
/*
### 3/3
###
###
*/

// Lesson 7