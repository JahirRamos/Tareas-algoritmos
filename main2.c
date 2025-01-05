#include <stdio.h>
int main(int argc, char *argv[]) {
    int contador = 0;
    float diametro, altura;
    float suma_diametro = 0, suma_alturas = 0, promedio_diametro, promedio_altura;
    char continuar;

    do {
        printf("Ingrese el diametro del tronco de cipres: \n");
        scanf("%f", &diametro);

        printf("Ingrese la altura del tronco de cipres: \n");
        scanf("%f", &altura);

        suma_diametro += diametro;
        suma_alturas += altura;

        contador++;

        printf("Desea ingresar otro tronco? (S/N): ");
        scanf(" %c", &continuar);  
    } while (continuar == 'S' || continuar == 's');

    if (contador > 0) {
        promedio_diametro = suma_diametro / contador;
        promedio_altura = suma_alturas / contador;
        printf("Promedio del diametro de los troncos de cipres: %.2f\n", promedio_diametro);
        printf("Promedio de la altura de los troncos de cipres: %.2f\n", promedio_altura);
    } else {
        printf("No se ingresaron datos\n");
    }

    return 0;
}