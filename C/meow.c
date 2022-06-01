#include <cs50.h>
#include <stdio.h>
// Create my own function meow()

// void meow(void);
void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    int i = 0;
    while (i < 3) // while loop - condition
    {
        /* code */
        printf("meow\n");
        i++;

        // meow(); - we can call the meow function created earlier without to write the code above
    }

     // for loop
        /* for (int i = 0; i < 3; i++)
        {
            printf("meow\n");
        } */
        // multiple line comment - use /* comment */
}

/*
meow(void)  - we can crate here the meow function and to not get an error we need to add  void meow(void); on top without the top meow function 
{
    printf("meow\n");
}
*/

// ---------------------------------------- Add this to not use another file --------------------------------

/*
void meow(int n);   - declare integer as a variable in the meow function

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
*/

// Lesson 6