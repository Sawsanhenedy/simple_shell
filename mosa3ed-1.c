#include "main.h"
/**
 * _putchar - schreibt was
 * @a: buchstabe
 * Return: -1 -> Fail, 1 -> Success
 */
int _putchar(char a)
{
return (write(1, &a, 1));
}
/**
 * _sc - kopiert ein str
 * @r: masdar
 * @d: pointer
 * Return: etwas
 */
char *_sc(char *d, char *r)
{
int a = 0;
while (r[a])
{
d[a] = r[a];
a++;
}
d[a] = '\0';
return (d);
}
/**
 * _sl - shows string's length
 * @a: str
 * Return: nummer, aber nicht null
 */
int _sl(char *a)
{
int j = 0, l = 0;
while (a[j] != '\0')
{
l++;
j++;
}
return (l);
}
