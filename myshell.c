/***************************************************
 *
 * Sistemas Operacionais II - Noturno - 2024
 * Professor Altamir Gomes
 * Interpretador de Comandos
 * Cristian Santos de Castro
 *
 ***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "print_utils.h"

int main(int argc, char *argv[])
{
  showInfo();
  char buffer[255];
  
  while (1)
  {
    promptOut("");
    fgets(buffer, 255, stdin);
    promptOut(buffer);
  };

  return 0;
}
