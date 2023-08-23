#ifndef SHELL_H
#define SHELL_H
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdint.h>
#include<limits.h>
#include<sys/wait.h>
#include<errno.h>
#include<dirent.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
/** Buffers **/
#define R_BUFF_SZ 1024
#define WR_BUFF_SZ 1024
#define BUFF_F -1
/** main.c **/
#define G_L 0
#define S_T 0
/* chain */
#define C_N 0
#define C_O 1
#define C_A 2
#define C_C 3
#define H_F ".shell_hist"
#define H_M 4096
/** s_func.c **/
int _sl(char *s);
int _scmp(char *s1, char *s2);
int _sncmp(char *s1, char *s2, int a);
char *_scpy(char *d, char *c);
char *_sncpy(char *d, char *c, int a);
char *scat(char *sd, char *sc);
/** s_func1.c */
char *_sd(char *s);
char *dnt_need(char *s);
void ndru(int n);
int _ge(char **e);
int sdru(char *s);
/** put & putchar */
void _ep(char *);
int _epch(char);
void _puts(char *);
int _putchar(char *);
/** s_func3.c **/
char *_snc(char *a, char s);
char *s_with(const char *, const char *);
/** main.c **/
int dnt_exi(char *sh, int e_n, char *c);
void x_c(char *p, char **ac, char **e, char **av, int *e_n);
/** excute command */
void esc(int es);
int exe_c(char *f_p, char **ar, char *e[]);
/*excute Exec command */
/** shell_func.c **/
char **cml(char *c);
int leer(char *c);
int leer_ent(char *c);
char *ex(char *p, char *f);
char *path_env(char *e[]);
#endif /** SHELL_H **/

