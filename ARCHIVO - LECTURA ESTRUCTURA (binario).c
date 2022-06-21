// Sensor de temperatura, humedad y velocidad del viento, cada una hora.
// Estructura donde guarda los datos.
// Programa que lea los datos de un dia y los promedios.


#include <stdio.h>

struct sensor {
	int temperatura;
	int humedad;
	int viento;
};

int main(int argc, char *argv[]) {
	const int n = 24;
	struct sensor mediciones[n];
	int sum_temperatura = 0, sum_humedad = 0, sum_viento = 0;
	
	FILE *fpt;
	fpt = fopen ("estacion.bin", "r");
	
	if (fpt == NULL){
		printf ("No se pudo abrir el archivo");
		return -1;
	}
	
	fread (mediciones, sizeof (struct sensor), n, fpt);
	fclose (fpt);
	
	for (int i = 0; i < n; i++) {
		sum_temperatura += mediciones[i].temperatura;
		sum_humedad += mediciones[i].humedad;
		sum_viento += mediciones[i].viento;
	}
	
	printf ("Temperatura = %d, humedad = %d, vel. viento = %d\n", sum_temperatura/n, sum_humedad/n, sum_viento/n);
	
	
	return 0;
}

