#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("How can i get the number of mass?");
    int mass = GetInt();
    
     printf("How can i get the number of velocity?");
    int velocity = GetInt();
    
    printf("How can i get the number of kinetic energy?");
    int ke = 0.5 * mass * velocity * velocity;
    
    printf("Sum = %i", ke);
}
