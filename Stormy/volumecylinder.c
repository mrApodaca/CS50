#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)

{
    printf("What is the radius of the circle?: \n");
       
    printf("What is the hieght of the Cylinder?: \n");
     int r = GetInt();
     int h = GetInt();
         int ac = 3.14 * r *r ;
         int vcy = ac * h;
            
    printf("The Volume of the cylinder is about %i" , vcy);
}
