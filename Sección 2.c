#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void contar(int id) {
    printf("Proceso hijo %d (PID: %d): contando hasta 1000...\n", id, getpid());
    for (int i = 1; i <= 1000; i++) {
        if (i % 200 == 0) {
            printf("Proceso %d (PID: %d) ha contado hasta %d\n", id, getpid(), i);
        }
    }
    printf("Proceso hijo %d (PID: %d) ha terminado de contar.\n", id, getpid());
}

int main() {
    pid_t pid1, pid2, pid3;

    // Obtener el PID del proceso padre
    pid_t padre_pid = getpid();
    printf("Proceso padre (PID: %d) creando procesos hijos...\n", padre_pid);

    // Crear primer hijo
    pid1 = fork();
    if (pid1 == 0) {
        contar(1);
        exit(0);
    } else if (pid1 > 0) {
        printf("Proceso hijo 1 creado con PID: %d\n", pid1);
    }

    // Crear segundo hijo
    pid2 = fork();
    if (pid2 == 0) {
        contar(2);
        exit(0);
    } else if (pid2 > 0) {
        printf("Proceso hijo 2 creado con PID: %d\n", pid2);
    }

    // Crear tercer hijo
    pid3 = fork();
    if (pid3 == 0) {
        contar(3);
        exit(0);
    } else if (pid3 > 0) {
        printf("Proceso hijo 3 creado con PID: %d\n", pid3);
    }

    // Código del proceso padre
    printf("Proceso padre (PID: %d) esperando a que los hijos terminen...\n", padre_pid);

    // Esperar a que terminen los procesos hijos
    wait(NULL);
    wait(NULL);
    wait(NULL);
    
    printf("Todos los procesos hijos han terminado.\n");

    // Mostrar el árbol de procesos
    printf("Mostrando el árbol de procesos con ps -ejH:\n");
    system("ps -ejH");

    return 0;
}

