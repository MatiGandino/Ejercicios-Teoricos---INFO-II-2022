#include <stdio.h>

int main(int argc, char *argv[]) {
	int a = 8, b, c;
	b = a << 1; //una vez multiplicado por 2
	c = a >> 1;	//una vez dividido por 2
	printf ("%d    %d", b, c);
	b = a << 2; //dos veces multiplicado por 2
	c = a >> 2;	//dos veces dividido por 2
	printf ("\n%d    %d", b, c);
	return 0;
}

