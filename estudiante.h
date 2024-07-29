#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

#include "lista.h"

struct EstudianteE;

typedef struct EstudianteE * EstudiantePtr;

char* getNombreEstudiante(EstudiantePtr estudiante);
int getDni(EstudiantePtr estudiante);
ListaPtr getMateriasAprobadas(EstudiantePtr estudiante);

void setNombreEstudiante(EstudiantePtr estudiante, char nuevoNombre[30]);
void setDni(EstudiantePtr estudiante, int nuevoDni);
void setMateriasAprobadas(EstudiantePtr estudiante, ListaPtr nuevasMateriasAprobadas);

EstudiantePtr crearEstudiante(char nombre[30], int dni);

float calcularPromedioEstudiante(EstudiantePtr estudiante);

void mostrarEstudiante(EstudiantePtr estudiante);

void mostrarEstudianteDatoPtr(void * dato);

void liberarEstudiante(EstudiantePtr estudiante);

#endif // ESTUDIANTE_H_INCLUDED
