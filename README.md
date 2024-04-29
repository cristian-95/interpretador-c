# Interpretador de comandos

## Tarefas:

- Implemente um processador de comandos com as seguintes características:

- [X] 1. Exibe um prompt e aguarda entrada do usuário

- [X] 2. O comando exit deve sair do processador de comandos
   
- [x] 3. Quando a entrada é o nome de um programa no path ou o caminho de um programa, o mesmo deve ser executado

- [ ] 4. Quando a entrada não é um programa no path ou caminho válido, deve ser mostrada uma mensagem de erro adequada

- [ ] 5. Os argumentos digitados na linha de comando devem ser passados ao
programa chamado

## Requisitos essenciais:

- [X] Após execução de um programa ou comando (exceto exit), a shell deve mostrar o prompt novamente e aguardar nova entrada

- [ ] Cuide para que a shell não deixe processos filhos bloqueados indefinidamente ou zumbis

- [X] A chamada system não deve ser usada, pois depende de uma shell e não queremos construir uma shell que dependa de outra

### Algumas funções que poderão ser úteis:

- fork
- execvp,
- wait
- sigaction
- getcwd
- getenv
- gethostname
- strlen
- strtok 
- strncmp
- chdir
- fgets
- strerror
- exit