#include <stdio.h>
#include <math.h>

struct st_coor3D {
	int x, y, z; };


union un_coor3D {
	struct st_coor3D N;
	int coor[3];
}punto;

union un_coor3D init(int x, int y, int z){
	union un_coor3D res = {x, y, z};
	return res;
}
	
void moduloestruc (union un_coor3D *p){
	float mod;
	mod = sqrt( pow(p->N.x, 2) + pow(p->N.y, 2) + pow(p->N.z, 2) );
	printf ("\nEl modulo del vector con estructura de coordenada es %f", mod);
}

void moduloarreglo(union un_coor3D *p){
	float suma = 0, mod=0;
	for (int i = 0; i<3; i++) {
		suma = suma + pow(p->coor[i], 2); }
	mod = sqrt(suma);
	printf ("\nEl modulo del vector con arreglo es %f", mod);
}
	
void imprimir(union un_coor3D *p) {
	printf ("(x, y, z) => (%d, %d, %d)\n", p->N.x, p->N.y, p->N.z);
}

int main() {
	union un_coor3D u = init(1, 2, 3);
	imprimir(&u);
	moduloestruc(&u);
	moduloarreglo(&u);
	
	return 0;
}

