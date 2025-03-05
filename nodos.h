#ifndef _NODO_H_
#define _NODO_H_

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>


typedef int Dato;
typedef struct _Nodo Nodo;

typedef struct _Nodo
{
    Dato dato;
    Nodo* sig;
}Nodo;

//Funciones
Nodo* CrearNodo();
bool BorrarNodo(Nodo*);
Nodo* AsignarDato(Nodo*,Dato);
Dato ObtenerDato(Nodo*);
Nodo* AsignarRef(Nodo*,Nodo*);
Nodo* ObtenerRef(Nodo*);

#endif
