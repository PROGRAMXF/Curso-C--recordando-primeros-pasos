//operaciones con variables

#include <stdio.h>


//macro
#define PI 3.1416


int main(){
	float x;
	int y;
	
	x = PI;
	
	printf("el valor de pi es: %f.\n", x);
	
	printf("introduce un valor para y: ");
	scanf("%i" ,&y); //introducimos un valor por teclado
	printf("el valor de y es: %i", y);
	
	
	x = x *y;
	
	printf("el valor el producto de x es: %i", x);
	
	system('pause');
	return 0;
}