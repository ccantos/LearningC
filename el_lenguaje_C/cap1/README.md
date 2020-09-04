# Capítulo 1. Introducción general

## ESTÁNDAR ANSI

Debido al rápido crecimiento del lenguaje C, cambios del lenguaje en el tiempo y compiladores creados por personas que no estaban involucrados en el diseño del lenguaje surgió la necesidad de un estándar en el lenguaje.

Sirve para aumentar la portabilidad del código entre los desarrolladores. [Más información sobre el estándar aquí](https://es.wikipedia.org/wiki/ANSI_C)

## Primeros pasos

El primer código es un "Hola mundo".

```c
#include <stdio.h>              # incluye la librería estándar de entrada/salida

main()                          # se define la función main que no recibe ningún valor como argumento.
{
    printf("Hola, mundo\n");    # llamamos a la función printf para poder pintar la secuencia de carácteres.
}                               # \n representa el carácter nueva línea
```

Podemos observar que:

* Todo programa en C necesita la función **main()** para funcionar
* La linea **#include <stdio.h>** indica al compilador que debe incluir la biblioteca estándar de entrada/salida y así podremos llamar a la función **printf()**. Vemos entonces como se incluyen las librerías.
* Como en todos los lenguajes de alto nivel a la hora de llamar funciones se respetará el formato _funcion(argumentos)_
* Vemos que C hace uso de las llaves **{}** en la declaración de funciones a diferencia que Python

## Ejercicios

### 1.1 Ejecute el programa "hola, mundo" en su sistema. Experimente con la omisión de partes del programa, para ver qué mensajes de error se obtienen

### 1.2 Experimentar el descubrir qué pasa cuando la cadena del argumento de printf contiene \c, donde c es algún carácter no listado antes

Al compilar se obtiene el compilador lanza el siguiente warning:

```bash
exercise1-2.c: In function ‘main’:
exercise1-2.c:14:12: warning: unknown escape sequence: '\c'
   14 |     printf("c: \c");
      |            ^~~~~~~
```

El compilador se queja de que no entiende la secuencia de escape '\c'
Es posible ejecutar el programa ya que solo trata de un warning.

```bash
$> ./exercise1-2
c: c$>
```

Se puede ver que ahora no se tiene el salto de línea al acabar el programa.
La barra invertida no se muestra.
