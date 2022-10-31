#include <stdio.h>
#include <stdlib.h>

int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);


int main (void)
{
	// array of function pointers
	// read user input
	// while user_input != 4
	// evaulate array of function pointers[user_input]
	int (*func_arr[])(int a, int b) = {add, subtract, multiply, divide};
	int a, b;
	a = 6;
	b = 3;
	int user_op;
	user_op = -1;
	
	printf("Operand 'a': %d | Operand 'b': %d\n", a, b);
	printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
	scanf("%d", &user_op);
	while (user_op != 4) {
		printf("x = %d\n", (*func_arr[user_op])(a, b));
		printf("Operand 'a': %d | Operand 'b': %d\n", a, b);
		printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
		scanf("%d", &user_op);
	}
	
	return 0;
}

int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }