#ifndef CONFIGURACION_H//by to meilyn garcia 9959-23-17838, marzo 2025
#define CONFIGURACION_H

// Definici�n de la clase Configuracion
// Esta clase se utiliza para gestionar y almacenar la configuraci�n del juego,
// que incluye las caracter�sticas del tablero y el estado del jugador.
class Configuracion {
public:
    // Variables p�blicas que definen los par�metros del juego
    int filas;      // Cantidad de filas en el tablero de juego
    int columnas;   // Cantidad de columnas en el tablero de juego
    int minas;      // N�mero total de minas distribuidas en el tablero
    int vidas;      // N�mero de vidas disponibles para el jugador
    int modo;       // Representa el modo de juego seleccionado
    int derrotas;   // N�mero de veces que el jugador ha perdido
    int victorias;  // N�mero de veces que el jugador ha ganado

    // Constructor de la clase Configuracion
    // Asigna valores iniciales a los atributos de la configuraci�n del juego.
    // Par�metros:
    // - f: especifica el n�mero de filas en el tablero
    // - c: especifica el n�mero de columnas en el tablero
    // - m: especifica el n�mero de minas presentes en el tablero
    // - v: especifica el n�mero de vidas del jugador
    // - modo: define el modo de juego activo
    Configuracion(int f, int c, int m, int v, int modo);

    // Funci�n para incrementar el contador de victorias en 1
    void aumentarVictoria();

    // Funci�n para incrementar el contador de derrotas en 1
    void aumentarDerrota();
};

#endif // CONFIGURACION_H
