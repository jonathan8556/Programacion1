#ifndef CONFIGURACION_H
#define CONFIGURACION_H

// Esta clase permitirá llevar el control de configuración de las opciones del juego
// 19 de marzo de

class Configuracion
{
public:
    // Constructores
    Configuracion();
    Configuracion(int filasTablero, int columnasTablero, bool modoDesarrollador, int minasTablero, int vidasTablero);

    // Métodos
    int getFilasTablero();
    void setFilasTablero(int filasTablero);

    int getColumnasTablero();
    void setColumnasTablero(int columnasTablero);

    bool getModoDesarrollador();
    void setModoDesarrollador(bool modoDesarrollador);

    int getMinasTablero();
    void setMinasTablero(int minasTablero);

    int getVidasTablero();
    void setVidasTablero(int vidasTablero);

    virtual ~Configuracion();

protected:

private:
    // Atributos
    int filasTablero;
    int columnasTablero;
    bool modoDesarrollador;
    int minasTablero;
    int vidasTablero;
};


#endif // CONFIGURACION_H
