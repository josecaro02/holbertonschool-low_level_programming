#include <stdio.h>

void beforeFunc (void) __attribute__ ((constructor));
/**
 *beforeFunc - prints a phrase
 *
 *Return: nothing it,s a void
 */
void beforeFunc (void)
{
    printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
