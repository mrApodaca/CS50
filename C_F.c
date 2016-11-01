#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf (" Celcius degrees?:");
    float Celcius = GetInt();
    float Farenheit = 1.8 *Celcius +32;
    printf("%f in Celcius degrees is exactly ", Celcius);
    printf("%f degrees Farenheit", Farenheit);
    
}
