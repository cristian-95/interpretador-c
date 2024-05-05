/***************************************************
 *
 * Sistemas Operacionais II - Noturno - 2024
 * Professor Altamir Gomes
 *
 * Interpretador de Comandos
 * Cristian Santos de Castro
 *
 ***************************************************/
#ifndef IO_UTILS_H
#define IO_UTILS_H

// Cores para output:

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define BLUE "\e[0;34m"
#define GREEN "\e[0;32m"
#define RED_BOLD "\e[1;31m"
#define BLUE_BOLD "\e[1;34m"
#define GREEN_BOLD "\e[1;32m"
#define WHITE_BOLD "\e[1;37m"

// Exibe o prompt para o usuário usando stdout,
// e recebe o comando no stdin.
void prompt(char *hostname, char *buffer);

// Exibe mensagem de erro ao usuário.
void print_error(char *message);

// Exibe informações úteis sobre o programa.
void info();

// Divide uma string de comando em um array de tokens.
char **get_args(char *command);

#endif