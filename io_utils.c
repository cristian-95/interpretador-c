/***************************************************
 *
 * Sistemas Operacionais II - Noturno - 2024
 * Professor Altamir Gomes
 *
 * Interpretador de Comandos
 * Cristian Santos de Castro
 *
 ***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"

/*
    Exibe informações sobre o programa.
*/

void info()
{
    fprintf(stderr,
            "           _____ _       _ _ \n"
            " _____ _ _|   __| |_ ___| | |\n"
            "|     | | |__   |   | -_| | |\n"
            "|_|_|_|_  |_____|_|_|___|_|_|\n"
            "      |___|\n"
            "v0.6.0\n"
            "Digite exit para sair.\n\n");
}

/*
    Exibe o prompt para o usuário usando stdout e recebe o comando no stdin.
    Não retorna valor algum pois altera parametro por referência.
*/
void prompt(char *username, char *buffer)
{
    fprintf(
        stdout,
        BLUE_BOLD "myShell@" RESET
            GREEN_BOLD "%s" RESET
                  "$ ",
        username);
    fgets(buffer, 255, stdin);
}

/*
    Exibe mensagem de erro ao usuário.
*/
void print_error(char *message)
{
    fprintf(stderr, RED_BOLD "ERRO: " WHITE_BOLD "%s\n" RESET, message);
}

/*
    Divide uma string de comando em um array de tokens.
*/
char **get_args(char *command)
{
    char **args = (char **)malloc(sizeof(char *) * 10); // Máximo de 10 argumentos
    char *ptr;
    ptr = strtok(command, " ");
    int i = 0;
    while (ptr)
    {
        args[i] = ptr;
        ptr = strtok(NULL, " ");
        i++;
    }
    args[i] = NULL;
    return args;
}