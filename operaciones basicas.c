//ampliando conocimientos sobre asignacion y operaciones basicas

#include <stdio.h>

//para otras operaciones debemos cargar otras librerias:

#include <math.h>


int main(){

	int x, y;
	
	x = 10;
	y = 2;
	
	x = x + y; //este metodo de asignar una operacion se puede reemplazar por:
	
	x += y; //es lo mismo que lo anterior
	
	printf("el valor de x es: %i.\n", x);
	
	x = x - y;
	//x -= y;
	
	printf("el valor de x es: %i.\n", x);
	
	x = x * y;
	//x *= y;
	
	printf("el valor de x es: %i.\n", x);
	
	x  = x / y;
	//x /= y;
	
	printf("el valor de x es: %i.\n", x);
	
	//x = x % y; //el resto de dividir 10 entre 2 es 0
	
	//printf("el valor de x es: %i.\n", x);
	
	x = pow (x, y); // x esta elevado a la y
	
	printf("el valor de x es: %i.\n", x);
	
	x = sqrt (x);
	
	printf("el valor de x es: %i.\n", x);
	
	
	
	//operadores de incremento:
	x++;
	
	printf("el valor de x es: %i.\n", x);
	
	//decremento:
	x--;
	
	printf("el valor de x es: %i.\n", x);
	
	
	
	system("pause");
	return 0;

}