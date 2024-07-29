#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

#include "lista.h"
#include "cola.h"
#include "estudiante.h"

struct MateriaE;

typedef struct MateriaE * MateriaPtr;

char* getNombreMateria(MateriaPtr materia);
ListaPtr getEstudiantesInscriptos(MateriaPtr materia);
int getCupo(MateriaPtr materia);
ColaPtr getColaDeEspera(MateriaPtr materia);

void setNombreMateria(MateriaPtr materia, char nuevoNombre[30]);
void setEstudiantesInscriptos(MateriaPtr materia, ListaPtr nuevosEstudiantesInscriptos);
void setCupo(MateriaPtr materia, int nuevoCupo);
void setColaDeEspera(MateriaPtr materia, ColaPtr nuevaColaDeEspera);

MateriaPtr crearMateria(char nombre[30], int cupo);

void mostrarMateria(MateriaPtr materia);

void mostrarMateriaDatoPtr(void * dato);

int comparacionMateriasAprobadas(DatoPtr d1, DatoPtr d2);

void ordenarEncolados(ColaPtr cola);

void insertarEstudiante(MateriaPtr materia, DatoPtr dato);

void desencolarYMostrarColaDeEspera(MateriaPtr materia);

void liberarMateria(MateriaPtr materia);

#endif // MATERIA_H_INCLUDED
