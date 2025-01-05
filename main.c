#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, pares=0, impares=0;
   
    
        printf("El programa va a contar cuantos numeros pares/impares obtuvo hasta que ingrese un numero negativo\n");
    do
    {
        printf("Ingrese un numero: \n");
        printf(">>");
        scanf("%d", &n);

        if (n>0)
        {

            if (n % 2 == 0)
            {
                printf("El numero es par\n");
                pares++;
            }
            else 
            {
                printf("El nummero es impar\n");
                impares++;
            }
            
        }

    } while (n>0);
    printf("Cantidad total de numeros pares: %d\n", pares);
    printf("Cantidad total de numeros impares: %d\n", impares);

    return 0;
}