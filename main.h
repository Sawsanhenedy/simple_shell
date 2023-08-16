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
int wazefa_1( char **mod5_1, pid_t mod5_2, char **mod5_3
		, int mod5_4); // exec_fullcmd 
int wazefa_2(char **mod5_1, char *mod5_2, int mod5_3
		, char ***mod5_4,char **mod5_5); // shellbultin 
char *wazwfa_3(char **mod5_1, char *mod5_2); // *_getenv
// 2 
void wazefa_1(int mod5_1); // ctrlc_handler 
void wazefa_2(char *mod5_1); //err_notfoundvoid wazefa_3(char **mod5_1, char ***mod5_2, char **mod5_3); //_handleenv
int wazefa_4(char **mod5_1, pid_t mod5_2, int *mzod5_3); // exec_cmd
void wazefa_5(char **mod5_1); // _printenv
// 3
int wazefa_1(char **mod5_1); // isvalidenvcmd
int wazefa_2(int mod5_1, int mod5_2, char **mod5_3); // exec_returnhandler 
void wazefa_3(int mod5_1, char **mod5_2, char *mod5_3,
		char **mod5_4, char *mod5_5); // exitshell
void wazefa_4(char *mod5_1, char *mod5_2, int mod5_3,
		char ***mod5_4, char **mod5_5); // _addenv
/* funktionen von Mosa3ed */
char *_sc(char *d, char *r);
int _putchar(char a);
int _sl(char *a);
char *_sd(char *a);
int _sncm(char *a1, char *a2, int m);
int str_drk(char *b);
int _atoi(char *a);
#endif
