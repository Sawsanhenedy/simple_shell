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
char *c = NULL, *ne = NULL;
int cs = 0, er, tr, e = 0;
char **a = NULL, **nev = NULL;
const char *d = " \t\f\r\n";
size_t s = 50;
ssize_t g_s;
v_m2 = 1;
while (v_m2)
{
wazefa_41();
signal(SIGINT, wazefa_21);
g_s = wazefa_42(&c, &s);
if (g_s == 1)
continue;
else if (g_s == -1)
exit(0);
a = wazefa_43(c, d, &e);
if ((wazefa_12(a, c, cs, &nev, &ne)) == 0)
continue;
else if (access(a[0], F_OK) != 0)
{
er = wazefa_11(v, p, a, &cs);
tr = wazefa_32(er, e, a);
if (tr == 127)
break;
else if (tr == -1)
continue;
}
else if ((access(a[0], F_OK) != 0))
{
if ((wazefa_24(a, p, &cs)) == -1)
continue;
}
wazefa_44(e, a);
}
free(c);
return (tr == 127 ? 127 : 0);
}
