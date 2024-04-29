#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <pthread.h>
#include "run.h"
#include "io_utils.h"

int create_new_process(char *program)
{
    return 0;
}

int run(char *command)
{
    pid_t child_pid;
    pid_t wait_result;
    int stat_loc;

    char *args[] = {command, NULL};

    child_pid = fork();
    if (child_pid == 0)
    {
        if (execvp(command, args) < 0)
        {
            print_error("comando não encontrado.");
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