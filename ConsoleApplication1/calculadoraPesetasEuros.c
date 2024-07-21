#include <stdio.h>

#define VALOR_PESETAS 166.386;

int main() {

	// Variables
	int continuar = 0;
	double euros = 0, pesetas = 0;
	int opcion = 0;

	while (continuar == 0) {
		printf("Bienvenido/a a la calculadora de pesetas y euros\n");
		printf("Selecciona la accion que quieras hacer\n");
		printf("1. Convertir pesetas a euros\n");
		printf("2. Convertir euros a pesetas\n");
		printf("3. Salir\n\n");

		scanf_s("%d", &opcion);

		switch (opcion) {
		case 1:
			printf("Introduce la cantidad de pesetas que quieres convertir a euros: ");
			scanf_s("%lf", &pesetas);
			double euros = pesetas / VALOR_PESETAS;
			printf("%.2lf pesetas son %.2lf euros\n", pesetas, euros);
			break;
		case 2:
			printf("Introduce la cantidad de euros que quieres convertir a pesetas: ");
			scanf_s("%lf", &euros);
			double pesetas = euros * VALOR_PESETAS;
			printf("%.2lf euros son %.2lf pesetas\n", euros, pesetas);
			break;
		case 3:
			continuar = 1;
			printf("Has salido de la calculadora");
			break;
		default:
			printf("Opción no válida. Por favor, selecciona una opción válida.\n");
			break;
		}
	}

	return 0;
}