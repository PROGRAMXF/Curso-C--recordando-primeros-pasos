//hacer un programa que lea un numero entre 1 y 4  y devuelva el dia de la semana  correspondiente. Para lunes: 1, para martes: 2, etc...


#include <stdio.h>


int main(){
	
	int x;
	
	printf("Ingresar un numero:  ");
	scanf("%i", &x);
	
	/*
	if(x == 1){
		printf("Hoy es Lunes .\n");
	}else if(x == 2){
		printf("Hoy es Martes .\n");
	}else if(x == 3){
		printf("Hoy es Miercoles .\n");
	}else if(x == 4){
		printf("Hoy es Jueves .\n");
	}else{
		printf("El dia no existe .\n");
	}
	*/
	
	//estructura switch: 
	//solo se pueden utilizar con variables de tipo entero y char, no con variables de tipo flotante
	
	switch (x){
		
		case 1: printf("Lunes .\n"); break;
		case 2: printf("Martes .\n"); break;
		case 3: printf("Miercoles .\n"); break;
		case 4: printf("Jueves .\n"); break;
		default: printf("No existe .\n");
		
	}
	
	
	
	system("pause");
	return 0;
}