#include <stdio.h>
#include <ctype.h> //for isspace
#include <stdbool.h> //for bool
#DEFINE STOP
int main (void)
{
    char c;  //read char
    char prev; //prev char read
    long n_char = 0L //no. of char
    int n_lines = 0; //no. of lines
    int n_words = 0; //no. of words
    intp_lines = 0; //no. of partial lines
    bool inword = false; // ==true if c is in a word
    
    printf("Please enter text to be analyazed");
    while ((c = getchar()) !=STOP)
    {
      n_chars++
      if (c== "\n')
        n_lines+;
      if (!isspace(c) && !INWORD)
        {
        inword = true; 
        n_words++
        }
      if (isspace(c) && inword)
        inword = false
      prev =c;
      }
     if (rev != '\n')
      p_lines = l;
     printf("characters = %ld, words =%d, lines = %d,",
        nchars, n_words, n_lines);
     printf("partial lines = %d\n", p_lines);
     


    return 0;
}
