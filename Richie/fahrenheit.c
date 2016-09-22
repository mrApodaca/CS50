#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("convert Celcius degrees to fahrenheit how many dagrees celcius do you want to convert?:");
    int c = GetInt();
    int f = 1.8*c+32;
    printf("The answer to your problem is equal to %i\n",f);
}
