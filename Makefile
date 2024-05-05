####################################################
# 
#  Sistemas Operacionais II - Noturno - 2024
#  Professor Altamir Gomes
# 
#  Interpretador de Comandos
#  Cristian Santos de Castro
# 
####################################################

CC =gcc
SRCS = myshell.c run.c io_utils.c
TARGET = myShell

all:
	$(CC) $(SRCS) -o $(TARGET)

clean:
	rm $(TARGET)