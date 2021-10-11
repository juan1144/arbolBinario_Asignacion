/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbolBinario.h"

/*Reservar el espacio de memoria para un nodo, cargándole el Item X.
 La función devuelve la dirección de ese nodo.*/

Nodo* crearNodo(Item x) {
    Nodo *a;
    a = malloc(sizeof (Nodo));
    a->dato = x;
    a->padre = NULL;
    a->izq = NULL;
    a->der = NULL;
    return a;
}

/*Asigna un valor NULL a la raíz del árbol binario*/
void inicializarArbolBin(ArbolBin *arb){
    arb->raiz = NULL;
}

/*Muestra información de un nodo*/
void mostrarNodo(Nodo *v){
    printf("Nodo %d ---> ", v->dato.clave);
    if(v->padre!=NULL)printf("padre: %d\t",v->padre->dato.clave);
    else printf("padre: ninguno\t");
    if(v->izq!=NULL)printf("h_izq: %d\t",v->izq->dato.clave);
    else printf("h_izq: ninguno\t");
    if(v->der!=NULL)printf("h_der: %d\t",v->der->dato.clave);
    else printf("h_der: ninguno\t");
}

