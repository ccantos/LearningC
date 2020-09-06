/* exercise1-4.c
 * 
 * Escriba un programa que imprima 
 * la tabla correspondiente Celsius a Fahrenheit. 
 * 
 * Compilación:
 *      gcc exercise1-4.c -o exercise1-4
 */

#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* límite inferior de la tabla de temperaturas */
    upper = 300;  /* límite superior */
    step = 20;   /* tamaño del incremento */

    celsius = lower;

    /* Imprimir un encabezado sobre la tabla */
    printf("Celsius\tFahr\n");
    printf("---------------\n");

    while (celsius <= upper) {
        fahr = (9.0/5.0 * celsius) + 32.0f;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
