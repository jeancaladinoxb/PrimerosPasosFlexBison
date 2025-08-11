#include <stdio.h>
#include <ctype.h>
#include <time.h>

int main (){

char caracter;
int  palabra = 0;
int  contador_palabras= 0;
int  contador_lineas = 0;
int  contador_caracteres =0;
clock_t inicio, fin;
double tiempo_total;

inicio = clock ();

printf("Escribe una frase, oración o texto):\n");

while ((caracter = getchar()) !=EOF){
    contador_caracteres++;
    if ( caracter == '\n'){
         contador_lineas++;
  }
    if (isspace(caracter)){
        palabra = 0;
          } else if (palabra==0){
            palabra = 1;
            contador_palabras++;
          }
   }

fin = clock ();

tiempo_total = (double) (fin - inicio) / CLOCKS_PER_SEC; 

printf("El número de palabras es: %d\n", contador_palabras);
printf("El número de lineas es: %d\n", contador_lineas);
printf("El número de caracteres es: %d\n", contador_caracteres);
printf("Tiempo total empleado es: %2f segundos\n", tiempo_total);
return 0;
}
