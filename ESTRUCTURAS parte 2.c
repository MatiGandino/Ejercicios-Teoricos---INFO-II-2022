#include <stdio.h>

typedef struct punto2D {
	float x;
	float y;
} Punto2D;


Punto2D sumaPunto2D (Punto2D puntos[], int dimension){
	Punto2D puntoSuma = {0, 0};
	for (int i = 0; i < dimension; i++){
		puntoSuma.x += puntos[i].x;
		puntoSuma.y += puntos[i].y;
	}
	return puntoSuma;
}

	
int main() {
	Punto2D puntos[3] = {{1,1}, {2,2}, {3,3}};
	Punto2D resultado = sumaPunto2D (puntos, 3);
	
	printf ("Vector suma = (%.1f , %.1f)\n", resultado.x, resultado.y);
	
	return 0;
}



