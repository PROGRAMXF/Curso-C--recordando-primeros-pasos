// calcular el factorial de dos numeros con una funcion


#include <stdio.h>

/*
int factorial(int a);

int main(){
	
	
	int x, y, fact1, fact2;
	
	printf("Introduce el primer numero para el factorial: .\n");
	scanf("%i", &x);
	
	printf("Introduce el segundo numero para el factorial: .\n");
	scanf("%i", &y);
	
	fact1 = factorial(x);
	fact2 = factorial(y);
	
	printf("El factorial de x es: %i y el factorial de y es: %i  .\n.\n", fact1, fact2);
	
	system("pause");
	return 0;
}

int factorial(int a){
	
	int i; //contador para el bucle
	int aux;
	
	aux = 1;
	
	for(i = 1; i <= a; i++){
		aux += i;
		
	}	
	
	return aux;
}


*/

//comprobar si dos numeros son primos con una funcion:

int primo(int a);

int main(){
	
	int x, y, prim1, prim2;
	
	printf("Ingrese el primer numero: .\n");
	scanf("%i", &x);
	
	printf("Ingrese el primer numero: .\n");
	scanf("%i", &y);
	
	prim1 = primo(x);
	prim2 = primo(y);	
	
	if(prim1 == 0){
		
		printf("El numero %i  es primo .\n\n", x);
	}
	else{
		
		printf("El numero %i  no es primo .\n\n", x);
	}
	
	if(prim2 == 0){
		
		printf("El numero %i  es primo .\n\n", y);
	}
	else{
		
		printf("El numero %i  no es primo .\n\n", y);
	}
	
	system("pause");
	return 0;
}

int primo(int a){
	
	int i, j, aux;
	
	j = 0;
	
	for(i = 2; i < a && j == 0; i++){
		
		aux = a %i;
		
		if(aux == 0){
			
			j = 1;
		}
		
	}	
	
	return j;
}