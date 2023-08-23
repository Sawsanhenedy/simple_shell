#include "shell.h"
/**
 * sdru - function that prints string in stdout
 * @s: string to be printed
 * Return: string -> success, -1 -> failure
 */
int sdru(char *s)
{
int l;
ssize_t r;
if (s == NULL)
return (-1);
l = _sl(s);
r = write(1, s, l);
if (r == -1)
return (-1);
return (r);
}
/**
 * *_sd - function that duplicates the string
 * @s: string to be duplicated
 * Return: string -> success, -1 -> failure
 */
char *_sd(char *s)
{
int l, a;
char *ns = NULL;
l = _sl(s);
ns = malloc(sizeof(char *) * (l + 1));
if (ns == NULL)
return (NULL);
for (a = 0; a <= l; a++)
{
ns[a] = s[a];
}
return (ns);
}
/**
 * _ge - get the env
 * @e: env
 * Return: 1 -> success, -1 -> error
 */
int _ge(char **e)
{
if (e == NULL)
return (-1);
while (*e != NULL)
{
sdru(*e);
sdru("\n");
e++;
}
return (1);
}
/**
 * ndru - function that develops number
 * @n: integer
 * Return: void
 */
void ndru(int n)
{
char s[20];
int g = 0, d, a;
while (n != 0)
{
d = n % 10;
s[g++] = d + '0';
n /= 10;
}
for (a = g - 1; a >= 0; a--)
write(STDOUT_FILENO, &s[a], 1);
}
/**
 * *dnt_need - delete the terminators we don't need
 * @s: string
 * Return: string
 */
char *dnt_need(char *s)
{
int g;
g = _sl(s);
if (s[g - 1] == ' ' || s[g - 1] == '\t' ||
s[g - 1] == '\n' || s[g - 1] == '\v' || s[g - 1] == '\f' ||
s[g - 1] == '\r')
{
s[g - 1] = '\0';
}
return (s);
}
