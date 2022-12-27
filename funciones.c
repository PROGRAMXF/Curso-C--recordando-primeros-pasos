//calcular el numero mayor entre dos numeros con una funcion


#include <stdio.h>


int maximo();

int main(){
	
	int x, y, max;
	
	x = 3;
	y = 10;
	
	max = maximo(x, y);	
	
	printf("El valor maximo es %i .\n\n",max);
	
	system("pause");
	return 0;	
	
}

//en esta funcion hacemos el algoritmo para sacar el maximo de ambos numeros
int maximo (int a, int b){ //pase de parametros: x = a  e  y = b

	int aux;
	
	if(a > b){
		aux = a;
	}
	else{
		aux = b;
	}	

	return aux;
}