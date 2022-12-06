//ver si el numero es par y hallar el maximo de tres numeros
//estructuas selectivas


#include <stdio.h>


int main(){
	
	
	int x, y;
	int a, b, c;
	
	printf("Introduce un valor para x : ");
	scanf("%d", &x);
	
	printf("Introduce un valor para y : ");
	scanf("%d", &y);
	
	x = x % 2;
	
	y = y % 2;
	
	if(x == 0){
		printf("el numero es par .\n");
	}else{
		printf("no es par .\n");
	}
	
		if(y == 0){
		printf("el numero es par .\n");
	}else{
		printf("no es par .\n");
	}
	
	printf(".\n.\n");
	//ahora vamos a elejir el maximo entre tres numeros	
	
	printf("Introduce un valor para a : ");
	scanf("%d", &a);
	
	printf("Introduce un valor para b : ");
	scanf("%d", &b);
	
	printf("Introduce un valor para c : ");
	scanf("%d", &c);
		
	printf(".\n");
	
	
	if(a > b & a > c){
		printf("el maximo es a: %i", a);
		printf(".\n");
		
	}else if(b > a & b > c){
		printf ("el maximo es b: %i", b);
		printf(".\n");
		
	}else if("c > a & c > b"){
		printf("el maximo es c: %i", c);
		printf(".\n");
	}
	
	system("pause");
	return 0;
	
}