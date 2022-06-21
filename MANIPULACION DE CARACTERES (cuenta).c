#include <stdio.h>

int contar (char *cadena, char l){
	int n = sizeof (cadena);
	int cuenta = 0;
	for (int i = 0; i < n; i ++){
		if (cadena[i] == l){
			cuenta ++;
		}
	}
	return cuenta;
}

int main(int argc, char *argv[]) {
	printf("%d\n", contar("ahsautaghsa", 'a');
	
	return 0;
}

