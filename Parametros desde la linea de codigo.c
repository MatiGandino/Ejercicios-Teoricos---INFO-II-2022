#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float resultado = 0;
	
	printf ("%s\n", argv[1]);
	printf ("%s\n", argv[2]);
	printf ("%s", argv[3]);
	
	float num1 = atof(argv[1]);
	float num2 = atof(argv[3]);
	
	if (argv[2] == '+'){
		resultado = num1 + num2; }
	
	else if (argv[2] == '-'){
		resultado = num1 - num2; }
	
	else if (argv[2] == '*'){
		resultado = num1 * num2; }
	
	else if (argv[2] == '/'){
		resultado = num1 / num2; }
	
	
	
	printf("%f", resultado);
	
	
	return 0;
}

