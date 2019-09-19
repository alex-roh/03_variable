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
	
	int input_int;
	float input_float;
	
	printf("Please type an integer: ");
	scanf("%d", &input_int);
	
	printf("Please type a float: ");
	scanf("%f", &input_float);
	
	printf("Your integer is %d and your float is %f", input_int, input_float);
		
	return 0;

}
