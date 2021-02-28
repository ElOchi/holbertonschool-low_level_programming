#include "holberton.h"

/**
 *rev_string - reverse strings
 *
 *@s: pointer
 *
 */
void rev_string(char *s)
{
    int i;
    int len;
    
    for (len = 0; s[len] != '\0'; len++);
        
    for (i = 0; i < len/2; i++)
    {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
}

void rev_string(char *s)
{
	int len = 0, end = 0;
	char ch;

	while (s[end++])
		len++;

	for (end = len - 1; end >= len / 2; end--)
	{
		ch = s[end];
		s[end] = s[len - end - 1];
		s[len - end - 1] = ch;
	}
}



void rev_string(char *s)
{
	int index;
	int temp = 0;
	char swap;
	int num =0;

	while(s[temp] != '\0')
	{
		temp++;
	}
	for (index = (temp -1); index >= (temp /2); index--)
	{
		swap = s[num];
		s[num] = s[index];
		s[index] = swap;
		num++;
	}
}

#include <stdio.h>
void rev_string(char *s)
{
	char *end = s;
	char store;

	while (*end)
		end++; /* set pos of end pointer to point to last element */
	end = end - 1; /* set end pos to end -1 b/c end is really '\0' */
	while (s < end) /* stop once we get to last address */
	{
		store = *s; /* set store ch to s[currentPos] */
		*s++ = *end; /* set position of s = pos end, and increment s */
		*end-- = store; /* set pos of end to stored char and increment */
	}
}

