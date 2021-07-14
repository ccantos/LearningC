# Capítulo 1. Introducción general


## ESTÁNDAR ANSI
---

Debido al rápido crecimiento del lenguaje C (años 90), fueron necesarios cambios del lenguaje. Además compiladores creados por personas que no estaban involucrados en el diseño del lenguaje propiciaron la necesidad de un estandarizar el lenguaje.

Sirve para aumentar la portabilidad del código entre los desarrolladores. [Más información sobre el estándar aquí](https://es.wikipedia.org/wiki/ANSI_C)

---
## Primeros pasos
---


El primer código es un "Hola mundo".

```c
#include <stdio.h>              // incluye la librería estándar de entrada/salida

main()                          // se define la función main que no recibe ningún valor como argumento.
{
    printf("Hola, mundo\n");    // llamamos a la función printf para poder pintar la secuencia de carácteres.
}                               // \n representa el carácter nueva línea
```

Podemos observar que:

* Todo programa en C necesita la función **main()** para funcionar
* La linea **#include <stdio.h>** indica al compilador que debe incluir la biblioteca estándar de entrada/salida y así podremos llamar a la función **printf()**. Vemos entonces como se incluyen las librerías.
* Como en todos los lenguajes de alto nivel a la hora de llamar funciones se respetará el formato _funcion(argumentos)_
* Vemos que C hace uso de las llaves **{}** en la declaración de funciones a diferencia que Python

---
### Algunos caracteres especiales
---

* **\a** ⟶ Carácter de alarma (Sonido de error/campana)
* **\r** ⟶ Retorno de carro (CR, carriage return)
* **\n** ⟶ Salto de línea (LF,line feed)
* **\ooo** ⟶ Número octal
* **\xhh** ⟶ Número hexadecimal
* **\b** ⟶ Retroceso
* **\t** ⟶ Tabulación horizontal
* **\v** ⟶ Tabulación vertical
* **\\** ⟶ Contrabarra
* **\f** ⟶ Salto de página
* **\\'** ⟶ Apóstrofe
* **\\"** ⟶ Comillas dobles
* **\0** ⟶ Fin de una cadena de caracteres

Declaración de constantes simbólicas:

```c
#define nombre texto_de_reemplazo
```

---
### Los warnings no impiden la ejecución 
---

Al compilar el compilador lanza el siguiente warning:

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

Se puede ver que no tiene el salto de línea al acabar el programa.
La barra invertida no se muestra.

---
## Ejercicios
---

1.1. Ejecute el programa "hola, mundo" en su sistema. Experimente con la omisión de partes del programa, para ver qué mensajes de error se obtienen.

1.2. Experimentar el descubrir qué pasa cuando la cadena del argumento de printf contiene \c, donde c es algún carácter no listado antes.

1.3. Modifique el programa de conversión de temperaturas de modo que escriba un encabezado sobre la tabla.

1.4. Escriba un programa que imprima la tabla correspondiente Celsius a Fahrenheit.

1.5. Modifique el programa de conversión de temperaturas de manera que escriba la tabla en orden inverso, esto es, desde 300 grados hasta 0.

1.6. Verifique que la expresión **getchar() ! = EOF** es 0 o 1.

1.7. Escriba un programa que imprima el valor de **EOF**.

1.8. Escriba un programa que cuente espacios en blanco, tabuladores y nuevas líneas.

1.9. Escriba un programa que copie su entrada a la salida, reemplazando cada cadena de uno o más blancos  por un solo blanco.

1.10. Escriba un programa que copie su entrada a la salida, reemplazando cada tabulación por \t, cada retroceso por \b y cada diagonal invertida por \\. Esto hace que las tabulaciones y los espacios sena visibles sin confusiones.

1.11. ¿Cómo probraría el programa para contar palabras? ¿Qué clase de entrada es la más conveniente para descubrir errores si éstos existen?

1.12. Escriba un programa que imprima su entrada una palabra por línea.

1.13. Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada. Es fácil dibujar el histograma con las barras horizontales; la orientación vertical es un reto más interesante.

1.14. Escriba un programa que imprima el histograma de las frecuencias con que se presentan diferentes caracteres leídos a la entrada.

1.15. Escriba de nuevo el programa de conversación de temperatura de la sección 1.2, de modo que utilice una función para la conversión.

1.16. Corrija la rutina principal del programa de la línea más larga de modo que imprima correctamente la longitud de líneas de entrada arbitrariamente largas, y tanto texto como sea posible.

1.17. Escriba un programa que imprima todas las líneas de entrada que sean mayores de 80 caracteres.

1.18. Escriba un programa que elimine los blancos y los tabuladores que estén al final de cada línea de entrada, y que borre completamente las líneas en blanco.

1.19. Escriba una función *reverse(s)* que invierta la cadena de caracteres s. Úsela para escribir un programa que invierta su entrada, línea a línea.

1.20. Escriba un programa *detab* que reemplace tabuladores de la entrada con el número apropiado de blancos para espaciar hasta el siguiente paro de tabulación. Considere un conjunto fijo de paros de tabulación, digamos cada _n_ columnas. ¿Debe ser _n_ una variable o un parámetro simbólico?

1.21. Escriba un programa *entab* que reemplace cadenas de blancos por el mínimo número de tabuladores y blancos para obtener el mismo espaciado. Considere los paros de tabulación de igual manera que para *detab*. Cuando un tabulador o un simple espacio en blanco fuese suficiente para alcanzar un paro de tabulación, ¿a cuál se le debe dar preferencia?

1.22. Escriba un programa para "doblar" líneas grandes de entrada en dos o más líneas más cortas después del último carácter no blanco que ocurra antes de n-ésima columna de entrada. Asegúrese de que su programa se comporte apropiadamente con líneas muy largas, y de que no hay blancos o tabuladores antes de la columna especificada.

1.23. Escriba un programa para eliminar todos los comentarios de un programa un C. No olvide manejar apropiadamente las cadenas entre comillas y las constantes de carácter. Los comentarios de C no se anidan.

1.24. Escriba un programa para revisar los errores de sintaxis rudimentarios de un programa en C, como paréntesis, llaves y corchetes no alineados. No olvide las comillas ni los apóstrofos, las secuencias de escape y los comentarios (Esta programa es díficil si se hace completamente general).





