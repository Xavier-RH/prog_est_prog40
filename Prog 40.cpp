/* Autor: Xavier Romero Hernández, Realizado: 31/03/2022 
	Hacer un programa que pida un caracter y diga si es una letra,
	un número o un caracter de puntuacion
	*/
	
#include <stdio.h>

int main(){
	char c;
	printf("Introduce un caracter: ");
	scanf("%c",&c);
	if(c>='A' && c<='Z' || c>='a' && c<='z' || c>=-96 && c<=-91 || c==129 || c==130){
		printf("<%c> es una letra\n",c);
	}
	else if(c>='0' && c<='9'){
		printf("<%c> es un numero\n",c);
	}
	else{
		printf("<%c> es un caracter especial\n",c);
	}
	
	return 0;
}
