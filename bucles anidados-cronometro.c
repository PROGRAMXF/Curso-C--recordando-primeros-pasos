//programa para hacer las tablas de multipliucar las tablas del 1 al 9



#include <stdio.h>
#include <windows.h>

//los bucles anidados lo usamos cuando por ejemplo queremos que los numeros se incrementen de manera independiente.

/*int main (){
	
	int i, j;
	
	for(i = 1; i <= 9; i++){
		
		for(j = 1; j <= 10; j++){
			
			printf("%i x %i = %i .\n", i, j, i * j); //el primer numero del primer bucle no se mueve hasta que termina de incrementarse el segundo bucle
			
		}
		
		printf(".\n");
		
		system("pause");
	}	

}


//ahora comenzamos con el cronometro:
*/
	int main(){
			int hora, min, seg, x;
	
	x = 10;
	
	for(hora = 0; hora < 24; hora++){
		for(min = 0; min < 60; min++){
			for(seg = 0; seg < 60; seg++){
				
				printf("%02i: %02i: %02i: .\r", hora, min, seg); //la barra \r lo que hace es sobreescribir
				
				Sleep(x);
			}
		}
	}	
	
		system("pause");
		return 0;
	
	}
	



