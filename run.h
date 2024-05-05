/***************************************************
 *
 * Sistemas Operacionais II - Noturno - 2024
 * Professor Altamir Gomes
 *
 * Interpretador de Comandos
 * Cristian Santos de Castro
 *
 ***************************************************/
#ifndef RUN_H
#define RUN_H

// Cria um novo processo para executar o comando passado.
int run(char **command);

// Implementação do comando cd utilizando chdir.
int cd(char **command);

#endif
