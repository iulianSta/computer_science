#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? "); //  char single letter/ character

    // Check whether user agreed
    if ( c == 'y' || c == 'Y') // || means OR , && means AND
    {
        printf("Agreed.\n"); // use "" double coats to indicate a string agreement
    }
    else if ( c == 'n' || c == 'N') // use '' single coats to indicate a single character agreement
    {
        printf("Not agreed.\n");
    }
}

// Lesson 5