#ifndef CODIGO_BIBLIOTECA_LIBRO_H
#define CODIGO_BIBLIOTECA_LIBRO_H

typedef struct {
    int dia;
    int mes;
    int anio;
}Fecha;


typedef struct{
    char titulo[100];
    char autor[100];
    int codigo;
    int stock;
    int veces_prestado;
}Libro;

typedef struct {
    int codigo;
    int codigo_libro;
    int matricula_estudiante;
    Fecha inicio;
    Fecha limite;
    int devuelto; //Es 0 o 1
}Prestamo;

typedef struct {
    char nombre[100];
    int matricula;
    int grado;
}Alumno;
#endif //CODIGO_BIBLIOTECA_LIBRO_H
