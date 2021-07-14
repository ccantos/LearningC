/* exercise1-3.c 
 * 
 * Modifique el programa de conversión de temperaturas 
 * de modo que escriba un encabezado sobre la tabla.
 * 
 * Compilación:
 *      gcc exercise1-3.c -o exercise1-3
 */

#include<stdio.h>
/* impreme la tabla Fahrenheit-Celsius 
    para fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* límite inferior de la tabla de temperaturas */
    upper = 300;  /* límite superior */
    step = 20;   /* tamaño del incremento */

    fahr = lower;

    /* Imprimir un encabezado sobre la tabla */
    printf("Fahr\tCelsius\n");
    printf("---------------\n");

    while (fahr <= upper) {
        celsius = 5.0/9.0 * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
