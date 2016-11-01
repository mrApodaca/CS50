#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf(" Degrees Fahrenheit?:");
    float F = get_float();
    float C = 5.0/9.0 * F - 32.0;
    printf("%f in fahrenehit degrees is exactly ", F);
    printf("%f in celcius degrees.", C);
    
    
    
}
