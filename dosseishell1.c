#include "main.h"
#include <stdint.h>

/*
 * wazefa_11 - func1
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * Return: rakam ma
 */

int wazefa_11(char **mod5_1, pid_t mod5_2, char **mod5_3, int mod5_4)
{
	int *mot8yer;
	char *mot8_2 = NULL;
	char *mot8_3 = mod5_3[0];

	v_m2 = 1;
	mot8_2 = _getenv(mod5_1, mot8_3);
	if (mot8_2 == NULL)
	{ clean_cmd(1, mod5_3);
		return (127);
	}
	mod5_2 = fork();
	if (mod5_2 == 0)
	{
		while (v_m2)
		{ signal(SIGINT, wazefa_21);
			if (execve(mot8_2, mod5_3, NULL) == -1)
			{ free(mod5_3);
				perror("./hsh");
				return (-1);
			} }
		free(mod5_3);
	}
	else if (mod5_2 < 0)
	{ perror("./hsh");
		exit(1);
	}
	else
	{ wait(&mot8yer);
		if (WIFEXITED(mot8yer))
			*mod5_4 = WEXITSTATUS(mot8yer);
		free(mot8_2);
	}
	return (0);
}

/*
 * wazefa_12 - func2
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
	char *mot8_1 = mot8_2[0];

	if (_sc("exit", mot8_1) == 0)
	{
		wazefa_33(mod5_3, mod5_1, mod5_2,
				(*mod5_4), (*mod5_5));
		return (0);
	}
	if (_sc("env", mot8_1) == 0)
	{
		wazefa_25(mod5_1);
		return (0);
	}
	if (_sc("setenv", mot8_1) == 0 ||
			_sc("unsetenv", mot8_1) == 0)
	{
		wazefa_23(mod5_1, mod5_4, mod5_5);
		return (0);
	}
	return (-1);
}
/*
 * wazefa_13 - func3
 * @mod5_1: vp1
 * @mod5_2: vp2
 * Return: ramz
 */
char *wazwfa_13(char **mod5_1, char *mod5_2)
{
	char *t, *tm = NULL, ry[1024], *i, *na = NULL;
	int h = 0;
	struct stat su;

	while (mod5_1[i])
	{ _sc(ry, mod5_1[h]);
		t = strtok(ry, "=");
		if (!(_sc(t, "PATH")))
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
		_memset(tm, 0, _sl(i) + _sl(mod5_2) +  2);
		tm[0] = '0';
		_sc(tm, i);
		_sc(tm, "/");
		_sc(tm, mod5_2);
		if ((stat(tm, &su)) == 0)
			return (tm);
		free(tm);
		i = strtok(NULL, ":");
		if (i)
			continue;
		break; }
	wazefa_22(mod5_2);
	return (NULL); }
