#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "materia.h"

struct MateriaE{

    char nombreMateria[30];
    ListaPtr estudiantesInscriptos;
    int cupo;
    ColaPtr colaDeEspera;

};

char* getNombreMateria(MateriaPtr materia){

    return materia->nombreMateria;

};

ListaPtr getEstudiantesInscriptos(MateriaPtr materia){

    return materia->estudiantesInscriptos;

};

int getCupo(MateriaPtr materia){

    return materia->cupo;

};

ColaPtr getColaDeEspera(MateriaPtr materia){

    return materia->colaDeEspera;

};

void setNombreMateria(MateriaPtr materia, char nuevoNombre[30]){

    strcpy(materia->nombreMateria, nuevoNombre);

};

void setEstudiantesInscriptos(MateriaPtr materia, ListaPtr nuevosEstudiantesInscriptos){

    materia->estudiantesInscriptos = nuevosEstudiantesInscriptos;

};

void setCupo(MateriaPtr materia, int nuevoCupo){

    materia->cupo = nuevoCupo;

};

void setColaDeEspera(MateriaPtr materia, ColaPtr nuevaColaDeEspera){

    materia->colaDeEspera = nuevaColaDeEspera;

};

MateriaPtr crearMateria(char nombre[30], int cupo){

    MateriaPtr nuevaMateria = malloc(sizeof(struct MateriaE));

    strcpy(nuevaMateria->nombreMateria, nombre);
    nuevaMateria->estudiantesInscriptos = crearLista();
    nuevaMateria->cupo = cupo;
    nuevaMateria->colaDeEspera = crearCola();

    return nuevaMateria;

};

void mostrarMateria(MateriaPtr materia){

    printf("\n -------------------- MATERIA: '%s' (cupo: %d) --------------------\n", materia->nombreMateria, materia->cupo);
    printf("\n --------------- INSCRIPTOS ---------------\n\n");

    mostrarListaGenerico(materia->estudiantesInscriptos, mostrarEstudianteDatoPtr);

};

void mostrarMateriaDatoPtr(void * dato){

    MateriaPtr materia = *(MateriaPtr*)dato;

    mostrarMateria(materia);

};

int comparacionMateriasAprobadas(DatoPtr d1, DatoPtr d2){

    if(obtenerTamanio(getMateriasAprobadas(d1)) < obtenerTamanio(getMateriasAprobadas(d2))){

            return 1;

    }else{

        if(obtenerTamanio(getMateriasAprobadas(d1)) > obtenerTamanio(getMateriasAprobadas(d2))){

            return 0;

        }else{

            if(calcularPromedioEstudiante(d1) < calcularPromedioEstudiante(d2)){

                return 1;

            }else{

                return 0;

            }

        }

    }

};

void ordenarEncolados(ColaPtr cola){

    if(getPrimeroCola(cola) == getUltimoCola(cola)){

        return;

    }

    ListaPtr listaAux = crearLista();

    while(getPrimeroCola(cola) != NULL){

        insertarPrimero(listaAux, desencolar(cola));

    }

    ordenarListaBurbujeo(listaAux, comparacionMateriasAprobadas);

    NodoPtr actual = getPrimeroLista(listaAux);

    while(actual != NULL){

        encolar(cola, getDato(actual));

        actual = getSiguiente(actual);

    }

    liberarLista(listaAux);

};

void insertarEstudiante(MateriaPtr materia, DatoPtr dato){

    if(obtenerTamanio(materia->estudiantesInscriptos) < materia->cupo){

        insertarUltimo(materia->estudiantesInscriptos, dato);

    }else{

        encolar(materia->colaDeEspera, dato);

        ordenarEncolados(materia->colaDeEspera);

    }

};

void desencolarYMostrarColaDeEspera(MateriaPtr materia){

    printf("\n <<<<<<<<<<<<<<<<<<<< COLA DE ESPERA '%s' >>>>>>>>>>>>>>>>>>>>\n\n", materia->nombreMateria);

    if(getPrimeroCola(materia->colaDeEspera) == NULL){

        printf(" COLA VACIA\n\n\n");

    }else{

        while(getPrimeroCola(materia->colaDeEspera) != NULL){

            mostrarEstudiante(desencolar(materia->colaDeEspera));

        }

    }

};

void liberarMateria(MateriaPtr materia){

    liberarLista(materia->estudiantesInscriptos);

    liberarCola(materia->colaDeEspera);

    free(materia);

};
