#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{    
    printf("what is your A value:");
      int a = GetInt();
    printf("what is your B varible:");
      int b = GetInt();
    printf("what is your C varible:");
      int c = GetInt();
    
    int QF = (-1*b + sqrt(b*b-4*a*c))/(2*a);
    printf("the ansewr to your complex eqation is about negative and postive :%i\n", QF);
}
