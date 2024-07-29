#include <stdio.h>
#include <stdlib.h>

#include "materia.h"
#include "estudiante.h"
#include "aprobada.h"

int main()
{

    ListaPtr materias = crearLista();

    ///MATERIA 1: OBJETOS
    MateriaPtr materia1 = crearMateria("objetos", 2);

    ///ESTUDIANTE 1
    EstudiantePtr estudianteObj1 = crearEstudiante("Lucas Ivan Cardozo", 44710543);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaLucas1 = crearAprobada("matematica", 8);
    AprobadaPtr aprobadaLucas2 = crearAprobada("ingenieria de software", 7);
    AprobadaPtr aprobadaLucas3 = crearAprobada("ayed", 10);
    AprobadaPtr aprobadaLucas4 = crearAprobada("proyecto software", 9);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteObj1), aprobadaLucas1);
    insertarUltimo(getMateriasAprobadas(estudianteObj1), aprobadaLucas2);
    insertarUltimo(getMateriasAprobadas(estudianteObj1), aprobadaLucas3);
    insertarUltimo(getMateriasAprobadas(estudianteObj1), aprobadaLucas4);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia1, estudianteObj1);

    ///ESTUDIANTE 2
    EstudiantePtr estudianteObj2 = crearEstudiante("Demian Lautaro Rodriguez", 47615372);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaDemian1 = crearAprobada("ibd", 6);
    AprobadaPtr aprobadaDemian2 = crearAprobada("programacion", 9);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteObj2), aprobadaDemian1);
    insertarUltimo(getMateriasAprobadas(estudianteObj2), aprobadaDemian2);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia1, estudianteObj2);

    ///ESTUDIANTE 3
    EstudiantePtr estudianteObj3 = crearEstudiante("Juan Jose Peralta", 32945417);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaJuan1 = crearAprobada("proyecto software", 8);
    AprobadaPtr aprobadaJuan2 = crearAprobada("ingles", 4);
    AprobadaPtr aprobadaJuan3 = crearAprobada("ibd", 7);
    AprobadaPtr aprobadaJuan4 = crearAprobada("matematica", 5);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteObj3), aprobadaJuan1);
    insertarUltimo(getMateriasAprobadas(estudianteObj3), aprobadaJuan2);
    insertarUltimo(getMateriasAprobadas(estudianteObj3), aprobadaJuan3);
    insertarUltimo(getMateriasAprobadas(estudianteObj3), aprobadaJuan4);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia1, estudianteObj3);


    ///MATERIA 2: REDES Y COMUNICACIONES
    MateriaPtr materia2 = crearMateria("redes y comunicaciones", 1);

    ///ESTUDIANTE 1
    EstudiantePtr estudianteRYC1 = crearEstudiante("Francisco Thomas Farina", 30426138);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaFran1 = crearAprobada("ingles", 5);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteRYC1), aprobadaFran1);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia2, estudianteRYC1);

    ///ESTUDIANTE 2
    EstudiantePtr estudianteRYC2 = crearEstudiante("Martina Camila Fernandez", 41325679);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaMartu1 = crearAprobada("matematica", 10);
    AprobadaPtr aprobadaMartu2 = crearAprobada("ayed", 7);
    AprobadaPtr aprobadaMartu3 = crearAprobada("programacion", 4);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteRYC2), aprobadaMartu1);
    insertarUltimo(getMateriasAprobadas(estudianteRYC2), aprobadaMartu2);
    insertarUltimo(getMateriasAprobadas(estudianteRYC2), aprobadaMartu3);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia2, estudianteRYC2);

    ///ESTUDIANTE 3
    EstudiantePtr estudianteRYC3 = crearEstudiante("Juana Florencia Lopez", 35342675);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaJuana1 = crearAprobada("ingenieria de software", 6);
    AprobadaPtr aprobadaJuana2 = crearAprobada("ibd", 9);
    AprobadaPtr aprobadaJuana3 = crearAprobada("matematica", 10);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteRYC3), aprobadaJuana1);
    insertarUltimo(getMateriasAprobadas(estudianteRYC3), aprobadaJuana2);
    insertarUltimo(getMateriasAprobadas(estudianteRYC3), aprobadaJuana3);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia2, estudianteRYC3);


    ///MATERIA 3: SISTEMAS OPERATIVOS
    MateriaPtr materia3 = crearMateria("sistemas operativos", 3);

    ///ESTUDIANTE 1
    EstudiantePtr estudianteSO1 = crearEstudiante("Federico Martin Gonzalez", 48302410);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaFede1 = crearAprobada("ibd", 7);
    AprobadaPtr aprobadaFede2 = crearAprobada("matematica", 4);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteSO1), aprobadaFede1);
    insertarUltimo(getMateriasAprobadas(estudianteSO1), aprobadaFede2);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia3, estudianteSO1);

    ///ESTUDIANTE 2
    EstudiantePtr estudianteSO2 = crearEstudiante("Brenda Sol Martinez", 33601974);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaBren1 = crearAprobada("ayed", 6);
    AprobadaPtr aprobadaBren2 = crearAprobada("programacion", 10);
    AprobadaPtr aprobadaBren3 = crearAprobada("ingenieria de software", 8);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteSO2), aprobadaBren1);
    insertarUltimo(getMateriasAprobadas(estudianteSO2), aprobadaBren2);
    insertarUltimo(getMateriasAprobadas(estudianteSO2), aprobadaBren3);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia3, estudianteSO2);

    ///ESTUDIANTE 3
    EstudiantePtr estudianteSO3 = crearEstudiante("Horacio Franco Centurion", 47310657);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaHora1 = crearAprobada("ingles", 10);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteSO3), aprobadaHora1);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia3, estudianteSO3);

    ///ESTUDIANTE 4
    EstudiantePtr estudianteSO4 = crearEstudiante("Roberto Joaquin Penerbosa", 30168432);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaRober1 = crearAprobada("ingenieria de software", 4);
    AprobadaPtr aprobadaRober2 = crearAprobada("ayed", 9);
    AprobadaPtr aprobadaRober3 = crearAprobada("programacion", 7);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteSO4), aprobadaRober1);
    insertarUltimo(getMateriasAprobadas(estudianteSO4), aprobadaRober2);
    insertarUltimo(getMateriasAprobadas(estudianteSO4), aprobadaRober3);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia3, estudianteSO4);

    ///ESTUDIANTE 5
    EstudiantePtr estudianteSO5 = crearEstudiante("Julieta Magali Rodriguez", 46342785);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaJuli1 = crearAprobada("ibd", 5);
    AprobadaPtr aprobadaJuli2 = crearAprobada("programacion", 4);
    AprobadaPtr aprobadaJuli3 = crearAprobada("matematica", 8);
    AprobadaPtr aprobadaJuli4 = crearAprobada("ingenieria de software", 10);
    AprobadaPtr aprobadaJuli5 = crearAprobada("ayed", 7);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteSO5), aprobadaJuli1);
    insertarUltimo(getMateriasAprobadas(estudianteSO5), aprobadaJuli2);
    insertarUltimo(getMateriasAprobadas(estudianteSO5), aprobadaJuli3);
    insertarUltimo(getMateriasAprobadas(estudianteSO5), aprobadaJuli4);
    insertarUltimo(getMateriasAprobadas(estudianteSO5), aprobadaJuli5);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia3, estudianteSO5);

    ///ESTUDIANTE 6
    EstudiantePtr estudianteSO6 = crearEstudiante("Alejandro Jose Castillo", 40246730);

    //MATERIAS APROBADAS
    AprobadaPtr aprobadaAle1 = crearAprobada("programacion", 9);
    AprobadaPtr aprobadaAle2 = crearAprobada("matematica", 7);
    AprobadaPtr aprobadaAle3 = crearAprobada("ayed", 10);

    //AGREGAMOS LAS MATERIAS APROBADAS A LA LISTA DE MATERIAS APROBADAS DEL ESTUDIANTE
    insertarUltimo(getMateriasAprobadas(estudianteSO6), aprobadaAle1);
    insertarUltimo(getMateriasAprobadas(estudianteSO6), aprobadaAle2);
    insertarUltimo(getMateriasAprobadas(estudianteSO6), aprobadaAle3);

    //INTENTAMOS AGREGAR AL ESTUDIANTE A LA LISTA DE INSCRIPTOS DE LA MATERIA
    //EN CASO DE NO SER POSIBLE, EL ESTUDIANTE SERÁ ENCOLADO
    insertarEstudiante(materia3, estudianteSO6);


    ///INSERTAMOS LAS MATERIAS CREADAS A LA LISTA DE MATERIAS
    insertarUltimo(materias, materia1);
    insertarUltimo(materias, materia2);
    insertarUltimo(materias, materia3);

    ///MOSTRAMOS TODAS LAS MATERIAS
    mostrarListaGenerico(materias, mostrarMateriaDatoPtr);

    ///DESENCOLAMOS TODAS LAS COLAS DE ESPERA ASÍ PODEMOS VER QUE LOS ESTUDIANTES NO INSCRIPTOS FUERON ENCOLADOS CORRECTAMENTE
    desencolarYMostrarColaDeEspera(materia1);
    desencolarYMostrarColaDeEspera(materia2);
    desencolarYMostrarColaDeEspera(materia3);

    return 0;
}
