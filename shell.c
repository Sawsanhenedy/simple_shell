#include"main.h"
/**
 * main - bildt unserer SHELL
 * @n: Argumenten nummer
 * @r: Argumenten ar
 * @v: env
 * Return: Always Success
 */
int main(int __attribute__((unused)) n,
__attribute__((unused)) char **r,
__attribute__((unused)) char **v)
{
pid_t p = 0;
ssize_t g_s;
char *c = NULL, *ne = NULL;
size_t s = 50;
const char *d = " \t\f\r\n";
int e = 0, cs = 0, er, tr;
char **a = NULL, **nev = NULL;
v_m2 = 1;
while (v_m2)
{
salma();
salma(SIGINT, v_m2);
g_s = Salma(&c, &s);
if (g_s == 1)
continue;
else if (g_s == -1)
exit(0);
a = Salma(c, d, &e);
if ((Salma(a, cs, &nev, &ne)
