//  Sensor de temperatura que reaiza mediones cada una hora.
//  Programa que guarda los datos de un dia en un archivo binario.


#include <stdio.h>

int main(int argc, char *argv[]) {
	const int n = 24;
	int temp[] = {10, 9, 9, 8, 8, 7, 7,
					7, 9, 11, 13, 15, 16, 17, 17,
					17, 17, 15, 13, 10, 9, 8, 8};
	
	FILE *fpt;
	fpt = fopen ("Temperatura.bin", "w");
	
	if(fpt == NULL){
		printf ("No se pudo abrir el archivo");
		return -1;
	}
	
	fwrite (temp, sizeof(int), n, fpt);
	fclose(fpt);
	
	
	
	return 0;
}

