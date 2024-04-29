#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

#ifndef IO_UTILS_H
#define IO_UTILS_H

// Exibe o prompt para o usuário usando stdout,
// e recebe o comando no stdin.
void prompt(char *buffer);

int run(char *command);
#endif