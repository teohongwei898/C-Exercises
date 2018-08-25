#include <stdio.h>
#include <ctype.h>

int main (void)

{
    
    char ch;

   while ((ch = getchar())!= '\n')
   {

    if (isalpha(ch))  //if a letter
        putchar(ch + 1); //display next letter
    else
        putchar(ch) // display original
    }
    putchar(ch); //display new line
    
    return 0;
}

