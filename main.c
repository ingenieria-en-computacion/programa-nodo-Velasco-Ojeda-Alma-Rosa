#include "nodos.h"

int main() {
    Nodo* nodo1 = CrearNodo();
    AsignarDato(nodo1, 5);
    printf("Dato del nodo: %d\n", ObtenerDato(nodo1));

    Nodo* nodo2 = CrearNodo();
    AsignarDato(nodo2, 10);
    AsignarRef(nodo1, nodo2);

    printf("Dato del siguiente nodo: %d\n", ObtenerDato(ObtenerRef(nodo1)));

    BorrarNodo(nodo1);
    BorrarNodo(nodo2);

    return 0;
}
