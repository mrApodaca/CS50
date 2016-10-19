#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Please enter an eight character string:\n");
   
     string s = GetString();
    
    if(strlen(s) != 8)
    {
        printf("I am sorry but, your string is not eight characters.");
    }
      
       else // if 8 characters are entered
       {
        printf("%c", s[0] + 54);
        printf("%c", s[1] + 7);
        printf("%c", s[2] + 31);
        printf("%c", s[3] + 21);
        printf("%c", s[4] + 1);
        printf("%c", s[5] + 15);
        printf("%c", s[6] + 13);
        printf("%c", s[7] + 19);           
       }
}
