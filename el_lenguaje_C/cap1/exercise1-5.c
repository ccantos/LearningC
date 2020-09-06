/* exercise1-5.c 
 * 
 * Modifique el programa de conversión de temperaturas
 * de manera que escriba la tabla en orden inverso,
 * esto es, desde 300 grados hasta 0.
 * 
 * Compilación:
 *      gcc exercise1-5.c -o exercise1-5
 */

#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 300;  /* límite inferior de la tabla de temperaturas */
    upper = 0;  /* límite superior */
    step = 20;   /* tamaño del incremento */

    celsius = lower;

    /* Imprimir un encabezado sobre la tabla */
    printf("Celsius\tFahr\n");
    printf("---------------\n");

    while (celsius => lower) {
        fahr = (9.0/5.0 * celsius) + 32.0f;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }

    return 0;
}
