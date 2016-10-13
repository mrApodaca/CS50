#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    
    printf("what is the mass:");
    int m = GetInt();
    printf("what is the velocity:");
    int v = GetInt();
    int a = 0.5*m*v*v;
    printf("the ansewr to your kenetic energy is: %i\n", a); 
    
    /*printf("what is the kilograms:");
    int k = GetInt();
    printf("what is the meters per second:");
    int ms = GetInt();
    int L = 0.5*k*ms*ms;
    printf("the ansewr to your joules is: %i\n", L); */
    
}
