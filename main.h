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

volatile int v_m2; //ctrlc_clean
extern char **vm1; //**environ

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


/* Funktionen von  */

// 1
int wazefa_11( char **mod5_1, pid_t mod5_2, char **mod5_3
		, int mod5_4); //exec_fullcmd
int wazefa_12(char **mod5_1, char *mod5_2, int mod5_3
		, char ***mod5_4,char **mod5_5); //shellbultin
char *wazwfa_13(char **mod5_1, char *mod5_2); //*_getenv
// 2
void wazefa_21(int mod5_1); //ctrlc_handler
void wazefa_22(char *mod5_1); //err_notfound
void wazefa_23(char **mod5_1, char ***mod5_2, char **mod5_3); //_handleenv
int wazefa_24(char **mod5_1, pid_t mod5_2, int *mod5_3); //exec_cmd
void wazefa_25(char **mod5_1); //_printenv
// 3
int wazefa_31(char **mod5_1); //_isvalidenvcmd
int wazefa_32(int mod5_1, int mod5_2, char **mod5_3); //exec_returnhandler
void wazefa_33(int mod5_1, char **mod5_2, char *mod5_3,
		char **mod5_4, char *mod5_5); //exitshell
void wazefa_34(char *mod5_1, char *mod5_2, int mod5_3,
		char ***mod5_4, char **mod5_5); //_addenv
// 4

/* funktionen von Mosa3ed */
/* 1 */
char *_scy(char *d, char *r); /* _strcpy */
int _putchar(char a); /* _putchar */
int _wzf_sn(const char *g, const char *a); /* _strspn */
int _sl(char *a); /* _strlen */
/* 2 */
int _sncm(char *a1, char *a2, int m); /* _strncmp */
int sr_dr(char *b); /* string_printer */
int _atoi(char *a); /* atoi */
char *_sd(char *a); /* *_strdup */
/* 3 */
char *_wzf_sc(char *d, char *r); /* _strcat */
char *_wzf_mm(char *a, char t, unsigned int u); /* _memset */
void wzf_dlt(char **u, char *cl); /* cleanall */
int _wzf_smp(char *a, char *b); /* _strcmp */
#endif
