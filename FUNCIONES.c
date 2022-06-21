#include <stdio.h>

int op (float arre[], int tamanio, float *sum, float *prom){
	for (int i=0; i<5; i++){
		*sum += arre[i]; }
	
	*prom = *sum / tamanio;
	
return 0;}

	
int main(int argc, char *argv[]) {
	float arreglo [5], promedio =0, suma =0;
	
	printf ("5 valores:\n");
	
	for (int i = 0; i<5; i++){
		printf ("          Introducir el valor Nº%i:", i+1);
		scanf ("%f", &arreglo[i]);
	}
	
	op (arreglo, 5, &suma, &promedio);
	
	printf ("\n\nSuma = %.2f, Promedio = %.2f\n\n", suma, promedio);
	
	return 0;
}

