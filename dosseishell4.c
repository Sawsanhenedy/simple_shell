#include "main.h"
#include <stdint.h>

/**
 * wazefa_41 - func1
 */

void wazefa_41(void)
{
	if (isatty(STDIN_FILENO))
		write(STDIN_FILENO, "$ ", 2);
}

/**
 * wazefa_42 - func2
 * @mod5_1: vp1
 * @mod5_2: vp2
 * Return: s
 */
ssize_t wazefa_42(char **mod5_1, size_t *mod5_2)
{
	ssize_t nfs = getline(mod5_1, mod5_2, stdin);

	if (nfs == -1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		free(*mod5_1);
		return (-1);
	}
	if (_wzf_sn(*mod5_1, " \t\n\f\r") == _sl(*mod5_1))
	{
		return (1);
	}

	return (nfs);
}

/**
 * wazefa_43 - func3
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * Return: qw
 */
char **wazefa_43(char *mod5_1, const char *mod5_2, int *mod5_3)
{
	char *t8_1 = _sd(mod5_1);
	int h, tik;
	char *t8_2 = _sd(mod5_1), *yor, **ner = NULL;

	*mod5_3 = 0;
	yor = strtok(t8_1, mod5_2);
	while (yor)
	{ yor = strtok(NULL, mod5_2);
		(*mod5_3)++;
	}
	ner = malloc(sizeof(char *) * ((*mod5_2) + 1));
	if (!ner)
	{ perror("Memory allocation error");
		free(t8_2);
		return (NULL);
	}
	for (h = 0; h < *mod5_3; h++)
		ner[h] = NULL;
	yor = strtok(t8_2, mod5_2);
	h = 0;
	while (yor)
	{ tik = _sl(yor);
		ner[h] = malloc(sizeof(char) * (tik + 1));
		if (ner[h] == NULL)
		{ perror("Memory allocation error");
			for (h = 0; h < (*mod5_3); h++)
				free(ner[h]);
			exit(1);
		}
		_scy(ner[h], yor);
		yor = strtok(NULL, mod5_2);
		h++;
	}
	ner[*mod5_3] = NULL;
	free(t8_1);
	free(t8_2);
	return (ner);
}
/**
 * wazefa_44 - func4
 * @mod5_1: vp1
 * @mod5_2: vp2
 */

void wazefa_44(int __attribute__((unused)) mod5_1, char **mod5_2)
{
	int dd;

	for (dd = 0; dd < mod5_1 || mod5_2[dd] != NULL; dd++)
		free(mod5_2[dd]);
	free(mod5_2);
}
