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

int aplicarDescuento(float precio);


int main(void) {
	float precio = 100;
	float precioConDescuento;

	precioConDescuento = aplicarDescuento(precio);

	printf("El precio con descuento es: $%.2f", precioConDescuento);

	return EXIT_SUCCESS;
}


int aplicarDescuento(float precio){
	float preciodescontado;
	preciodescontado = precio * (1-(5*0.01));
	return preciodescontado;
}
