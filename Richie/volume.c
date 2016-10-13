#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("What's the radius of the circle in inches?");
    int rad = GetInt();
    
    int pi = 3;
    
    int ac = rad*rad;
    
    printf("What's the height of the cylinder in inches?");
    int h = GetInt();
    
    int vc = ac*h*pi;
    printf("The volume of your cyclinder is:%i", vc);
}
