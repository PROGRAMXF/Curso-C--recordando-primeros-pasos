//hacer con funciones void el factorial de un número

//las funciones void no devuelven nada, no tienen return

//con las funciones que devuelven algo, solo podemos devolver un parametro. Para que nos devuelva mas de un parametro utilizamos los punteros.S

#include <stdio.h>



void factorial();

int main (){
	
	factorial();
	
	
	
	
	system("pause");
	return 0;
}

void factorial(){
	
	int x, aux;
	int i; //contador del bucle
	aux = 1;
	
	printf("Introduce un numero entero: .\n");
	scanf("%i", &x);
	
	for(i = 1; i <= x; i++){
		
		aux *= i;
		
	}
	
	printf("El factorial del numero %i es: %i .\n", x, aux);
}