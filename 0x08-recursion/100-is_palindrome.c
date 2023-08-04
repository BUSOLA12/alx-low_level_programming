#include "main.h"
int is_palindrome_recursive(char *s, int start, int end);
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if ( len == 1 || len  == 0)
{
return (1);
}
return ( is_palindrome_recursive(s, 0, len - 1));
}
/**
 * is_palindrome_recursive - checks the characters recursively for palindrome
 * @s: string to check
 * @start: beginning of string
 * @end: end of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] == s[end])
{
return (is_palindrome_recursive( s, start + 1, end - 1));
}
return (0);
}

