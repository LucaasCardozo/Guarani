#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estudiante.h"
#include "aprobada.h"

struct EstudianteE{

    char nombreEstudiante[50];
    int dni;
    ListaPtr materiasAprobadas;

};

char* getNombreEstudiante(EstudiantePtr estudiante){

    return estudiante->nombreEstudiante;

};

int getDni(EstudiantePtr estudiante){

    return estudiante->dni;

};

ListaPtr getMateriasAprobadas(EstudiantePtr estudiante){

    return estudiante->materiasAprobadas;

};

void setNombreEstudiante(EstudiantePtr estudiante, char nuevoNombre[30]){

    strcpy(estudiante->nombreEstudiante, nuevoNombre);

};

void setDni(EstudiantePtr estudiante, int nuevoDni){

    estudiante->dni = nuevoDni;

};

void setMateriasAprobadas(EstudiantePtr estudiante, ListaPtr nuevasMateriasAprobadas){

    estudiante->materiasAprobadas = nuevasMateriasAprobadas;

};

EstudiantePtr crearEstudiante(char nombre[30], int dni){

    EstudiantePtr nuevoEstudiante = malloc(sizeof(struct EstudianteE));

    strcpy(nuevoEstudiante->nombreEstudiante, nombre);
    nuevoEstudiante->dni = dni;
    nuevoEstudiante->materiasAprobadas = crearLista();

    return nuevoEstudiante;

};

float calcularPromedioEstudiante(EstudiantePtr estudiante){

    float promedio = 0;

    NodoPtr actual = getPrimeroLista(estudiante->materiasAprobadas);

    int cont = 0;
    int acum = 0;

    while(actual != NULL){

        acum = acum + getNota(getDato(actual));
        cont++;
        actual = getSiguiente(actual);

    }

    promedio = (float)acum/cont;

    return promedio;

};

void mostrarEstudiante(EstudiantePtr estudiante){

    printf(" ESTUDIANTE: %s\n", estudiante->nombreEstudiante);
    printf(" DNI: %d\n", estudiante->dni);

    printf("\n ----- MATERIAS APROBADAS -----\n");

    mostrarListaGenerico(estudiante->materiasAprobadas, mostrarAprobadaDatoPtr);

    printf(" PROMEDIO: %.2f\n\n\n\n", calcularPromedioEstudiante(estudiante));

};

void mostrarEstudianteDatoPtr(void * dato){

    EstudiantePtr estudiante = *(EstudiantePtr*)dato;

    mostrarEstudiante(estudiante);

};

void liberarEstudiante(EstudiantePtr estudiante){

    liberarLista(estudiante->materiasAprobadas);

    free(estudiante);

};
