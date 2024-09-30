Sección 3: Simulación de Planificación de Procesos
6.	Aplique los métodos de planificación de procesos que se han visto en clase. 
Realice una comparación gráfica del rendimiento de cada algoritmo en términos de tiempo de espera promedio y tiempo de respuesta promedio. Justifique cuál planificación es mejor y en qué condiciones.

-	FCFS: Ideal para sistemas simples o por lotes cuyos procesos tienen tiempos de ejecución similares. Los procesos largos hacen esperar a los cortos.

Proceso	T. CPU	T. Llegada	T. Inicio	T. Finalización	T. Retorno	T. Espera	Índice
P1	10	0	0	10	10	0	1
P2	5	1	10	15	14	9	0.357
P3	7	2	15	22	20	13	0.35
P4	3	3	22	25	22	19	0.136
P5	6	4	25	31	27	21	0.222


-	FSJF: Mejor desempeño con tiempos de ejecución previsibles. El objetivo es minimizar el tiempo de espera medio. El algoritmo selecciona aquel proceso cuyo próximo ciclo de ejecución de CP sea menor. El problema está en conocer dichos valores, pero podemos predecirlos usando la información de los ciclos anteriores ejecutados.
.
Proceso	T. CPU	T. llegada	T. Inicio	T. Finalización	T. Retorno	T. Espera	INDEX
P1	10	0	0	10	10	0	1
P2	5	1	13	18	17	12	0.294
P3	7	2	24	31	29	22	0.241
P4	3	3	10	13	10	7	0.3
P5	6	4	18	24	20	14	0.3


-	SRTF: Adecuado cuando los procesos cortos son prioritarios y el sistema requiere un tiempo de respuesta bajo. Problemas de inanición: los trabajos largos no se ejecutarán mientras haya trabajos cortos.
-	
Proceso	T. CPU	T. llegada	T. Inicio	T. Finalización	T. Retorno	T. Espera	INDEX
P1	10	0	0 ; 22	1 ; 31	31	21	0.323
P2	5	1	1	6	5	0	1
P3	7	2	15	22	20	13	0.35
P4	3	3	6	9	6	3	0.5
P5	6	4	9	15	11	5	0.545



-	Round Robin: Es el mejor para sistemas interactivos o en tiempo compartido, donde todos los procesos deben tener una oportunidad; si el proceso se bloquea o termina antes de agotar su quantum también se alterna el uso de la CPU.
q=3
Proceso	T. CPU	T. llegada	T. Inicio	T. Finalización	T. Retorno	T. Espera	INDEX
P1	10	0	0; 9;23;30	3;12;26;31	31	21	0.323
P2	5	1	3;18	6;20	19	14	0.263
P3	7	2	6;20	9;23;30	28	21	0.25
P4	3	3	12	15	12	9	0.25
P5	6	4	15;26	18;29	25	19	0.24


CONCLUSIÓN: 
El algoritmo Round Robin es el más confiable para sistemas interactivos, ya que garantiza que todos los procesos reciban tiempo de CPU de manera equitativa y constante. Esto lo convierte en una excelente opción cuando el objetivo es mantener un buen tiempo de respuesta en sistemas donde los usuarios esperan interacción rápida.
.
En definitiva, la mejor opción dependerá del tipo de sistema y de las condiciones particulares de uso.
