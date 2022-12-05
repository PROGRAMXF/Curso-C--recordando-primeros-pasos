//metodo de la burbuja

//intercambiar los valores de dos numeros enteros introducidos por teclado

#include <stdio.h>

int main(){
	
	int x, y, aux;//el metodo de la burbuja nos permite crear una variable auxiliar
	
	
	printf("el valor de x es: ", x);
	scanf("%i", &x);

	printf("el valor de y es: ", y);
	scanf("%i", &y);
	
	aux = x;
	x = y;
	y = aux;
	
	
	printf("el valor de x es: %i.\n",x);
	printf("el valor de y es: %i.\n", y);
	
	system("pause");
	return 0;
	
}