/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   arbolBinario.h
 * Author: juan
 *
 * Created on 11 de octubre de 2021, 08:23
 */

#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H
#include <stdio.h>
#include <stdlib.h>


//Definición de los datos que contiene el nodo

typedef struct {
    int clave;
} Item;

//Definición de un nodo del árbol

typedef struct elemento {
    Item dato;
    struct elemento *padre, *izq, *der;
} Nodo;

//Definición del árbol

typedef struct {
    Nodo *raiz;
} ArbolBin;

//Funciones
Nodo* crearNodo(Item x);
void inicializarArbolBin(ArbolBin *arb);
void mostrarNodo(Nodo *v);

#endif /* ARBOLBINARIO_H */

