/***************************************************
 *
 * Sistemas Operacionais II - Noturno - 2024
 * Professor Altamir Gomes
 *
 * Interpretador de Comandos
 * Cristian Santos de Castro
 *
 ***************************************************/
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include "run.h"
#include "io_utils.h"

/*
    Cria um novo processo com fork e exec para executar o comando passado.
*/
int run(char **args)
{
    pid_t child_pid; 
    pid_t wait_result;
    int stat_loc;

    child_pid = fork();     // Cria um novo processo.

    if (child_pid == 0)
    {
        if (execvp(args[0], args) < 0)  // Executa o comando passado pelo usuario.
        {
            print_error("Comando não encontrado.");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait_result = waitpid(child_pid, &stat_loc, WUNTRACED);
        return child_pid;
    }
    return 0;
}

/*
    Implementação do comando cd utilizando chdir
*/
int cd(char **args)
{
    int result = chdir(args[1]);
    if (result == -1)
        print_error("Diretório não encontrado.");

    return result;
}