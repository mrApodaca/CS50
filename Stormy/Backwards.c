#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    printf("What is your name?:");
    string s= GetString();
    
    for(int i = strlen (s); i >= 0; i+=-1)
    {
        printf("%c", s[i]);
    }
    
    
}
