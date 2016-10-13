#include <cs50.h>
#include <stdio.h>

int main(void)
{      
    printf("what's your mass?: \n");
    int mass = GetInt();
    
    printf("what's your velosity?");
   
     
       int velosity = GetInt();
     int mass = 1.5 ; mass * velosity * velosity;
       
       printf(" %i velosity", mass); 
       printf(" %i mass", velosity);
}
