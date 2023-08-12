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
 * str_drk - druckt einen Buchstabe
 * @b: str
 * Return: nummer des char im str
 */
int str_drk(char *b)
{
int a, s = 0;
if (b != NULL)
{
for (a = 0; b[a] != '\0'; a++)
{
_putchar(b[a]);
}
return (a);
}
else
{
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
s = 6;
return (s);
}
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
/**
 * _sd - str x2
 * @a: str
 * Return: NULL -> Null, pointer -> Succes
 */
char *_sd (char *a)
{
int j = 0, l = 0;
char *ns;
if (a == NULL)
return (NULL);
while (a[j] != '\0')
{
l++;
j++;
}
ns = malloc(sizeof(char) * (l + 1));
for (j = 0; j < a[j]; j++)
ns[j] = a[j];
ns[j] = '\0';
return (ns);
}
