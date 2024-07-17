#include <stdio.h>

// Funciones para las operaciones
double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        printf("Error: División por cero.\n");
        return 0;
    }
}

int main() {

    int opcion;
    double num1, num2, resultado;

    do {
        // Mostrar el menú
        printf("\nCalculadora\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf_s("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            // Pedir los números al usuario
            printf("Ingrese el primer número: ");
            scanf_s("%lf", &num1);
            printf("Ingrese el segundo número: ");
            scanf_s("%lf", &num2);
        }

        // Ejecutar la operación seleccionada
        switch (opcion) {
        case 1:
            resultado = suma(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 2:
            resultado = resta(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 3:
            resultado = multiplicacion(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 4:
            resultado = division(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 5:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción inválida.\n");
        }
    } while (opcion != 5);

    return 0;
}
