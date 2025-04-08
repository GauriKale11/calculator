#include <stdio.h>

int main() {
	printf("====Calculator====\n");
	printf("Enter two numbers\n");
	double a, b;
	scanf(" %f %f ", &a, &b);
	printf("====Operation====\n");
	printf("1.add\n");
	printf("2.multiply\n");
	printf("3.subtract\n");
	printf("4.divide\n");
	printf("5.module\n");
	printf("option : ");
	int op;
	scanf(" %d ", &op);
	
	switch(op) {
		case 1 :
			printf("Addition is %f\n", a+b);
		break;
		
		case 2 :
			printf("Multiplication is %f\n", a*b);
		break;
		
		case 3 :
			printf("Subtraction is %f\n", a-b);
		break;
		
		case 4 :
			printf("Division is %f\n", a/b);
		break;
		
		case 5 :
			printf("Mod is %f\n", a%b);
		break;
		
		default :
			printf("invalid operation\n");
		break;
	}
	
	return 0;
}
