# Simulador de Sistema Operativo

## Descripción del Sistema

Este proyecto es un **Simulador de Sistema Operativo** 

* **Núcleo y Lógica (C):** Toda la lógica pesada, simulaciones, estructuras de datos (colas, listas doblemente enlazadas, pilas), algoritmos de planificación (FIFO, Round Robin, SJF) y la gestión de la memoria dinámica (asignación, liberación y coalescencia de bloques) se ejecutan de manera nativa en **C**. Esto garantiza rendimiento, manejo real a bajo nivel y velocidad.
* **Orquestación y Análisis (Python):** Se encarga de la generación de datos de prueba (procesos aleatorios), la ejecución del binario en C a través de subprocesos, la recolección de los resultados, y la visualización de datos. Python genera métricas de rendimiento y gráficas utilizando librerías como `pandas`, `matplotlib` y `seaborn`.

**Puente de Comunicación:** La integración entre ambos entornos se realiza mediante archivos `.csv` (`input.csv`, `output.csv`), permitiendo un intercambio de información asíncrono, persistente y ordenado.

## Por qué de la Salida de Consola

La salida por consola está intencionalmente diseñada para ser exhaustiva (**verbose**). Su objetivo principal no es solo mostrar un resultado final, sino **trazar de forma transparente el comportamiento interno del sistema operativo en cada instante de tiempo**. 

Al observar la consola, podrán notar visualmente:
- Los cambios de contexto de los procesos (transiciones entre estados: `READY`, `RUNNING`, `BLOCKED`, `FINISHED`).
- La toma de decisiones de los planificadores de CPU (por ejemplo, interrupciones por *Quantum* en Round Robin o selecciones por tiempo más corto en SJF).
- El estado de la memoria paso a paso (qué algoritmos de asignación como *First Fit* o *Best Fit* se usan, dónde ocurre la fragmentación y cómo se fusionan los bloques liberados).
- La validación del análisis de complejidad (Big O) en tiempo real mediante las operaciones en colas y listas.

---

## Link del reporte de la práctica
https://docs.google.com/document/d/1XH9lS0wOQznBocWj7UxQ94osDV52U6i7FJjOhGAbEMk/edit?usp=sharing
