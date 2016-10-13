#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int s = printf("#########\n");
    int f = s-printf("##\n");
    
    for (int i = f; i < 5; i++)
    {
        printf ("%i\n", i);
    }
    
}
