#include <cs50.h>
#include <stdio.h>

int main(void)
{
// // #1 : Example 1
//     // Prompt user for x
//     int x = get_int("x: ");

//     // Prompt user for y
//     int y = get_int("y: ");

//     // Perform addition
//     printf("%i\n", x + y);

// // #2 : Example 2
//     // Prompt user for x
//     int x = get_int("x: ");

//     // Prompt user for y
//     int y = get_int("y: ");

//     // Prompt user for z (addition of x and y)
//     int z = x + y;

//     // Run
//     printf("%i\n", z);

// // #3 : Example 3
//     // #1 and #2 are suitable only for integers (32-bits), below is for float a.k.a long integers.
//     // Prompt user for x
//     long x = get_long("x: ");

//     // Prompt user for y
//     long y = get_long("y: ");

//     // Perform addition
//     printf("%li\n", x + y);

// #4 : Example 4
     // Prompt user for x
    float x = get_float("x: ");

    // Prompt user for y
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;

    // Perform addition
    printf("%.50f\n", z);
}
