#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <pthread.h>
#include "run.h"

int create_new_process(char *program)
{
    return 0;
}

int run(char *command)
{
    pid_t status;
    pid_t wait_result;
    int stat_loc;

    char *args[] = {command, NULL};

    status = fork();
    if (status == 0)
    {
        printf("\nrunning: '%s'\n", command);
        printf("[%d]\n", status);
        execvp(command, args);
        // fprintf(stderr, "Deu erro aqui bro\n");
        // abort();
    }
    else
    {
        wait_result = waitpid(status, &stat_loc, WUNTRACED);
        return status;
    }
}