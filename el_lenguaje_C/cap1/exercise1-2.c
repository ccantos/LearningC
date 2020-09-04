/* exercise1-2.c 
 * Experimentar el descubrir qué pasa cuando la cadena
 * del argumento de printf contiene \c, 
 * donde c es algún carácter no listado antes.
 * Compilación:
 *      gcc exercise1-2.c -o exercise1-2
 * 
 */

#include<stdio.h>

void main()
{
    printf("c: \c");
}
