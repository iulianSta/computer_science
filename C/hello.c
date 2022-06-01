#include <cs50.h> // include cs50.h to be able to use get_string function
#include <stdio.h> // define the header file  

int main(void)   // define the main function  
{  
    string answer = get_string("What's your name? "); // declare the string variable as a question to get an input answer
    printf("hello, %s\n", answer);  // print the statement / %s is a placeholder - you tell the computer to put a string here

}  

// use make file name (hello) command to make an executable file
// use ./file name (hello) to execute the code => hello, world

// Values C : bool, char, int, float, double, string, float, long ...
// Format codes: %c, %f, %i, %li, %s ...
// Operators: +, -, *, /, % 
// counter = counter + 1 means assign the value of counter + 1 to update the counter / we can write it as counter += 1; / counter++; - syntactic sugar

// Lesson 1