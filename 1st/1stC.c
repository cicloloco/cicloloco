/*
 ============================================================================
 Name        : 1stC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 
 Comandos UNIX relacionados:
 
* which gcc
* gcc --help
* man gcc
 
 */

#include <stdio.h>      /* puts() */
/**/
#include <stdlib.h>     /* EXIT_SUCCESS */
/**/

/*
 * Posible orden de compilación:
 * gcc -Wall -g 1stC.c -o exe1stC
 */
int main(void) {
	puts("!!!Hola Mundo!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
