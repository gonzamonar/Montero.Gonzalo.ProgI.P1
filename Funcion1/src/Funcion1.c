/*
 ============================================================================
 Name        : Funcion1.c
 Author      : Gonzalo F. Montero A.
1. Crear una función llamada aplicarDescuento que reciba como parámetro el
precio de un producto y devuelva el valor del producto con un descuento del 5%.
Realizar la llamada desde el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int aplicarDescuento(float precio, float descuento);


int main(void) {
	float precio = 2500;
	float precioConDescuento;
	int descuento = 25;

	precioConDescuento = aplicarDescuento(precio, descuento);

	printf("El precio con descuento es: $%.2f", precioConDescuento);

	return EXIT_SUCCESS;
}


int aplicarDescuento(float precio, float descuento){
	float precioConDescuento;
	if(descuento >= 0){
		precioConDescuento = precio * (1-(descuento*0.01));
	}
	return precioConDescuento;
}
