#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	char *cadena = malloc(20 * sizeof(char));
	
	gets(cadena);
	
	printf("\n%s", cadena);
	
	free(cadena);
	
	
	return 0;
}

