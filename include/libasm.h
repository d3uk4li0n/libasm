#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef ASM_H
#define ASM_H

int my_strlen(char *);
int my_read(int, char *, int);
int my_write(int, char *, int);
int my_strcmp(char *, char *);
char *my_strchr(char *, int);
void *my_memset(char *, int, int);
void *my_memcpy(char *, char *, int);
int my_strncmp(char *, char *, int);
int my_strcasecmp(char *, char *);
char *my_index(char *s, int c);
char* my_memmove(char*, char*, int);

#endif

#ifndef TEST_H
#define TEST_H

void my_test(void);
void test_my_strlen(char *);
void test_my_strchr(char *, char);
void test_my_memset();
void test_my_read();
void test_my_write();
void test_my_memcpy();
void test_my_strcmp();
void test_my_strncmp();
void test_my_strcasecmp();
void test_my_index();
void test_my_memmove();

#endif