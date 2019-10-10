#include "holberton.h"

/**
 *_strlen_recursion - calculate the lenght of a recursion
 *@s: string given by user
 *
 *Return: lenght of recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}
/**
 *palindroma - calc if a word is palindroma
 *@s: string one;
 *@size: size of word;
 *
 *Return: 1 if the word is palindrome, 0 if not
 */
int palindroma(char *s, int size)
{
	if (*s == s[size] && size > 1)
		return (palindroma((s + 1), (size - 2)));
	else if (*s == s[size] && (size == 0 || size == 1))
		return (1);
	else
		return (0);
}
/**
 *is_palindrome - check if a string if palindrome
 *@s: char given by user
 *
 *Return: 1 if the word is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int size;

	size = _strlen_recursion(s);
	return (palindroma(s, size - 1));
}
