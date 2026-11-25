#include <stdio.h>
#include <string.h>
#include "Estructuras.h"

Fecha agregar_fecha() {
    int dias_por_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dia, mes, anio;
    int bandera = 0;
    Fecha fecha;


    do { // Se encarga de que se ingrese un año que no sea 0 o menor
        printf("Ingrese el a%cio: ", 164);
        scanf("%d", &anio);

        if (anio < 0 ) {
            bandera = 1;
            printf("Error a%cio invalido\n", 164);
        }else {
            bandera = 0;
        }
    }while (bandera);

    do { // Se encarga de que se ingrese un mes que no sea mayor de 12 o menor a 1
        printf("Ingrese el mes: ");
        scanf("%d", &mes);

        if (mes > 12 || mes < 1) {
            bandera = 1;
            printf("Ingrese un mes valido (1 - 12)\n");
        }else {
            bandera = 0;
        }
    }while (bandera);

    do {//Se asegura que el dia no sea 0  y este dentro de el rango de el mes
        printf("Ingrese el dia (0 - %d): ", dias_por_mes[mes-1]);
        scanf("%d", &dia);

        if (dia > dias_por_mes[mes-1] || mes < 0) {
            bandera = 1;
            printf("Error: Ingrese un dia valido 0 - %d\n", dias_por_mes[mes-1]);
        }else {
            bandera = 0;
        }
    }while (bandera);

    fecha.dia = dia;
    fecha.mes = mes;
    fecha.anio = anio;

    return fecha;
}





int main() {




    return 0;
}