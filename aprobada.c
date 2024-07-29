#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aprobada.h"

struct aprobadaE{

   char nombreAprobada[30];
   int nota;

};

char* getNombreAprobada(AprobadaPtr aprobada){

    return aprobada->nombreAprobada;

};

int getNota(AprobadaPtr aprobada){

    return aprobada->nota;

};

void setNombreAprobada(AprobadaPtr aprobada, char nuevoNombre[30]){

    strcpy(aprobada->nombreAprobada, nuevoNombre);

};

void setNota(AprobadaPtr aprobada, int nuevaNota){

    aprobada->nota = nuevaNota;

};

AprobadaPtr crearAprobada(char nombre[30], int nota){

    AprobadaPtr nuevaAprobada = malloc(sizeof(struct aprobadaE));

    strcpy(nuevaAprobada->nombreAprobada, nombre);
    nuevaAprobada->nota = nota;

    return nuevaAprobada;

};

void mostrarAprobada(AprobadaPtr materiaAprobada){

    printf(" - %s: %d\n", materiaAprobada->nombreAprobada, materiaAprobada->nota);

};

void mostrarAprobadaDatoPtr(void * dato){

    AprobadaPtr aprobada = *(AprobadaPtr*)dato;

    mostrarAprobada(aprobada);

};

void liberarAprobada(AprobadaPtr materiaAprobada){

    free(materiaAprobada);

};
