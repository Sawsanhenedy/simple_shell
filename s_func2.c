#include "shell.h"
/**
 * dnt_exi - No error
 * @sh: shell's name (string)
 * @e_n: string
 * @c: command
 * Return: int
 */
int dnt_exi(char *sh, int e_n, char *c)
{
int emsL, shL, cL;
char ems[] = ": not found\n";
char *e_nP;
if ((sh == NULL) || (c == NULL))
return (-1);
e_nP = malloc(sizeof(int));
if (e_nP == NULL)
{
return (-1);
}
*e_nP = e_n;
emsL = _sl(ems);
shL = _sl(sh);
cL = _sl(c);
write(STDOUT_FILENO, sh, shL);
write(STDOUT_FILENO, ": ", 2);
ndru(e_n);
write(STDOUT_FILENO, ": ", 2);
write(STDOUT_FILENO, c, cL);
write(STDOUT_FILENO, ems, emsL);
e_n++;
free(e_nP);
return (e_n);
}
/**
 * esc - esc shell
 * @es: 0 -> control and D, 1 -> if there is no status
 */
void esc(int es)
{
if (!es)
sdru("\n");
exit(0);
}
/**
 * x_c - function that helps to execute cml
 * @p: path
 * @ac: arguments
 * @e: envp
 * @av: parameter of arguments
 * @e_n: shows the number of error
 * Return: void
 */
void x_c(char *p, char **ac, char **e, char **av, int *e_n)
{
char *ac_s, *esc_s = "exit", *e_s = "env", *f_p;
ac_s = dnt_need(ac[0]);
if (_scmp(ac_s, esc_s) == 0)
{
free(ac);
esc(1);
}
else if (_scmp(ac_s, e_s) == 0)
{
_ge(e);
}
else
{
f_p = ex(p, ac[0]);
if (f_p == NULL)
{
*e_n = dnt_exi(av[0], *e_n, ac[0]);
}
else
{
exe_c(f_p, ac, e);
}
}
free(ac);
}
/**
 * exe_c - function that deals with executed cml
 * @f_p: file's path (executed)
 * @ar: argu.
 * @e: path of env
 * Return: 0 -> success, -1 -> Error
 */
int exe_c(char *f_p, char **ar, char *e[])
{
int s, x, a = 0;
pid_t p;
p = fork();
if (p == -1)
return (1);
else if (p == 0)
{
while (ar[a] != NULL)
{
ar[a] = dnt_need(ar[a]);
a++;
}
x = execve(f_p, ar, e);
if (x == -1)
return (1);
}
else
wait(&s);
return (0);
}
