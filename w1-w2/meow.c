#include <stdio.h> // prototype for printf

void meow(int n); //As a prototype, for preprocessing,

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
