//hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos la letra s no pare.


#include <stdio.h>

//mientras el bucle while se ejecuta mientras se cumple una condicion, el bucle do-while se ejecutara al menos una vez.

int main (){
	
	//declarmos un contador:

	
	/*
		int i;
	i = 10;
	
	while(i < 15){
		printf("Esto no se va a ejecutar nunca .\n");
		i++;
		
	}
	*/
	//ahora escribimos el bucle do-while:
	
	/*
	
	do{
		
		printf("esto se ejecuta al menos una vez .\n");
		i++;
		
		
	}while(i < 15);
	
	*/
	
	//vamos con el ejemplo:
	
	/*
	char c;
	
	do{
		
		printf("introduce una letra: ");
		fflush(stdin); //para que no se repita el printf que queda en el buffer
		scanf("%c", &c);
		
		
	}while(c != 's' && c != 'S');
	
	*/
	
	//ahora vamos con el ejercicio:
	
	
	//hacer un programa que lea dos numeros y muestr por pantalla todos los numeros
	//comprendidos entre esos dos numeros dados.
	int x, y, i;
	
	
	printf("introduce un numero: .\n");
	scanf("%i", &x);
	
	do{
			printf("introduce un numero mayor al anterior: .\n");
			scanf("%i", &y);
		
	}while(y < x);
	
	
	for(i = x +1; i < y; i++){
		
		printf("%i, ", i);
		
	}
	
	printf(".\n");
	
	system("pause");
	return 0;
	
}