# Capítulo 2. Tipos, operadores y expresiones

## 2.1. Nombres de variables

* Las variables deben estar formadas de letras, números y el carácter "undescore"_
* El carácter _underscore_ debe evitarse como primer carácter ya que muchas librerías utilizan con frecuencia esta forma de nombrar las variables.
* De forma tradicional en C, las variables se usan letras minúsculas y para constantes letras mayúsculas.

```c
#define CONSTANTE   // definición de una constante
char soy_una_variable;       // definición de una variable
```

## 2.2. Tipos y tamaños de datos

Existen varios tipos de datos en C:

|char|int|float|double|long double|
|---|---|---|---|---|---|---|
|1 byte|2-4 bytes|4 bytes|8 bytes|10bytes|
|0⟷255/-128⟷127|-2,147,483,648⟷2,147,483,647|3.4E-38⟷3.4E+38|1.7E-308⟷1.7E+308|3.4E-4932⟷3.4E+4932|

Además, existen algunos _calificadores_ que se aplican a estos tipos básicos de datos. Tal como:

```c
short int sh;       // Se puede omitir "int" ya que el tipo short es un entero de 16 bits/2 bytes
long int counter;   // Se puede omitir "int" ya que el tipo long es un entero de 32 bits/4 bytes
                    // "int" puede ser de 16 o 32 bits (el compilador dedice el tamaño)
```

También existen los calificadores "signed" y "unsigned" puede aplicarse a cualquier entero o char.

* **unsigned** &#8594; siempre positivo o cero (obedecen las leyes de la aritmética módulo 2<sup>n</sup> donde n es el número de bits. Ej: unsigned char tiene rango: [0 -- 255]
* **signed** &#8594; al contrario que el anterior, aqui tenemos números negativos de rango: [-128 -- 127].

Al igual que con _int_ el compilador decide si el entero tiene signo o no, con el caso de _char_ pasa exactamente lo mismo. Los caracteres que se pueden imprimir son siempre positivos.

Las librerías _limits.h_ y _float.h_ contiene constantes ya declaradas con los valores sobre los tamaños, junto con otras propiedades de la maquina y del compilador.

## 2.3. Constantes

## 2.4. Declaraciones

## 2.5. Operadores aritméticos

## 2.6. Operadores de relación y lógicos

## 2.7. Conversiones de tipo

## 2.8. Operadores de incremento y decremento

## 2.9. Operadores para manejo de bits

## 2.10. Operadores de asignación y expresiones

## 2.11. Expresiones condicionales

## 2.12. Precedencia y orden de evaluación

## Ejercicios

### 2.1. Escribir un programa para determinar los rangos de variables char, short, int, long, tanto signed como unsigned, imprmiendo los valores apropiados de los headers estándar y por cálculo directo. Es más difícil si los calcula: determine los rangos de los varios tipos de punto flotante.