#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("What's the mass in kilograms?");
    int mass = GetInt();

    printf("What's the velocity in meters per second?");
    int velocity = GetInt();
    
      int ke = 0.5 * mass * (velocity * velocity);
    printf("Your Kinetic Energy is: %i" , ke);
   
}
    
    
