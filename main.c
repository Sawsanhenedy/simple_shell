#include "shell.h"
/**
 * main - the main thing needed to execute my shell
 * @ac: arguments array
 * @av: arguments
 * @e: ev
 * Return: Always 0 -> success
 */
int main(__attribute__((unused))int ac,
__attribute__((unused)) char *av[], char *e[])
{
char *n = NULL, *p, **as;
char **e_cp = NULL;
size_t g;
int d;
static int e_n;
e_n = 1;
e_cp = e;
p = path_env(e_cp);
if (!isatty(STDIN_FILENO))
{
while ((d = getline(&n, &g, stdin)) != -1)
{
if (leer_ent(n) == 1)
continue;
as = cml(n);
if ((as == NULL) || (p == NULL))
{
free(as);
return (1); }
x_c(p, as, e, av, &e_n); }}
else
{
while (1)
{
sdru("$  ");
d = getline(&n, &g, stdin);
if (d == -1)
esc(0);
if (leer_ent(n) == 1)
continue;
as = cml(n);
if ((as == NULL) || (p == NULL))
{
free(as);
return (1); }
x_c(p, as, e, av, &e_n); }}
free(n);
return (0); }
