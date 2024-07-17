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
        printf("Error: Divisi�n por cero.\n");
        return 0;
    }
}

int main() {

    int opcion;
    double num1, num2, resultado;

    do {
        // Mostrar el men�
        printf("\nCalculadora\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicaci�n\n");
        printf("4. Divisi�n\n");
        printf("5. Salir\n");
        printf("Seleccione una opci�n: ");
        scanf_s("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            // Pedir los n�meros al usuario
            printf("Ingrese el primer n�mero: ");
            scanf_s("%lf", &num1);
            printf("Ingrese el segundo n�mero: ");
            scanf_s("%lf", &num2);
        }

        // Ejecutar la operaci�n seleccionada
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
            printf("Opci�n inv�lida.\n");
        }
    } while (opcion != 5);

    return 0;
}
