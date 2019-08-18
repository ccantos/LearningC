# Capítulo 1. Introducción general

## ¿QUÉ ES EL ESTÁNDAR ANSI?

Debido al rápido crecimiento del lenguaje C, cambios del lenguaje en el tiempo y compiladores creados por personas que no estaban involucrados en el diseñó del lenguaje surgió la necesidad de un estándar en el lenguaje.

Sirve para aumentar la portabilidad del código entre los desarrolladores. [Más información sobre el estándar aquí](https://es.wikipedia.org/wiki/ANSI_C)

## Primeros pasos

El primero código es un "Hola mundo" como siempre.

```c
#include <stdio.h>              # incluye la librería estándar de entrada/salida 

main()                          # se define la función main que no recibe ningún valor como argumento.
{
    printf("hola, mundo\n")     # llamamos a la función printf para poder pintar la secuencia de carácteres.
                                # \n representa el carácter nueva línea
}
```

Podemos observar que:

* Todo programa en C necesita la función **main()** para funcionar 
* La linea **#include <stdio.h>** indica al compilador que debe incluir la biblioteca estándar de entrada/salida y así podremos llamar a la función **printf()**. Vemos entonces como se incluyen las librerías.
* Como en todos los lenguajes de alto nivel a la hora de llamar funciones se respetará el formato _funcion(argumentos)_
* Vemos que C hace uso de las llaves **{}** en la declaración de funciones a diferencia que Python
