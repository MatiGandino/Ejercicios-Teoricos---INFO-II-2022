// Sensor de temperatura, humedad y velocidad del viento, cada una hora.
// Estructura donde guarda los datos.
// Programa que guarda los datos de un dia en un archivo binario.


#include <stdio.h>

struct sensor{
	int temperatura;
	int humedad;
	int viento;
};


int main(int argc, char *argv[]) {
	const int n = 24;
	struct sensor mediciones[] = {{10, 70, 17}, {9, 72, 17},
	{9, 74, 16}, {9, 76, 14}, {8, 78, 13}, {8, 79, 13},
	{7, 80, 13}, {7, 82, 12}, {7, 84, 11}, {9, 77, 13},
	{11, 69, 14}, {13, 60, 15}, {15, 55, 15}, {16, 51, 14},
	{17, 47, 14}, {17, 48, 13}, {17, 44, 12}, {17, 45, 10},
	{15, 53, 8}, {13, 64, 5}, {10, 74, 3}, {9, 80, 3},
	{8, 84, 3}, {8, 85, 4}};
	
	FILE *fpt;
	fpt = fopen("estacion.bin", "w");
	
	if (fpt == NULL){
		printf("No se puede abrir el archivo");
		return -1;
	}
	
	fwrite (mediciones, sizeof(struct sensor), n, fpt);
	fclose (fpt);
	
	return 0;
}

