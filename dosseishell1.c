#include <stdint.h>
#include "main.h"
/**
 * wazefa_11 - func1
 * Description: the frist function
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * Return: rakam ma
 */

int wazefa_11(char **mod5_1, pid_t mod5_2, char **mod5_3, int *mod5_4)
{
int mot8yer, v_m2;
char *mot8_2 = NULL;
char *mot8_3 = mod5_3[0];

v_m2 = 1;
mot8_2 = wazefa_13(mod5_1, mot8_3);
if (mot8_2 == NULL)
{ wazefa_44(1, mod5_3);
return (127); }
mod5_2 = fork();
if (mod5_2 == 0)
{
while (v_m2)
{ signal(SIGINT, wazefa_21);
if (execve(mot8_2, mod5_3, NULL) == -1)
{ free(mot8_2);
perror("./hsh");
return (-1); } }
free(mot8_2); }
else if (mod5_2 < 0)
{perror("./hsh");
exit(1); }
else
{ wait(&mot8yer);
if (WIFEXITED(mot8yer))
*mod5_4 = WEXITSTATUS(mot8yer);
free(mot8_2); }
return (0); }
