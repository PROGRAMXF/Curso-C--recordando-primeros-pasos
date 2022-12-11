//programa que suma los numeros pares entre 2 y 2mil


#include <stdio.h>


int main(){
	
	int x; 
	float suma;
	
	suma = 0;
		
		
		
		
		for (x = 2; x <= 2000; x += 2){
			
			
			suma += x;
		}

	printf("La suma de los numeros pares entre 2 y  2 mil es: %0.0f.\n", suma);
	
	
	printf(".\n.\n");

//programa que calcula la media de x numeros introducidos por teclado

	int z;
	int y;
	int i;
	
	float sumar;
	
	printf("Introduce de cuantos numeros quieres calcular la media: ");
	scanf("%i", &z);
	
	i = 0;
	sumar = 0;
	
	while(i < z ){
		
			printf("Introduce el numero:  ", i);
			scanf("%i", &y);
			sumar += y;
			i++;
	}
	
	sumar = sumar / z;
	
	printf("La media de y es: %0.f.\ ", sumar );
	
	system("pause");
	return 0;
	
	
}