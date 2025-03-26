/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Árboles
Estructuras de datos
******************************************/
#include "NodoBinario.h"

using namespace std;

/**
 * @brief Constructor de la clase NodoBinario.
 * Inicializa los punteros de los hijos en NULL.
 */
template <class T>
NodoBinario<T>::NodoBinario() {
    this->hijoIzq = NULL;
    this->hijoDer = NULL;
}

/**
 * @brief Destructor de la clase NodoBinario.
 * Actualmente no libera memoria de los hijos. Se recomienda hacerlo en el árbol.
 */
template <class T>
NodoBinario<T>::~NodoBinario() {
    // Se recomienda liberar memoria en la implementación del árbol binario.
}

/**
 * @brief Obtiene el dato almacenado en el nodo.
 * @return Referencia al dato del nodo.
 */
template <class T>
T& NodoBinario<T>::getDato() {
    return this->dato;
}

/**
 * @brief Establece el dato del nodo.
 * @param val Valor a asignar al nodo.
 */
template <class T>
void NodoBinario<T>::setDato(T& val) {
    this->dato = val;
}

/**
 * @brief Obtiene el puntero al hijo izquierdo.
 * @return Puntero al nodo hijo izquierdo.
 */
template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoIzq() {
    return this->hijoIzq;
}

/**
 * @brief Obtiene el puntero al hijo derecho.
 * @return Puntero al nodo hijo derecho.
 */
template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoDer() {
    return this->hijoDer;
}

/**
 * @brief Establece el hijo izquierdo del nodo.
 * @param izq Puntero al nuevo hijo izquierdo.
 */
template <class T>
void NodoBinario<T>::setHijoIzq(NodoBinario<T>* izq) {
    this->hijoIzq = izq;
}

/**
 * @brief Establece el hijo derecho del nodo.
 * @param der Puntero al nuevo hijo derecho.
 */
template <class T>
void NodoBinario<T>::setHijoDer(NodoBinario<T>* der) {
    this->hijoDer = der;
}

