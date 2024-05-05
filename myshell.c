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
#include <string.h>
#include <sys/unistd.h>
#include "io_utils.h"
#include "run.h"

#define STR_LENGTH 255

int main(int argc, char *argv[])
{
  // Declara buffer e caminho até o diretório atual
  char buffer[STR_LENGTH];
  char *path;
  path = (char *)malloc(STR_LENGTH * sizeof(char));

  info();

  while (1)
  {
    path = (char *)getcwd(path, STR_LENGTH); // Atualiza o caminho até o diretório atual
    prompt(path, buffer);                    // Lê entrada do usuario e armazena em buffer
    buffer[strcspn(buffer, "\r\n")] = 0;     // Remove ultimo caractére da entrada

    if (strncmp(buffer, "exit", 4) == 0)
      exit(0);

    char **args = get_args(buffer); // Divide a string digitada em um array de tokens

    if (strncmp(buffer, "cd", 2) == 0)
      cd(args);
    else
      run(args);
  };
  return 0;
}