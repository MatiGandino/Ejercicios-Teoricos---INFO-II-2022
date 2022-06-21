#include <stdio.h>

int isupper(int c){
	if (c >= 64 && c <= 90){
		return 1;
	}
	
	else {
		return 0;
	}
}
	
int main(int argc, char *argv[]) {
		printf ("%d\n",isupper('r'));
		printf ("%d\n",isupper('T'));
		return 0;
}
	
	
