#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // determine a person's height
    int n;
    do
    {
        printf("What is your height in inches?");
        n = GetInt();
    }
    while (n < 1);


    for (int i = 0; i < n; i++)
    {
        printf(" #%i: ", i + 1);
        height[i] = GetInt();
    }


    printf("Time passes...\n");
    for (int i = 0; i < n; i++)
    {
        printf("Laying down, this person #%i will be %i  inches tall.\n", i + 1, height[i] + 1);
    }
  
 }
