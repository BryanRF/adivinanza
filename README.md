A partir del código de "adivinador", desarrollado en clase, se desea crear un nuevo juego con las siguientes funcionalidades que se describen a continuación.

1. Jugadores.
Se desea que el juego se pueda realizar entre dos jugadores. Al iniciar, se solicita el nombre de cada jugador y juegan por turnos alternados. El programa debe indicar el nombre de cada jugador que le pertenece el turno. El jugador tiene hasta 10 intentos de adivinar el número antes de perder su turno.

2. Números aleatorios
El programa debe generar números aleatorios para cada turno de los jugadores. Ahora el rango también será determinado de forma aleatoria por el programa obedeciendo las siguientes reglas:
A) El número "bajo" del rango debe ser entre 1 y 40.
B) El número "alto" del rango debe ser entre  60 y 99
C) El rango (alto - bajo) debe ser un número 40 y 70

Si alguna de las condiciones no se cumple, se debe volver a establecer un nuevo rango.

Una vez establecido el rango, se procede a generar el número aleatorio que será adivinado por el jugador en su turno. Los rangos no se muestran a los jugadores. Pero si son considerados dentro de las pistas del juego. 

3. Partida
Cada partida está definida por dos turnos (uno par cada jugador) al inicio del juego, se debe establecer el número de partidas. Este número debe estar entre 1 y 10. El juego finaliza al alcanzar el número de partidas definido al inicio.

4. Puntaje
En cada partida se debe registrar el número de intentos de los jugadores y el puntaje en ese turno. El puntaje está determinado por la siguiente fórmula: puntaje = 10 - intentos. Al final de las partidas, el programa debe determinar el ganador, considerando el jugador con el puntaje más alto.

5. Resultados
Al finalizar el programa debe mostrar una tabla ordenada dónde conste el nombre los nombres de los jugadores, las partidas, los puntajes de cada partida y el puntaje total. Además, deberá mostrar el nombre del ganador.

Requerimientos no funcionales:
1. Validar todos los datos que se ingresen al juego.
2. Utilizar al menos un arreglo bidimensional.
3. Utilizar al menos cinco funciones. Dos de ellas que reciban arreglos.
4. Utilizar colores en los textos y las pistas del juego (frío = azul, tibio = naranja, etc)
5. Habilitar el programa para que soporte caracteres latinos y se impriman correctamente los textos.
