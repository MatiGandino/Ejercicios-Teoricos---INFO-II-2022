#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	FILE *fptr;
	fptr = fopen("entero.txt", "w");
	
	if (fptr == NULL) {
		printf ("Error!");
		return -1;
	}
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	fprintf(fptr, "%d", num);
	fclose(fptr);
	
	
	return 0;
}

