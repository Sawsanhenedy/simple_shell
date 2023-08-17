#ifndef MAIN_H
#define MAIN_H
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<signal.h>
#include<stddef.h>
#include<stdatomic.h>

_Atomic int v_m2; /* ctrlc_clean */
extern char **vm1; /* **environ */

/* Funktionen von  */

/* 1 */
/**
 * wazefa_11 - func1 that makes so and so
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * Return: rakam ma
 */
int wazefa_11(char **mod5_1, pid_t mod5_2, char **mod5_3,
int mod5_4); /* exec_fullcmd */

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
char ***mod5_4, char **mod5_5); /* shellbultin */

/**
 * wazefa_13 - func3 that makes so and so
 * @mod5_1: vp1
 * @mod5_2: vp2
 * Return: ramz that makes so and so
 */
char *wazefa_13(char **mod5_1, char *mod5_2); /* *_getenv */


/* 2 */
/**
 * wazefa_21 - func1
 * @mod5_1: vp1
 */
void wazefa_21(int mod5_1); /* ctrlc_handler */

/**
 * wazefa_22 - func2
 * @mod5_1: vp1
 */
void wazefa_22(char *mod5_1); /* err_notfound */

/**
 * wazefa_23 - func3
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 */
void wazefa_23(char **mod5_1, char ***mod5_2, char **mod5_3); /* _handleenv */

/**
 * wazefa_24 - func4
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * Return: raqam
 */
int wazefa_24(char **mod5_1, pid_t mod5_2, int *mod5_3); /* exec_cmd */

/**
 *wazefa_25 - func1
 *@mod5_1: vp1
 */
void wazefa_25(char **mod5_1); /* _printenv */

/* 3 */
/**
 * wazefa_31 - function31
 * @mod5_1: vp1
 * Return: raqm
 */
int wazefa_31(char **mod5_1); /* _isvalidenvcmd */

/**
 * wazefa_32 - func2
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * Return: rqum
 */
int wazefa_32(int mod5_1, int mod5_2, char **mod5_3); /* exec_returnhandler */

/**
 * wazefa_33 - func3
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * @mod5_5: vp5
 */
void wazefa_33(int mod5_1, char **mod5_2, char *mod5_3,
char **mod5_4, char *mod5_5); /* exitshell */

/**
 * wazefa_34 - func4
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * @mod5_4: vp4
 * @mod5_5: vp5
 */
void wazefa_34(char *mod5_1, char *mod5_2, int mod5_3,
char ***mod5_4, char **mod5_5); /* _addenv */

/* 4 */
/**
 * wazefa_41 - func1
 */
void wazefa_41(void); /* print_prompt */

/**
 * wazefa_42 - func2
 * @mod5_1: vp1
 * @mod5_2: vp2
 * Return: s
 */
ssize_t wazefa_42(char **mod5_1, size_t *mod5_2); /* read_cmdline */

/**
 * wazefa_43 - func3
 * @mod5_1: vp1
 * @mod5_2: vp2
 * @mod5_3: vp3
 * Return: qw
 */
char **wazefa_43(char *mod5_1, const char *mod5_2,
int *mod5_3); /* **tokenize_cmdline */

/**
 * wazefa_44 - func4
 * @mod5_1: vp1
 * @mod5_2: vp2
 */
void wazefa_44(int __attribute__((unused)) mod5_1,
char **mod5_2); /* clean_cmd */

/* funktionen von Mosa3ed */

/* 1 */
/**
 * _scy - kopiert ein str
 * @r: masdar
 * @d: pointer
 * Return: etwas
 */
char *_scy(char *d, char *r); /* _strcpy */

/**
 * _putchar - schreibt was
 * @a: buchstabe
 * Return: -1 -> Fail, 1 -> Success
 */
int _putchar(char a); /* _putchar */

/**
 * _wzf_sn - zeigt wie lange ist es
 * @g: etwas
 * @a: akzeptiert
 * Return: nummer
 */
int _wzf_sn(const char *g, const char *a); /* _strspn */

/**
 * _sl - shows string's length
 * @a: str
 * Return: nummer, aber nicht null
 */
int _sl(char *a); /* _strlen */

/* 2 */
/**
 * _sncm - vergleichen a1 und a2 mit m
 * @a1: erste str
 * @a2: zweite str
 * @m: nummer
 * Return: die Verschidene Dinge
 */
int _sncm(char *a1, char *a2, int m); /* _strncmp */

/**
 * sr_dr - druckt einen Buchstabe
 * @b: str
 * Return: nummer des char im str
 */

int sr_dr(char *b); /* string_printer */
/**
 * _atoi - wächselt str -> int
 * @a: string
 * Return: nummer
 */

int _atoi(char *a); /* atoi */
/**
 * _sd - str x2
 * @a: str
 * Return: NULL -> Null, pointer -> Succes
 */

char *_sd(char *a); /* *_strdup */

/* 3 */
/**
 * _wzf_sc - kombinieren src und des von string
 * @d: destenationen
 * @r: src
 * Return: * zum des - str
 */
char *_wzf_sc(char *d, char *r); /* _strcat */

/**
 * _wzf_mm - no mm
 * @a: erste ding im mm
 * @t: mm byte
 * @u: byte nummer
 * Return: mm where
 */
char *_wzf_mm(char *a, char t, unsigned int u); /* _memset */

/**
 * wzf_dlt - delete the line of cmd
 * @u: input von user
 * @cl: line - cmd
 * Return: Nothing
 */
void wzf_dlt(char **u, char *cl); /* cleanall */

/**
 * _wzf_smp - Komperisation zwischen a und b
 * @a: erste
 * @b: zweite
 * Return: plus, minus, oder 0
 */
int _wzf_smp(char *a, char *b); /* _strcmp */

/* shell.c */
/**
 * main - bildt unserer SHELL
 * @n: Argumenten nummer
 * @r: Argumenten ar
 * @v: env
 * Return: Always Success
 */
int main(int __attribute__((unused)) n,
__attribute__((unused)) char **r,
__attribute__((unused)) char **v);

/* struct & typedef */
/**
 * struct bultin - struct for bultin cmd
 * @name: name of cmd
 * @handler: handler for the cmd
 */
typedef struct bultin
{
char *name;
void (*handler)(char **, char **);
} bultin;
typedef void (*sighandler_t)(int);

#endif
