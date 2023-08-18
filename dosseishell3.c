#include "main.h"
#include <stdint.h>

/**
 * wazefa_31 - function31
 * Description: the frist function
 * @mod5_1: vp1
 * Return: raqm
 */

int wazefa_31(char **mod5_1)
{
	int h = 0;

	while (mod5_1[h] != NULL)
		h++;

	if (h < 2 || (_wzf_smp(mod5_1[0], "setenv") == 0 && h < 3))
	{
		wzf_dlt(mod5_1, NULL);
		return (0);
	}
	return (1);
}
/**
 * wazefa_32 - func2
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * Return: rqum
 */
int wazefa_32(int mod5_1, int mod5_2, char **mod5_3)
{
	if (mod5_1 == 127)
	{
		return (127);
	}
	else if (mod5_1 == -1)
	{
		wazefa_44(mod5_2, mod5_3);
		return (-1);
	}
	return (0);
}

/**
 * wazefa_33 - func3
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * @mod5_5: vp5
 */
void wazefa_33(int mod5_1, char **mod5_2, char *mod5_3,
		char **mod5_4, char *mod5_5)
{
	int hs;
	uintptr_t t;

	if (mod5_2[1])
	{
		hs = _atoi(mod5_2[1]);
		if (hs < 0)
		{
			perror("./hsh");
			exit(2);
		}
		else if (hs > 0)
		{
			wzf_dlt(mod5_2, mod5_3);
			if (mod5_4 != NULL)
				free(mod5_4);
			if (mod5_5 != NULL)
				free(mod5_5);
			exit(hs);
		}
		mod5_1 = (uintptr_t)mod5_2[0];
		exit(mod5_1);
	}
	wzf_dlt(mod5_2, mod5_3);
	if (mod5_4 != NULL)
		free(mod5_4);
	if (mod5_5 != NULL)
		free(mod5_5);
	exit(mod5_1);
}

/**
 * wazefa_34 - func4
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * @mod5_5: vp5
 */
void wazefa_34(char *mod5_1, char *mod5_2, int mod5_3,
		char ***mod5_4, char **mod5_5)
{
	int na, h;

	*mod5_4 = malloc((mod5_3 + 2) * sizeof(char *));
	if (*mod5_4 == NULL)
	{
		perror("Malloc");
		return;
	}
	na = _sl(mod5_2) + _sl(mod5_2) + 2;
	*mod5_5 = malloc(na);

	if (*mod5_5 == NULL)
	{
		perror("Malloc");
		free(*mod5_4);
		return;
	}
	_scy(*mod5_5, mod5_1);
	_wzf_sc(*mod5_5, "=");
	_wzf_sc(*mod5_5, mod5_1);
	for (h = 0; vm1[h] != NULL; h++)
		(*mod5_4)[h] = vm1[h];
	(*mod5_4)[h] = *mod5_5;
	(*mod5_4)[++h] = NULL;
	vm1 = *mod5_4;
}
