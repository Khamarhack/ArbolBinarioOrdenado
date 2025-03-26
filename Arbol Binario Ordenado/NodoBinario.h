/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Árboles
Estructuras de datos
******************************************/
#ifndef NODOBINARIO_H
#define NODOBINARIO_H

/**
 * @file NodoBinario.h
 * @brief Definición de la clase NodoBinario.
 *
 * Clase que representa un nodo de un árbol binario, con un dato y punteros a sus hijos izquierdo y derecho.
 */

template <class T>
class NodoBinario {
protected:
    T dato;                      ///< Dato almacenado en el nodo.
    NodoBinario<T> *hijoIzq;     ///< Puntero al hijo izquierdo.
    NodoBinario<T> *hijoDer;     ///< Puntero al hijo derecho.

public:
    /**
     * @brief Constructor de la clase NodoBinario.
     * Inicializa los punteros de los hijos en NULL.
     */
    NodoBinario();

    /**
     * @brief Destructor de la clase NodoBinario.
     */
    ~NodoBinario();

    /**
     * @brief Obtiene el dato almacenado en el nodo.
     * @return Referencia al dato del nodo.
     */
    T& getDato();

    /**
     * @brief Establece el dato del nodo.
     * @param val Valor a asignar al nodo.
     */
    void setDato(T& val);

    /**
     * @brief Obtiene el puntero al hijo izquierdo.
     * @return Puntero al nodo hijo izquierdo.
     */
    NodoBinario<T>* getHijoIzq();

    /**
     * @brief Obtiene el puntero al hijo derecho.
     * @return Puntero al nodo hijo derecho.
     */
    NodoBinario<T>* getHijoDer();

    /**
     * @brief Establece el hijo izquierdo del nodo.
     * @param izq Puntero al nuevo hijo izquierdo.
     */
    void setHijoIzq(NodoBinario<T> *izq);

    /**
     * @brief Establece el hijo derecho del nodo.
     * @param der Puntero al nuevo hijo derecho.
     */
    void setHijoDer(NodoBinario<T> *der);
};

#endif // NODOBINARIO_H
