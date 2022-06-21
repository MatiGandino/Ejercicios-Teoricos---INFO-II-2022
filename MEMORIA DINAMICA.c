#include <stdio.h>
#include <stdlib.h>

	

int main(int argc, char *argv[]) {
	
	int *edad = malloc (sizeof(int));
	float *legajo = malloc(sizeof(float));
	double *promedio = malloc(sizeof(double));
	
	scanf ("%d", edad);
	scanf ("%f", legajo);
	scanf ("%lf", promedio);
	
	printf("\n\n");
	printf("%d", *edad);
	printf("\n%f", *legajo);
	printf("\n%lf", *promedio);
	
	free(edad);
	free(legajo);
	free(promedio);
	
	return 0;
}

