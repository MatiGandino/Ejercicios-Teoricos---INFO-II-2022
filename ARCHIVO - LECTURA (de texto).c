#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	FILE *fptr;
	
	if ((fptr = fopen("entero.txt", "r")) == NULL) {
			printf	 ("Error abriendo el archivo.");
	}
	
	fscanf (fptr, "%d", &num);
	
	printf("Valor del entero: %d\n", num);
	fclose(fptr);
	
	
	return 0;
}

