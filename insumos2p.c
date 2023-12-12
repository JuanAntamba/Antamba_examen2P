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