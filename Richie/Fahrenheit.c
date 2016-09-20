#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("What is your name?:");
  string s = GetString();
  
  printf("hello, %s\n", s);
}
