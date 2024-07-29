#ifndef APROBADA_H_INCLUDED
#define APROBADA_H_INCLUDED

struct aprobadaE;

typedef struct aprobadaE * AprobadaPtr;

char* getNombreAprobada(AprobadaPtr aprobada);
int getNota(AprobadaPtr aprobada);

void setNombreAprobada(AprobadaPtr aprobada, char nuevoNombre[30]);
void setNota(AprobadaPtr aprobada, int nuevaNota);

AprobadaPtr crearAprobada(char nombre[30], int nota);

void mostrarAprobada(AprobadaPtr materiaAprobada);

void mostrarAprobadaDatoPtr(void * dato);

void liberarAprobada(AprobadaPtr materiaAprobada);

#endif // APROBADA_H_INCLUDED
