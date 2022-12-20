//hacer la serie de fibonacci hasta el termino n introducido por teclado.

#include <stdio.h>



int main(){
	/*
	int x, y, resp, n;
	int i; //como contador del bucle
	
	printf("ingresar la cantidad de numeros fib: ");
	scanf("%i", &n);
	
	
	i = 1;
	x = 0;
	y = 1;
	
	while(i <= n){
		resp = x + y;
		printf("%i, ");
		x = y;
		y = resp;
		i++;
	}	
	*/
	
	
	int n, j, aux;
	int i; //contador
	
	printf("introduce un numero cualquiera: ");
	scanf("%i", &n);
	
	j = 0;
	
	for(i = 2; i < n; i++){
		aux = n % i; //variable para el resto
		
		if(aux == 0){
			j = 1;
		}
	}
	
	if(j == 1){
		printf("%i NO es nummero primo .\n", n);
	} else {
		printf("%i SI es numero primo .\n");
	}
	
	system("pause");
	return 0;
	
}