#include <stdio.h>

/*typedef*/ struct punto2D {
	float x;
	float y;
} Punto2D;



float suma (Punto2D *p1, Punto2D *p2, Punto2D *p3){
	p3->x = p1->x + p2->x; 
	p3->y = p1->y + p2->y; 
	
	return(0);
} 
	
int main() {
	Punto2D puntos[3];

	printf ("Introducir el valor de X del 1er vector: ");
	scanf ("%f", &puntos[0].x);
	printf ("           el valor de Y del 1er vector: ");
	scanf ("%f", &puntos[0].y);
	printf ("           el valor de X del 2do vector: ");
	scanf ("%f", &puntos[1].x);
	printf ("           el valor de Y del 2do vector: ");
	scanf ("%f", &puntos[1].y);
	
	
	suma (&puntos[0], &puntos[1], &puntos[2]);
	
	printf ("\n\nVector suma = (%.1f , %.1f)\n", puntos[2].x, puntos[2].y);
	
	return 0;
}
	
	
