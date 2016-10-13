#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("what is the radious of your circle:");
    int r = GetInt();
    printf("what is the hieght");
    int h = GetInt();
    int a = (3.14*r*r)*h;
    printf("your area is about: %i\n", a);
    
}
