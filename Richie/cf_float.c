#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("What degree Celcius do you want to covert?\n");
    float c = get_float(); 
    
    float f = 1.8 * c + 32;
    
    printf("%f Celcuis is exactly %f degrees Farenheight!\n", c, f);
}
