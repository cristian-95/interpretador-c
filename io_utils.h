#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

#ifndef IO_UTILS_H
#define IO_UTILS_H

#define RESET "\e[0m"
#define RED "\033[0;31m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define REGULAR "\033[0m"

// Exibe o prompt para o usuário usando stdout,
// e recebe o comando no stdin.
void prompt(char *buffer);

void print_error(char *message);

int run(char *command);
#endif