#include <cs50.h>
#include <stdio.h>

int main(void)
{
       
        printf("Celsius Degrees?:");
           int Celsius= GetInt();
         int Fahrenheit = 1.8 * Celsius + 32;
        printf(" %i degrees celsius, ", Celsius );
        printf(" is %i degrees fahrenheit", Fahrenheit);
}
