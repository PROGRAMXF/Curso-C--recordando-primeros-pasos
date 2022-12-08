//hacer un programa que lea dos numeros y mueste por pantalla todos los numeros
//comprendidos entre ambos numeros.


#include <stdio.h>


int main(){
	
	int x, y;
	//declaramos un contador:
	int i;
	
	printf("ingresar un numero para x: ");
	scanf("%i", &x);
	
	printf("ingresar un numero para y: ");
	scanf("%i", &y);
	
	
	//bucle for
	
	for(i = x + 1; i < y; i++){
		
		printf("%i, ", i);
		i++;
	}
	printf(".\n");
	
	//bucle while:
	
	i = x + 1;
	
	while(i < y){
		
		printf("%i, ", i);	
		i++;
		
	}
	printf(".\n");
	
	
	
	system("pause");
	return 0;
}