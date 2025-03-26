/******************************************
Fecha: 1 octubre 2024
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

/**
 * @file ArbolBinario.h
 * @brief Definición de la clase genérica ArbolBinario.
 * 
 * Esta clase implementa un árbol binario genérico con operaciones básicas como inserción, eliminación y recorrido.
 */

template <class T>
class ArbolBinario {
protected:
    NodoBinario<T> *raiz; ///< Puntero a la raíz del árbol.

public:
    /**
     * @brief Constructor de la clase ArbolBinario.
     * Inicializa un árbol binario vacío.
     */
    ArbolBinario();

    /**
     * @brief Destructor de la clase ArbolBinario.
     * Libera la memoria utilizada por el árbol.
     */
    ~ArbolBinario();

    /**
     * @brief Verifica si el árbol está vacío.
     * @return true si el árbol está vacío, false en caso contrario.
     */
    bool esVacio();

    /**
     * @brief Obtiene el dato almacenado en la raíz del árbol.
     * @return Referencia al dato de la raíz.
     */
    T& datoRaiz();

    /**
     * @brief Calcula la altura del árbol a partir de un nodo dado.
     * @param inicio Nodo desde el cual se calculará la altura.
     * @return Altura del árbol.
     */
    int altura(NodoBinario<T> *inicio);

    /**
     * @brief Calcula el tamaño del árbol (cantidad de nodos).
     * @param inicio Nodo desde el cual se calculará el tamaño.
     * @return Número total de nodos en el árbol.
     */
    int tamano(NodoBinario<T> *inicio);

    /**
     * @brief Inserta un nuevo valor en el árbol.
     * @param val Valor a insertar.
     * @param nodo Nodo donde se realizará la inserción.
     * @return true si la inserción fue exitosa, false en caso contrario.
     */
    bool insertar(T& val, NodoBinario<T> *nodo);

    /**
     * @brief Elimina un valor del árbol.
     * @param val Valor a eliminar.
     * @return true si el valor fue eliminado, false si no se encontró.
     */
    bool eliminar(T& val);

    /**
     * @brief Busca un valor en el árbol.
     * @param val Valor a buscar.
     * @return true si el valor se encuentra en el árbol, false en caso contrario.
     */
    bool buscar(T& val);

    /**
     * @brief Realiza un recorrido en preorden del árbol.
     * @param inicio Nodo desde el cual comienza el recorrido.
     */
    void preOrden(NodoBinario<T> *inicio);

    /**
     * @brief Realiza un recorrido en inorden del árbol.
     * @param inicio Nodo desde el cual comienza el recorrido.
     */
    void inOrden(NodoBinario<T> *inicio);

    /**
     * @brief Realiza un recorrido en postorden del árbol.
     * @param inicio Nodo desde el cual comienza el recorrido.
     */
    void posOrden(NodoBinario<T> *inicio);

    /**
     * @brief Realiza un recorrido por niveles del árbol.
     * @param inicio Nodo desde el cual comienza el recorrido.
     */
    void nivelOrden(NodoBinario<T> *inicio);
};

#endif // ARBOLBINARIO_H

