#include <stdio.h>

union prob_ac {
	struct stru_ac {
		int ac, gir;
	}N;
	int ar[2];
};


void asignar_1 (union prob_ac *p) {
	printf("Introducir valor del acelerometro: ");
	scanf ("%d", &p->N.ac);
	printf("Introducir valor del giroscopio: ");
	scanf ("%d", &p->N.gir);
}

void imprimir_1(union prob_ac *p) {
	printf ("\nacelerometro => %d \ngiroscopio => %d\n", p->N.ac, p->N.gir);
}

void asignar_2 (union prob_ac *p) {
	printf("\n\nIntroducir primer valor del arreglo: ");
	scanf ("%d", &p->ar[0]);
	printf("Introducir segundo valor del arreglo: ");
	scanf ("%d", &p->ar[1]);
}

int imprimir_2 (union prob_ac *p) {
	printf ("\nValores del arreglo: {%d , %d}", p->ar[0], p->ar[1]);
}

int main() {
	union prob_ac u;// = init(0, 0);
	asignar_1 (&u);
	imprimir_1 (&u);
	asignar_2 (&u);
	imprimir_2 (&u);
	return 0;
}

