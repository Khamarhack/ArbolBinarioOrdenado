/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Árboles
Estructuras de datos
******************************************/
#include "ArbolBinario.h"

using namespace std;

/**
 * @brief Constructor de la clase ArbolBinario.
 * Inicializa un árbol binario vacío.
 */
template <class T>
ArbolBinario<T>::ArbolBinario() {
    this->raiz = NULL;
}

/**
 * @brief Destructor de la clase ArbolBinario.
 * Actualmente no libera memoria de los nodos, es recomendable implementar una función para liberar memoria.
 */
template <class T>
ArbolBinario<T>::~ArbolBinario() {
    // Se recomienda implementar un método para liberar los nodos del árbol.
}

/**
 * @brief Verifica si el árbol está vacío.
 * @return true si el árbol está vacío, false en caso contrario.
 */
template <class T>
bool ArbolBinario<T>::esVacio() {
    return this->raiz == NULL;
}

/**
 * @brief Obtiene el dato de la raíz del árbol.
 * @return Referencia al dato almacenado en la raíz.
 * @throws runtime_error Si el árbol está vacío.
 */
template <class T>
T& ArbolBinario<T>::datoRaiz() {
    if (this->raiz == NULL) {
        throw runtime_error("El árbol está vacío, no hay dato en la raíz.");
    }
    return this->raiz->getDato();
}

/**
 * @brief Calcula la altura del árbol a partir de un nodo dado.
 * @param inicio Nodo desde el cual se calculará la altura.
 * @return Altura del árbol.
 */
template <class T>
int ArbolBinario<T>::altura(NodoBinario<T> *inicio) {
    if (inicio == NULL) {
        return -1;
    }

    int alturaIzq = altura(inicio->getHijoIzq());
    int alturaDer = altura(inicio->getHijoDer());

    return max(alturaIzq, alturaDer) + 1;
}

/**
 * @brief Calcula el tamaño del árbol (cantidad de nodos).
 * @param inicio Nodo desde el cual se calculará el tamaño.
 * @return Número total de nodos en el árbol.
 */
template <class T>
int ArbolBinario<T>::tamano(NodoBinario<T> *inicio) {
    if (inicio == NULL) {
        return 0;
    }
    return tamano(inicio->getHijoIzq()) + tamano(inicio->getHijoDer()) + 1;
}

/**
 * @brief Inserta un nuevo valor en el árbol.
 * @param val Valor a insertar.
 * @param nodo Nodo desde el cual se realizará la inserción.
 * @return true si la inserción fue exitosa, false si el valor ya existe.
 */
template <class T>
bool ArbolBinario<T>::insertar(T& val, NodoBinario<T> *nodo) {
    NodoBinario<T> *nodito = new NodoBinario<T>();
    nodito->setDato(val);

    if (this->raiz == NULL) {
        this->raiz = nodito;
        return true;
    }

    if (val < nodo->getDato()) {
        if (nodo->getHijoIzq() != NULL) {
            return insertar(val, nodo->getHijoIzq());
        } else {
            nodo->setHijoIzq(nodito);
            return true;
        }
    } else if (val > nodo->getDato()) {
        if (nodo->getHijoDer() != NULL) {
            return insertar(val, nodo->getHijoDer());
        } else {
            nodo->setHijoDer(nodito);
            return true;
        }
    } else {
        delete nodito; // Evita fuga de memoria
        return false;
    }
}

