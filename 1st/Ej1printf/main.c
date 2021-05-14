/*
 * main.c
 *
 *  Created on: 21/09/2015
 *      Author: santiago
 */

#define OK 0

#include <stdio.h>
#include <stdlib.h>

int y; /* Global. Conocida tanto por main() como por MiFuncion() */

void MiFuncion (void);

/*
 * Función sin argumentos ni valor de retorno
 */
void MiFuncion (void)
{
	int x; /* Local a MiFuncion() */
	x = 3;

	/* Visualiza x=3, y=100 */
	printf ("\n\tMiFuncion():\tx=%d, y=%d\n", x, y);
	printf ("\tMiFuncion():\tAddr x = %p, Addr y = %p\n", &x, &y);
}
// Qué valores visualizan los printf ??
// man 3 printf !!!

int main(int argc, char * argv[]) {
	int x; /* Esta x es local a main () */

	y = 100;	/* definición de variable (pre)declarada globalmente */
	x = 1;

	printf ("main():\tAddr x = %p, Addr y = %p\n", &x, &y);
	/* Visualiza x=1, y=100 */
	printf ("main():\tx=%d, y=%d\n", x, y);
	printf ("\n--------------------\n");

	{ /* Comienza bloque */
		int x; /* Esta x es local al bloque */
		x = 2;
		/* Visualiza x=2, y=100 */
		printf ("main():\tx=%d, y=%d\n", x, y);
		/* Visualiza x=3, y=100 */
		MiFuncion ();
		/* Visualiza x=2, y=100 */
		printf ("\nmain():\tx=%d, y=%d\n", x, y);
	} /* Fin del bloque */

	printf ("--------------------\n");

	/* Visualiza x=1, y=100 */
	printf ("\nmain():\tx=%d, y=%d\n", x, y);

	/* OJO con el operador de asignación */
	int z = 0;

	// OJO al aviso de Warning
	if (x = 100)	// No debería cumplirse, x es 1
		printf ("\nmain():\tz=%d\n", z);

	printf ("\n--------------------\n");
	// Tabla ASCII http://ascii.cl/es/
	x = 65;
	printf ("\nmain():\t(int) x=%d, (unsigned char) x=%c\n", x, x);
	// Casting, conversión de tipos
	x = (unsigned int) 'B';
	printf ("\nmain():\t(int) x=%d, (unsigned char) x=%c\n", x, x);

	exit(OK);
}

