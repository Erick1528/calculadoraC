//#include <stdio.h>
//#include <stdbool.h>
//
//int main() {
//    // Variables
//    double numero = 0;
//    double suma = 0;
//    bool continuar = true;
//
//    // Suma de varios n�meros
//    while (continuar) {
//        printf("Escribe el n�mero que quieres sumar, para salir escribe -1: ");
//
//        if (scanf_s("%lf", &numero) != 1) {
//            printf("Entrada inv�lida. Por favor, ingresa un n�mero v�lido.\n");
//            while (getchar() != '\n');
//            continue;  // Volver al inicio del bucle
//        }
//
//        // Controlar la salida del bucle con una condici�n
//        if (numero == -1) {
//            continuar = false; 
//        }
//        else {
//            suma += numero;
//        }
//    }
//
//    // Mostrar el resultado
//    printf("La suma total es: %.2lf\n", suma);
//
//    return 0;
//}
