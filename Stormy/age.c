#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // determine number of people
    int n;
    do
    {
        printf("Number of people in the room: ");
        n = GetInt();
    }
    while (n < 1);

    // declare array in which to store everyone's age
    int shoes[n];

    // get everyone's age
    for (int i = 0; i < n; i++)
    {
        printf("shoe size  of person #%i: ", i + 1);
        shoes[i] = GetInt();
    }

    // report everyone's age a year hence
    printf("Time passes...\n");
    for (int i = 0; i < n; i++)
    {
        printf("A year from now, person #%i will have a  %i size shoe.\n", i + 1, shoes[i] + 1);
    }
}
