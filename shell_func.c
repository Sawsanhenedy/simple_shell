#include "shell.h"
/**
 * **cml - functions that finds the arg from cml
 * @c: cmnd
 * Return: arg's array -> success, 0 -> Errror
 */
char **cml(char *c)
{
char **ar;
char *t;
int n = 0;
if (c == NULL)
return (NULL);
ar = malloc(30 * sizeof(char *));
if (ar == NULL)
{
free(ar);
return (NULL);
}
t = strtok(c, " ");
while ((t != NULL) && n < 50)
{
if (leer_ent(t) != 1)
{
ar[n] = t;
n++;
}
t = strtok(NULL, " ");
}
ar[n] = NULL;
return (ar);
}
/**
 * *path_env - function that extracts the path from env
 * @e: argument of env
 * Return: 1 -> success, Null -> failure
 */
char *path_env(char *e[])
{
int a, s;
char *p = NULL;
for (a = 0; e[a] != NULL; a++)
{
s = _sncmp(e[a], "PATH=", 5);
if (s == 0)
{
p = e[a] + 5;
break;
}
}
return (p);
}
/**
 * *ex - sees if the cmnd is in the path??
 * @p: path
 * @f: name of the file
 * Return: string's length -> success,
 * 0 -> NULL
 */
char *ex(char *p, char *f)
{
char *t, *fp;
char *pc = NULL;
if ((p == NULL) || (f == NULL))
return (NULL);
if (f[0] == '/')
{
if (access(f, X_OK) == 0)
return (f);
else
return (NULL);
}
pc = _sd(p);
if (pc == NULL)
{
free(pc);
return (NULL);
}
t = strtok(pc, ":");
while (t != NULL)
{
if (t[_sl(t) - 1] != '/')
fp = scat("/", f);
else
fp = f;
t = scat(t, fp);
if (access(t, F_OK) == 0)
{
free(fp);
free(pc);
return (t);
}
t = strtok(NULL, ":");
}
free(t);
free(fp);
free(pc);
return (NULL);
}
/**
 * leer - cmnd is only space
 * @c: cmnd
 * Return: 1 -> space exists,
 * 0 -> no space
 */
int leer(char *c)
{
int a = 0, sp = 0;
for (a = 0; a < _sl(c); a++)
{
if (c[a] == ' ')
sp = 1;
else
{
sp = 0;
break;
}
}
return (sp);
}
/**
 * leer_ent - the cmnd is space or in the 2nd line
 * @c: cmnd
 * Return: 1 -> space exists, 0 -> no space
 */
int leer_ent(char *c)
{
int a = 0, j = 0;
if (c == NULL)
return (-1);
while (c[a] != '\0')
{
if (c[a] == ' ' || c[a] == '\t' || c[a] == '\n' ||
c[a] == '\v' || c[a] == '\f' || c[a] == '\r')
j = 1;
else
{
j = 0;
return (j);
}
a++;
}
return (j);
}
