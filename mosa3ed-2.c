#include "main.h"
/**
 * _sd - str x2
 * @a: str
 * Return: NULL -> Null, pointer -> Succes
 */
char *_sd(char *a)
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
/**
 * _scm - vergleichen a1 und a2 mit m
 * @a1: erste str
 * @a2: zweite str
 * @m: nummer
 * Return: die Verschidene Dinge
 */
int _scm(char *a1, char *a2, int m)
{
int j = 0, r = 0;
if (a1 == NULL || a2 == NULL || !m)
return (-1);
while (a1[j] != '\0' && a2[j] != '\0' && j < m)
{
if (a1[j] == a2[j])
r++;
j++;
}
return (m - r);
}
/**
 * _atoi - wächselt str -> int
 * @a: string
 * Return: nummer
 */
int _atoi(char *a)
{
int j, r = 0, l = _sl(a);
int s = 1;
for (j = 0; j < l; j++)
{
if (a[j] == '-' && j == 0)
{
s = -1;
continue;
}
r = r * 10 + (a[j] - 48);
}
return (r *s);
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
