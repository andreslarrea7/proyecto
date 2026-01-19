#include <stdio.h>
#include "funciones.h"

int main() {
    Zona zonas[ZONAS];
    int opcion;

    inicializarZonas(zonas);

    do {
        printf("\n--- SISTEMA DE CONTAMINACION DEL AIRE (ZONAS RURALES QUITO) ---");
        printf("\n1. Ver contaminacion actual");
        printf("\n2. Promedios historicos (30 dias)");
        printf("\n3. Prediccion 24 horas");
        printf("\n4. Alertas");
        printf("\n5. Recomendaciones");
        printf("\n6. Generar reporte");
        printf("\n7. Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                generarDatosAleatorios(zonas); // 🔁 NUEVOS DATOS CADA VEZ
                mostrarActual(zonas);
                break;

            case 2:
                promedioHistorico(zonas);
                break;

            case 3:
                prediccion(zonas);
                break;

            case 4:
                alertas(zonas);
                break;

            case 5:
                recomendaciones(zonas);
                break;

            case 6:
                generarReporte(zonas);
                break;

            case 7:
                printf("\nSaliendo del sistema...\n");
                break;

            default:
                printf("\nOpcion invalida\n");
        }

    } while (opcion != 7);

    return 0;
}
