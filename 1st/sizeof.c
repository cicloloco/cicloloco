#include <stdio.h>
#include <float.h>

int main() {
	printf("Memoria requerida (bytes) por el tipo float : %d \n", (int) sizeof(float));
	printf("Mínimo valor float positivo: %E\n", FLT_MIN );
	printf("Máximo valor float positivo: %E\n", FLT_MAX );
	printf("Precisión: %d\n", FLT_DIG );

	return 0;
}
