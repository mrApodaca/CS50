#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("What is the value for a?: \n");
    int a = GetInt();
    
    printf("What is the value for b?: \n");
    int b = GetInt();
    
    printf("What is the value for c?: \n");
    int c = GetInt();
    
      int pq = -b+sqrt(b*b-4*a*c);
      int px = pq/2;
      int nq = -b-sqrt(b*b-4*a*c);
      int nx = nq/2;
    printf("x = %i", px);
    printf("-x = %i", nx);
}
