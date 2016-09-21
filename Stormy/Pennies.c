#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
       
        printf("How many pennies did you start with?:");
        
           int Initial = GetInt();
         int Pennies = (Initial*1<<30);
        printf(" After collecting pennies for 30 days, ");
        printf(" there are %i Pennies", Pennies);
}
