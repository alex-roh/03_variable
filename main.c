#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x; // integer
	short y;
	float z;
	double w;
	
	printf("bytes of int : %d\n", sizeof(x));
	printf("bytes of short : %d\n", sizeof(y));	
	printf("bytes of float : %d\n", sizeof(z));
	printf("bytes of double : %d\n", sizeof(w));	
		
	return 0;

}
