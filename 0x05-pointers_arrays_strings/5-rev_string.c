#include "holberton.h"

/**
 *rev_string - reverse strings
 *
 *@s: pointer
 *
 */
void rev_string(char *s)
{
	char ch;
	int begin, end;

   for (s = 0; s[begin]; s++);
   for (end = 0; end < (s / 2); end++)
   {
	   ch = s[begin];
	   s[end] = s[begin - 1 - end];
	  s[begin -1 - end] = ch;
   }

}
