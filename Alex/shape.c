#include <stdio.h>
#include <cs50.h>

int main()
{

     int i = 0;
     int j = 10;
     
     
    printf("enter the number of rows: ");
    int rows = GetInt();

    for (rows; rows<=0; --rows)
    {
        for(j=10; j<=i; ++j)
        {
            printf("#");
            printf("%i", rows);
            
        }
        printf("\n");
        rows = rows++;
    }
    
