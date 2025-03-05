#include "nodos.h"
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>


Nodo* CrearNodo(){
    Nodo* nuevo=(Nodo*)malloc(sizeof(Nodo));
    nuevo->sig=NULL;
    nuevo->dato=0;
    return nuevo;
}

bool BorrarNodo(Nodo* n){
    if(n->sig==NULL){
        free(n);
        return true;
    }
    return false;
}

Nodo* AsignarDato(Nodo*n,Dato d){
    if(n!=NULL){
        n->dato=d;
    }
    return n;
}

Dato ObtenerDato(Nodo*n){
    if(n==NULL){
        printf("No hay datos \n");
        return -1;
    }
    return n->dato;
}

Nodo* AsignarRef(Nodo*n,Nodo*e){
    if(n!=NULL){
        n->sig=e;
    }
    return n;
}

Nodo* ObtenerRef(Nodo*n){
    if(n!=NULL){
        return n->sig;
    }
    return NULL;
}