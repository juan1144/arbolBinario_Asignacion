/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: juan
 *
 * Created on 11 de octubre de 2021, 08:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbolBinario.h"

/*
 * 
 */
int main(int argc, char** argv) {
    ArbolBin arbol;

    inicializarArbolBin(&arbol);

    //Construcción del árbol
    Item x;

    Nodo *nodo1, *nodo2, *nodo3, *nodo4, *nodo5, *nodo16, *nodo7, *nodo8, *nodo9, *nodo10, *nodo11;

    x.clave = 5;
    nodo1 = crearNodo(x);
    arbol.raiz = nodo1;
    x.clave = 100;
    nodo2 = crearNodo(x);
    nodo1->izq = nodo2;
    nodo2->padre = nodo1;
    x.clave = 3;
    nodo3 = crearNodo(x);
    nodo3->padre = nodo1;
    nodo1->der = nodo3;
    
    //test - Mostrar info de un nodo
    
    mostrarNodo(nodo1);

    return (EXIT_SUCCESS);
}

