//escribe un programa que calcule el factorial de un numero n entero positivo, leido por teclado.

//depurar es conocer el valor de cada variable en cada momento del programa.


#include <stdio.h>

int main(){
	
	int x, i, fact;
	fact = 1;
	
	printf("Introduce un numero: ");
	scanf("%i", &x);
	
	
	
	for(i = 1; i <= x; i++){
		
		fact = fact * i;	
		
	}
	printf("El factorial de x es: %i .\n", fact);
	
	system("pause");
	return 0;
	
}