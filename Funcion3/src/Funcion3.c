/*
 ============================================================================
 Name        : Funcion3.c
 Author      : Gonzalo F. Montero A.
3. Dada la estructura Notebook(id, procesador, marca, precio) generar una
función que permita ordenar un array de dicha estructura por marca.
Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y
mostrarlos desde el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10
#define ASC 1
#define DESC 0

typedef struct{
	int id;
	char procesador[30];
	char marca[30];
	float precio;
}Notebook;


int ordenarNotebooksMarcaPrecio(Notebook* array, int size, int order);

int main(void) {
	Notebook computadoras[TAM] = {
			{1, "Intel i5", "Asus", 15000},
			{2, "AMD Ryzen 1", "Asus", 2000},
			{3, "Intel i7", "Lenovo", 15000},
			{4, "Asrock 4", "Lenovo", 2000},
			{5, "Intel i3", "MSI", 12000},
			{6, "AMD Ryzen 3", "HP", 35000},
			{7, "Intel i3", "HP", 9000},
			{8, "AMD Ryzen 7", "DELL", 14000},
			{9, "Intel Celeron", "MSI", 22000},
			{10, "Intel Celeron", "Asus", 7000}};

	ordenarNotebooksMarcaPrecio(computadoras, TAM, ASC);
	for(int i=0;i<TAM;i++){
		printf("ID: %2d  || Procesador: %-20s || Marca %-20s || Precio: $%10.2f\n",
		computadoras[i].id, computadoras[i].procesador, computadoras[i].marca, computadoras[i].precio);
	}

	return EXIT_SUCCESS;
}


int ordenarNotebooksMarcaPrecio(Notebook* array, int size, int order){
    int outcome = 0;
    Notebook buffer;

    if(array != NULL && size > 0){
        for(int i=0; i < size-1; i++){
            for(int j= i+1; j < size; j++){
                if((order == 1 && ((strcmp(array[i].marca,array[j].marca)==0 && array[i].precio > array[j].precio) //1==ASC
                        || (strcmp(array[i].marca,array[j].marca)!=0 && strcmp(array[i].marca,array[j].marca)>0)))
					|| (order == 0 &&((strcmp(array[i].marca,array[j].marca)==0 && array[i].precio < array[j].precio) //0==DESC
                        ||(strcmp(array[i].marca,array[j].marca)!=0 && strcmp(array[i].marca,array[j].marca)<0)))){
                	buffer = array[i];
                	array[i] = array[j];
                	array[j] = buffer;
                }
            }
        }
        outcome = 1;
    }
    return outcome;
}
