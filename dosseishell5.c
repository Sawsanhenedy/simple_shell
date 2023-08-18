#include "main.h"
#include <stdint.h>

/**
 * wazefa_13 - func3 that makes so and so
 * @mod5_1: vp1
 * @mod5_2: vp2
 * Return: ramz that makes so and so
 */

char *wazefa_13(char **mod5_1, char *mod5_2)
{

	char *t, *tm = NULL, ry[1024], *i, *na = NULL;
	int h = 0;
	struct stat su;

while (mod5_1[h])
{ _scy(ry, mod5_1[h]);
t = strtok(ry, "=");
if (!(_wzf_smp(t, "PATH")))
break;
h++; }
na = strtok(NULL, "=");
i = strtok(na, ":");
while (i)
{ tm = malloc(_sl(i) + _sl(mod5_2) + 2);
if (tm == NULL)
{ perror("Memory allocation error");
free(tm);
return (NULL); }
_wzf_mm(tm, 0, _sl(i) + _sl(mod5_2) +  2);
tm[0] = '0';
_scy(tm, i);
_wzf_sc(tm, "/");
_wzf_sc(tm, mod5_2);
if ((stat(tm, &su)) == 0)
return (tm);
free(tm);
i = strtok(NULL, ":");
if (i)
continue;
break; }
wazefa_22(mod5_2);
return (NULL); }

/**
 * wazefa_12 - func2 that makes so and so
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * @mod5_5: vp5
 * Return: rakam ma
 */

int wazefa_12(char **mod5_1, char *mod5_2, int mod5_3,
		char ***mod5_4, char **mod5_5)
{
char *mot8_1 = mod5_1[0];

if (_wzf_smp("exit", mot8_1) == 0)
{ wazefa_33(mod5_3, mod5_1, mod5_2, (*mod5_4), (*mod5_5));
return (0); }
if (_wzf_smp("env", mot8_1) == 0)
{ wazefa_25(mod5_1);
return (0); }
if (_wzf_smp("setenv", mot8_1) == 0 ||
		_wzf_smp("unsetenv", mot8_1) == 0)
{ wazefa_23(mod5_1, mod5_4, mod5_5);
return (0); }
return (-1); }
