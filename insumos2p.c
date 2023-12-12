#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define meses 12
#define MAX_INSUMOS 30

// Se usa una funcion para generar datos aleatorios de ingresos y egresos, se usa arrglos y estructura de repeticion for
void generarDatosAleatorios(int ingresos[MAX_INSUMOS][meses], int egresos[MAX_INSUMOS][meses]) {
    for (int i = 0; i < MAX_INSUMOS; i++) {
        for (int j = 0; j < meses; j++) {
            ingresos[i][j] = rand() % 100 + 1;  
            egresos[i][j] = rand() % 100;    
        }
    }
}

// Función de ingresos y egresos por insumo mensulaes
void imprimirDetalle(int ingresos[MAX_INSUMOS][meses], int egresos[MAX_INSUMOS][meses]) {
    for (int i = 0; i < MAX_INSUMOS; i++) {
        printf("Insumo %d:\n", i + 1);
        for (int j = 0; j < meses; j++) {
            printf("  Mes %d - Ingresos: %d, Egresos: %d\n", j + 1, ingresos[i][j], egresos[i][j]);
        }
        printf("\n");
    }
}