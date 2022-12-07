//hacer un programa que diga si el numero insertado se encuentra entre  1 y 10 o sino lo esta.



#include <stdio.h>


int main(){
	
	int x;
	
	/*
	printf("ingresar un numero: .\n");
	scanf("%i", &x);
	
	if(x >= 1 && x <= 10){
		printf("el numero se encuentra entre 1 y 10 .\n");
		
	}else{		
		printf("el numero ingresado esta fuera de rango .\n");
	}
	
	*/
	
	//ahora lo hacemos con el operador || que significa 'o'
	
	/*
	printf("ingresar un numero: .\n");
	scanf("%i", &x);
	
	if(x >= 1 || x <= 10){
		printf("el numero se encuentra entre 1 y 10 .\n");
		
	}else{		
		printf("el numero ingresado esta fuera de rango .\n");
	}
	
	*/
	
	//ejercicio:
	
	//escribe un programa que acepte tres numeros, horas, minutos y segundos y devuelvala hora que sera
	//dentro de un segundo controlando que sea una hora correcta
	
	int hora, min, seg;
	
	printf("introduce un valor en horas .\n");
	scanf("%i", &hora);
	printf("introduce un valor en minutos .\n");
	scanf("%i", &min);
	printf("introduce un valor en segundos .\n");
	scanf("%i", &seg);
	
	
	if(hora <= 23 && min <= 59 && seg <= 59){
		
		seg += 1;
		
		
		if(seg == 60){
			min += 1;
			seg = 0;
		}
		if(min == 60){
			hora += 1;
			min = 0;
		}
		if(hora == 24){
			hora = 0;
		}
		
		printf("La hora es: %i: %i: %i .\n", hora, min, seg);
	}
	else{
		printf("La hora introducida no es correcta");
	}
	
	system("pause");
	return 0;
}