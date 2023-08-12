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
volatile int ctrlc_clean;
extern char **environ;

/* funktionen von Mosa3ed */
char *_sc(char *d, char *r);
int _putchar(char a);
int _sl(char *a);
char *_sd(char *a);
int _sncm(char *a1, char *a2, int m);
int str_drk(char *b);
int _atoi(char *a);

/* Funktionen von .... */


#endif
