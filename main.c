#include <stdio.h>
#include <string.h>

int validar_goles(int goles) {
    
    if (goles < 0) {
        printf("Error: Los goles no pueden ser negativos. Intente de nuevo.\n");
        return 0; 
    }
    return 1; 
}

int main() {
    char equipo1[30], equipo2[30], equipo3[30], equipo4[30];
    int puntos[4] = {0, 0, 0, 0};  
    int goles[4] = {0, 0, 0, 0};  
    int goles_en_contra[4] = {0, 0, 0, 0}; 

    
    printf("Ingrese el nombre del primer equipo: ");
    fgets(equipo1, 30, stdin);

    printf("Ingrese el nombre del segundo equipo: ");
    fgets(equipo2, 30, stdin);

    printf("Ingrese el nombre del tercer equipo: ");
    fgets(equipo3, 30, stdin);

    printf("Ingrese el nombre del cuarto equipo: ");
    fgets(equipo4, 30, stdin);

    int goles1, goles2;


    printf("\nIngrese el resultado del partido 1: %s vs %s\n", equipo1, equipo2);
    printf("Goles de %s: ", equipo1);
    while (scanf("%d", &goles1) != 1 || !validar_goles(goles1)) {
        printf("Error: Ingrese un número válido para los goles de %s: ", equipo1);
        while (getchar() != '\n'); 
    }
    printf("Goles de %s: ", equipo2);
    while (scanf("%d", &goles2) != 1 || !validar_goles(goles2)) {
        printf("Error: Ingrese un número válido para los goles de %s: ", equipo2);
        while (getchar() != '\n');  
    }

    if (goles1 > goles2) {
        puntos[0] += 3;
        goles_en_contra[1] += goles1;
    } else if (goles2 > goles1) {
        puntos[1] += 3;
        goles_en_contra[0] += goles2;
    } else {
        puntos[0] += 1;
        puntos[1] += 1;
    }
    goles[0] += goles1;
    goles[1] += goles2;

    printf("\nIngrese el resultado del partido 2: %s vs %s\n", equipo1, equipo3);
    printf("Goles de %s: ", equipo1);
    while (scanf("%d", &goles1) != 1 || !validar_goles(goles1)) {
        printf("Error: Ingrese un número válido para los goles de %s: ", equipo1);
        while (getchar() != '\n');  
    }
    printf("Goles de %s: ", equipo3);
    while (scanf("%d", &goles2) != 1 || !validar_goles(goles2)) {
        printf("Error: Ingrese un número válido para los goles de %s: ", equipo3);
        while (getchar() != '\n');  
    }

    if (goles1 > goles2) {
        puntos[0] += 3;
        goles_en_contra[2] += goles1;
    } else if (goles2 > goles1) {
        puntos[2] += 3;
        goles_en_contra[0] += goles2;
    } else {
        puntos[0] += 1;
        puntos[2] += 1;
    }
    goles[0] += goles1;
    goles[2] += goles2;

    printf("\nResumen de goles:\n");
    printf("%s - Goles a favor: %d, Goles en contra: %d\n", equipo1, goles[0], goles_en_contra[0]);
    printf("%s - Goles a favor: %d, Goles en contra: %d\n", equipo2, goles[1], goles_en_contra[1]);
    printf("%s - Goles a favor: %d, Goles en contra: %d\n", equipo3, goles[2], goles_en_contra[2]);
    printf("%s - Goles a favor: %d, Goles en contra: %d\n", equipo4, goles[3], goles_en_contra[3]);

    return 0;
}
