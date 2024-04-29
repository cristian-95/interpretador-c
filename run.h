#include <string.h>

#ifndef RUN_H
#define RUN_H

// Cria um novo processo e executa o comando.
int create_new_process(char *program);

// Cria um novo processo para executar o comando passado.
int run(char *command);

#endif


