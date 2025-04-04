#ifndef JUEGO_H //by to meilyn garcia 9959-23-17838, marzo2025
#define JUEGO_H

#include "Tablero.h"
#include "Configuracion.h"
#include <chrono>

// Definici�n de la clase Juego
// Responsable de gestionar la din�mica del juego, interactuando con el tablero
// y utilizando la configuraci�n definida. Facilita la ejecuci�n del juego y controla el progreso de la partida.
class Juego {
private:
    Tablero tablero;                          // Representa el tablero donde se desarrolla el juego
    Configuracion& config;                    // Referencia al objeto que guarda la configuraci�n del juego
    std::chrono::steady_clock::time_point inicio; // Registro de la hora de inicio de la partida

public:
    // Constructor de la clase Juego
    // Establece los par�metros iniciales del juego usando los valores de configuraci�n proporcionados.
    // Par�metro:
    // - cfg: referencia a un objeto de tipo Configuracion que contiene los valores necesarios para el juego.
    Juego(Configuracion& cfg);

    // Funci�n para comenzar el juego
    // Coloca las minas en el tablero y da inicio a la partida.
    void iniciar();

    // Funci�n para ejecutar la l�gica principal del juego
    // Permite al jugador descubrir celdas y controla la l�gica que determina si gana o pierde.
    void jugar();
};

#endif // JUEGO_H

