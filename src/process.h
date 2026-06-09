#ifndef PROCESS_H
#define PROCESS_H

<<<<<<< HEAD
// definicion de los estados posibles por los que pasa un proceso en nuestro simulador
=======
// creacion de structuras siguiendo el ejemplo del pdf
>>>>>>> 5ec3365494d9965cfa22c8f51c907b1d3deedf84
typedef enum {
    READY,
    RUNNING,
    BLOCKED,
    FINISHED
<<<<<<< HEAD
} process_state;
=======
} ProcessState;
>>>>>>> 5ec3365494d9965cfa22c8f51c907b1d3deedf84

// estructura principal que contiene la informacion de un proceso a ser planificado
typedef struct {
    int pid;
    int burst_time;
    int remaining_time;
    int priority;
    int memory_required;
<<<<<<< HEAD
    process_state state;
} process;
=======
    ProcessState state;
} Process;
>>>>>>> 5ec3365494d9965cfa22c8f51c907b1d3deedf84

#endif // PROCESS_H
