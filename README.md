# Ejemplos y Ejercicios Flex y Bison

Este proyecto contiene ejemplos básico de uso de Flex y Bison para análisis léxico y sintáctico.

Nombre: Jeancarlo Arturo Rodriguez Ladino

## Contenido 

- Ejemplo 01: En el ejemplo 01 se observa un programa básico hecho con Flex y C con el objetivo de permitirle al usuario ingresar por consola alguna frase, número o letra y este le devuelva al finalizar un conteo de lineas usadas, palabras y caracteres.

- Ejemplo 02: Para este ejemplo se implementó el uso de flex con el reconocimiento de patrones para un traductor de inglés americano a británico, el cual busca patrones que coincidan con la información por default del sistema y la traduzca una vez un usuario la consulte por entrada de consola.

- Ejemplo 03: En este ejemplo 03 se desarrolló un programa usando flex el cual tiene la habilidad de reconocer tokens básicos para una calculadora, es decir este programa sigue patrones para reconocer signos aritméticos como suma, resta, multiplicación y división.

- Ejemplo 04: Para el cuarto ejemplo se implementó un programa basado en flex el cual es capaz de reconocer token con valor número desde el número 258 en adelante, para reconocer que valor numérico tiene cada token como seria suma, resta, multiplicación o división.

- Ejemplo 05: En este apartado número 05 se implementa un programa basado en bison para interpretar expresiones aritméticas manteniendo precedencia de operadores y mostraron resultados línea a línea

- Ejemplo 06: Para el apartado 06 se hace una implementación del ejemplo 4 y ejemplo 5 con el fin de comprender como flex y bison trabajan juntos para poder hacer funcionar un calculadora básica en donde flex le pasa los tokens a bison para que este haga un análisis sintáctico y resuelva el objetivo del ejercicio. 

## Ejercicios

1. No se puede porque arroja un error de syntax al momento de comentar en consola ya que el programa no cuenta con una función para comentarlo o ignorar dichos comentarios por usuario

2. Para este apartado se agregó un nuevo patron al código de flex el cual permite el reconocimiento de números decimales como lo explica la regla, edición se agrega una función adicional a bison y es que muestre por salida de consola los números decimales y hexadecimales.

3. Para el ejercicio número 3 se implemento el uso simultaneo dela barra "|" que debe representar por si solo el uso de Bit a Bit y el valor absoluto en la calculadora.

4. La versión escrita manualmente del escáner no coincide plenamente con la generada por flex, ya que presenta varias diferencias en su funcionamiento. Para empezar, el carácter "|" se interpreta exclusivamente como operador de valor absoluto (ABS), sin diferenciarlo de un posible operador OR bit a bit, lo que limita la gramática si se desean ambos usos. En cuanto a los comentarios, solo admite los que comienzan con "//" y llegan hasta el salto de línea, sin soporte para los comentarios en bloque del tipo "/* ... */". El tratamiento de espacios y tabulaciones también es menos eficiente, ya que procesa cada carácter individualmente en lugar de ignorar secuencias completas como lo hace flex. En lo referente a los números, la implementación manual reconoce únicamente enteros positivos simples, sin soporte para decimales, signos o notación científica. Por último, el control del fin de archivo se realiza mediante una variable auxiliar (seeneof), en lugar del manejo automático que ofrece flex. En conjunto, estas diferencias hacen que el escáner manual sea menos flexible y tenga una cobertura más limitada que el generado por flex.

5. Flex no es adecuado para lenguajes cuya tokenización no puede describirse únicamente con expresiones regulares y requiere contexto, anidamiento arbitrario o reglas dinámicas. En casos como Python, Haskell o YAML, donde la indentación forma parte de la sintaxis, el lexer debe mantener una pila de niveles, algo difícil de expresar en Flex. En OCaml o en lenguajes con comentarios anidados sin límite, las expresiones regulares no pueden contar la profundidad, lo que obliga a programar lógica manual compleja. En C o C++, la clasificación de identificadores como tipos o variables depende de la tabla de símbolos, lo que rompe la separación entre análisis léxico y sintáctico. También presenta problemas en lenguajes con gramática léxica cambiante por macros o sintaxis definida por el usuario, como Racket, o con soporte avanzado de Unicode, donde la validez de un identificador depende de propiedades y normalización de caracteres. En todos estos casos, un lexer generado por Flex sería difícil de mantener y menos fiable que un escáner manual o un parser que integre el análisis léxico y sintáctico






