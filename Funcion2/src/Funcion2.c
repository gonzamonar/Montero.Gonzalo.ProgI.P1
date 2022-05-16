/*
 ============================================================================
 Name        : Funcion2.c
 Author      : Gonzalo F. Montero A.
2. Crear una función que se llame contarCaracteres que reciba una cadena de
caracteres como primer parámetro y un carácter como segundo y devuelva la
cantidad de veces que ese carácter aparece en la cadena
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarCaracteres(char* cadena, char caracter); //case sensitive
int contarCaracteresI(char* cadena, char caracter); //case insensitive

int main(void) {
	char cadena[] = "Hola mundo, hoy es un gran dia para aprobar programacion."; //9 'a' , 6 'o'

	printf("%d\n", contarCaracteres(cadena, 'o'));
	printf("%d\n", contarCaracteresI(cadena, 'h'));

	return 0;
}


int contarCaracteres(char* cadena, char caracter){ //case sensitive
	int contador = 0;
	int len = strlen(cadena);

	if(cadena != NULL && len>0){
		for(int i=0;i<len;i++){
			if(cadena[i] == caracter){
				contador++;
			}
		}
	}
	return contador;
}

int contarCaracteresI(char* cadena, char caracter){ //case insensitive
	int contador = 0;
	int len = strlen(cadena);

	if(cadena != NULL && len>0){
		for(int i=0;i<len;i++){
			if(tolower(cadena[i]) == tolower(caracter)){
				contador++;
			}
		}
	}
	return contador;
}
