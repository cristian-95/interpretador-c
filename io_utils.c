#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"

void prompt(char *buffer)
{
    fprintf(stdout, CYAN BOLD "\e[1m\033[36mmyShell\033[0m" REGULAR RESET);
    fprintf(stdout, "$ \e[m");
    fgets(buffer, 255, stdin);
}

void print_error(char *message)
{
    fprintf(stderr, RED BOLD "ERRO: " REGULAR RED "%s\n" RESET, message);
}

void info()
{
    fprintf(stderr,
            "           _____ _       _ _ \n"
            " _____ _ _|   __| |_ ___| | |\n"
            "|     | | |__   |   | -_| | |\n"
            "|_|_|_|_  |_____|_|_|___|_|_|\n"
            "      |___|\n"
            "(version 0.6.0) "
            "Digite exit para sair.\n");
}