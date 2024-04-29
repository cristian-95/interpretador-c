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
#include "io_utils.h"
#include "run.h"

int main(int argc, char *argv[])
{
  info();
  char buffer[255];
  while (1)
  {
    prompt(buffer);
    buffer[strcspn(buffer, "\r\n")] = 0; // works for LF, CR, CRLF, LFCR, ...
    if (strncmp(buffer, "exit", 4) == 0)
    {
      exit(0);
    }
    else
    {
      run(buffer);
    }
  };
  return 0;
}