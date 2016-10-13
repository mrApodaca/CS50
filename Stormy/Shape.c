#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
int main(void)
{
    int i;
    int r;
    int h;
    
        
    i = 5;
    
   
    for (r = 1 ; r <= i; r+= 1)
    {
        for (h = 1; h <= r + 2 ; h += 1)
        {       
            printf("##"); 
            
        }
 
        printf("\n");
    }
}
