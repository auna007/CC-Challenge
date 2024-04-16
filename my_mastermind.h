#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

char* random_generator();
int my_strlen(char* string);
int isNumber(char* s);
int my_strcmp(char *a,char *b);
int my_isAlpha(char ch);
char* ret_secret_code(int argc, char* string[]);
int ret_attempt_limit(int argc, char* string[]);
int game_start(int attempt_limit, char* secret_code);
