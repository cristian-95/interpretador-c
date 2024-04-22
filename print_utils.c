#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "print_utils.h"

void prompt(char *buffer)
{
    fprintf(stdout, "\e[1m\033[36mmyShell\033[0m");
    fprintf(stdout, "$ \e[m");
    fgets(buffer, 255, stdin);
}

void showInfo()
{
    fprintf(stderr, "MyShell 0.2.0\n\n");
}