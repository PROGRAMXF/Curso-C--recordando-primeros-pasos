//rutas de escape y calcular numeros primos

#include <stdio.h>
	
int main(){
	
		int n, j, aux;
	int i; //contador
	
	printf("introduce un numero cualquiera: ");
	scanf("%i", &n);
	
	j = 0;
	
	for(i = 2; i < n && j != 1; i++){  //la ruta de escape la hacemos a traves de una condicion multiple
		aux = n % i; //variable para el resto
		
		if(aux == 0){
			j = 1;
		}
	}
	
	if(j == 1){
		printf("%i NO es numero primo .\n", n);
	} else {
		printf("%i SI es numero primo .\n");
	}
	
	system("pause");
	return 0;
	
}
	

