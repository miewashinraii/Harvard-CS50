#include <stdio.h>
#include <cs50.h> //for 2nd example 

void print_column(int height); //this is for 2nd example

int main(void)
{
    // // First example (comment out lines 6-9 if not used)
    // for (int i=0; i < 3; i++)
    // {
    //     printf("i is %i\n", i);
    //     printf("#\n");
    // }

    // This is for 2nd example
    int h = get_int("Height: ");
    print_column(h);
}

// 2nd example (cmt out lines 13-  if not used)
void print_column(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}