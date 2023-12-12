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

// Función para obtener y mostrar el total de ingresos y egresos por insumo en el año
void obtenerTotalesAnuales(int ingresos[MAX_INSUMOS][meses], int egresos[MAX_INSUMOS][meses]) {
    for (int i = 0; i < MAX_INSUMOS; i++) {
        int totalIngresos = 0;
        int totalEgresos = 0;
        for (int j = 0; j < meses; j++) {
            totalIngresos += ingresos[i][j];
            totalEgresos += egresos[i][j];
        }
        printf("Insumo %d - Total Ingresos: %d, Total Egresos: %d\n", i + 1, totalIngresos, totalEgresos);
    }
}

int main() {
    srand(time(NULL));

 
    int ingresos[MAX_INSUMOS][meses];
    int egresos[MAX_INSUMOS][meses];

    generarDatosAleatorios(ingresos, egresos);

    // Menú de opciones 
    int opcion;
    do {
        printf("Seleccione una opcion:\n");
        printf("1. Imprimir detalle de ingresos y egresos\n");
        printf("2. Obtener total de ingresos y egresos anuales\n");
        printf("0. Salir\n");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                imprimirDetalle(ingresos, egresos);
                break;
            case 2:
                obtenerTotalesAnuales(ingresos, egresos);
                break;
            case 0:
                printf("Saliendo.........\n");
                break;
            default:
                printf("Opcion no valida..\n");
        }
    } while (opcion != 0);

    return 0;
}