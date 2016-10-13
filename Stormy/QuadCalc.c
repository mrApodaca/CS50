#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void)

{
    printf ("What are the values of a, b, and c?: \n");
          int a = GetInt();
          int b = GetInt();
          int c = GetInt();
           
              
           int posquad = -b + sqrt(b * b - 4 * a * c);
           int posans = posquad / 2;
           int negquad = -b - sqrt (b * b - 4 * a * c);
           int negans = negquad / 2;
    printf ("x = %i" , posans);
    printf (", x = %i" , negans);
}
