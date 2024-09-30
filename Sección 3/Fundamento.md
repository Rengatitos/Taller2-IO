Sección 3: Planificación de Procesos


-	FCFS: Ideal para sistemas simples o por lotes cuyos procesos tienen tiempos de
  ejecución similares. Los procesos largos hacen esperar a los cortos.


-	FSJF: Mejor desempeño con tiempos de ejecución previsibles. El objetivo es
  minimizar el tiempo de espera medio. El algoritmo selecciona aquel proceso
  cuyo próximo ciclo de ejecución de CP sea menor. El problema está en conocer
	dichos valores, pero podemos predecirlos usando la información de los ciclos
	anteriores ejecutados.



-	SRTF: Adecuado cuando los procesos cortos son prioritarios y el sistema
  requiere un tiempo de respuesta bajo. Problemas de inanición: los trabajos
 	largos no se ejecutarán mientras haya trabajos cortos.


-	Round Robin: Es el mejor para sistemas interactivos o en tiempo compartido,
  donde todos los procesos deben tener una oportunidad; si el proceso se
 	bloquea o termina antes de agotar su quantum también se alterna el uso de la
 	CPU.
 

CONCLUSIÓN: 
El algoritmo Round Robin es el más confiable para sistemas interactivos, ya que 
garantiza que todos los procesos reciban tiempo de CPU de manera equitativa y 
constante. Esto lo convierte en una excelente opción cuando el objetivo es 
mantener un buen tiempo de respuesta en sistemas donde los usuarios esperan 
interacción rápida.
En definitiva, la mejor opción dependerá del tipo de sistema y de las condiciones 
particulares de uso.
