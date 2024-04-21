#include <stdio.h>
#include <string.h>
#include "print_utils.h"

void promptOut(char *text)
{
    if (strlen(text) == 0)
    {
        fprintf(stdout, "\033[32mmyShell");
        fprintf(stdout, "\033[0m(em obras)🚧 "); // Lembrar de trocar simbolo
    }
    else
    {        
        fprintf(stdout, "\n\033[0m%s", text);
    }
}

void showInfo()
{
    fprintf(stderr, "MyShell 0.0.0\n");
}