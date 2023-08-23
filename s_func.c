#include "shell.h"
/**
 * _sl - to find the string's length
 * @s: string
 * Return: string's length -> success,
 * 0 -> the length is NULL
 */
int _sl(char *s)
{
int a = 0;
if (s == NULL)
return (-1);
while (s[a] != '\0')
a++;
return (a);
}
/**
 * _scmp - comparing between 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 -> No difference,
 * 1 -> s1 is bigger,
 * 2 -> s2 is bigger
 */
int _scmp(char *s1, char *s2)
{
int a = 0;
while ((s1[a] != '\0') && (s2[a] != '\0'))
{
if (s1[a] > s2[a])
return (1);
else if (s1[a] < s2[a])
return (-1);
else
a++;
}
if ((s1[a] == '\0') && (s2[a] == '\0'))
return (0);
else if (s1[a] == '\0')
return (-1);
else
return (1);
}
/**
 * *scat - a function that concatnates 2 strings
 * @sd: string destination
 * @sc: string src
 * Return: string -> Success, 0 -> Error
 */
char *scat(char *sd, char *sc)
{
char *a;
int dl, sl;
int n = 0;
int m = 0;
if ((sd == NULL) || (sc == NULL))
return (NULL);
dl = _sl(sd);
sl = _sl(sc);
if ((dl < 0) || (sl < 0))
return (NULL);
a = malloc((sl + dl + 1) * sizeof(char));
if (a == NULL)
{
free(a);
return (NULL);
}
for (n = 0; n < (sl + dl); n++)
{
if (n < dl)
{
a[n] = sd[n];
}
else
{
if (m < sl)
{
a[n] = sc[m]; /* not sure a[n] or [m] */
m++;
}
}
}
a[n] = '\0';
return (a);
}
/**
 * _sncmp - to compare the int with 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @a: characters' number
 * Return: 0 -> No difference,
 * 1 -> s1 is bigger,
 * 2 -> s2 is bigger
 */
int _sncmp(char *s1, char *s2, int a)
{
int n = 0;
while ((s1[n] != '\0') && (s2[n] != '\0') && (n < a))
{
if (s1[n] > s2[n])
return (1);
else if (s1[n] < s2[n])
return (-1);
else
n++;
}
if (n == a)
return (0);
if ((s1[n] == '\0') && (s2[n] == '\0'))
return (0);
else if (s1[n] == '\0')
return (-1);
else
return (1);
}
/**
 * *_scpy - function copies the src string
 * to dest.
 * @d: destenation
 * @c: src
 * Return: string -> success, NULL -> Error
 */
char *_scpy(char *d, char *c)
{
char *a;
int s;
if ((d == NULL) || (c == NULL))
return (NULL);
s = _sl(c);
d = realloc(d, (s + 1));
a = d;
while (*c != '\0')
{
*a = *c;
a++;
c++;
}
*d = '\0';
return (d);
}
