#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
    int height;
    int every_row;
    int hash;
 
    
    
    {
        printf("Choose a number between 0 and 23 to start with!:");
        height = GetInt();
    }
    while ((height < 0) || (height > 23));
    
    for (every_row = 1; every_row <= height; every_row++)
    {
        for (hash = 1; hash <= every_row + 1; hash++)
        {   
            printf("#"); 
        }
 
        printf("\n");
    }
}
