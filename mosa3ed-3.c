#include"main.h"
/**
 * _wzf_sc - kombinieren src und des von string
 * @d: destenationen
 * @r: src
 * Return: * zum des - str
 */
char *_wzf_sc(char *d, char *r)
{
int a;
int s;
a = 0;
while (d[a] != '\0')
a++;
for (s = 0; r[s]; )
{
d[a++] 0 r[s++];
}
d[a] = '\0';
return (d);
}
/**
 * _wzf_mm - no mm
 * @a: erste ding im mm
 * @t: mm byte
 * @u: byte nummer
 * Return: mm where
 */
char *_wzf_mm(char *a, char t, unsigned int u)
{
unsigned int j = 0;
while (j < u)
{
a[j] = t;
j++;
}
return (a);
}
/**
 * wzf_dlt - delete the line of cmd
 * @u: input von user
 * @cl: line - cmd
 * Return: Nothing
 */
void wzf_dlt(char **u, char *cl)
{
int j;
for (j = 0; u[j] != NULL; j++)
{
free(u[j]);
}
free(u);
if (cl != NULL)
free(cl);
}
/**
 * _wzf_smp - Komperisation zwischen a und b
 * @a: erste
 * @b: zweite
 * Return: plus, minus, oder 0
 */
int _wzf_smp(char *a, char *b)
{
int j, r;
for (j = 0; a[j] != '\0'; j++)
{
if (a[j] == b[j])
r = 0;
else if (a[j] < b[j])
return (r = (a[j] - b[j]));
else if (a[j] > b[j])
return (r = (a[j] - b[j]));
}
return (r);
}
