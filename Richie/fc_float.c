#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("What degree Farenheight do you want to covert to Celcius?\n");
    float f = get_float(); 
    
    float c = 5.0/9.0 *(f - 32);
    
    printf("%f Farenheight is exactly %f degrees Celcius!\n", f, c);
}
