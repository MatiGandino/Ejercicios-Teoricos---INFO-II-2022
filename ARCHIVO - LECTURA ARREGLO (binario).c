//  Sensor de temperatura que reaiza mediones cada una hora.
//  Programa que lee los datos de un dia, promedio, el maximo y el minimo.


#include <stdio.h>

int main(int argc, char *argv[]) {
	const int n = 24;
	int temp[n];
	int mean, max = 0, min = 100, sum = 0;
	FILE *fpt;
	
	fpt = fopen("temperatura.bin", "r");
	
	if (fpt == NULL){
		printf("No se pudo abrir el archivo");
		return -1;
	}
	
	fread(temp, sizeof(int), n, fpt);
	fclose(fpt);
	
	for (int i = 0; i < n-1; i++) {
		printf ("%d, ", temp[i]);
		sum += temp[i];
		max = temp[i] > max ? temp[i] : max;
		min = temp[i] < min ? temp[i] : min;
	}
	
	mean = sum / n;
	
	printf("\n");
	printf("mean = %d, max = %d, min = %d\n", mean, max, min);
	
	
	return 0;
}

