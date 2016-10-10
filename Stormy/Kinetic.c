#include <stdio.h>
#include <string.h>
#include <cs50.h> 


int main(void)
{
         printf ("What is the Mass in Kg?:\n");
         printf ( "What is the Velocity in M/sS?:\n");
          int m = GetInt();
          int v = GetInt();
           
              
           int kinetic = 0.5 * m * v * v;
               
           
         printf(" The kinetic energy is %i Joule \n " , kinetic);
}
