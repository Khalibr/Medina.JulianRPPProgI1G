/*
 ============================================================================
 Name        : Baus_27_6_22_RecuProg1.c
 Author      : Medina Julian
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

//void actualizarRecuperados(ePais pais[], int recuperadosxDia);
void invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);

int main(void) {

	char cadena[20]="algoritmo";

	//invertirCadena(cadena);
	ordenarCaracteres(cadena);
	printf("%s",cadena);

	return EXIT_SUCCESS;
}

/*void actualizarRecuperados(ePais pais[], int recuperadosxDia){
	int indice;
	int acum = 0;
	ePais recuperados;


	if(pais!=NULL && recuperadosxDia>0){
		acum+=recuperadosxDia;
	}

	pais[indice].recuperados=acum;

}*/

void invertirCadena(char cadena[]){
	int largo = strlen(cadena);
	char aux;

	for(int i=0;i<largo/2;i++){
		aux = cadena[i];
		cadena[i] = cadena[largo-i-1];
		cadena[largo-i-1] = aux;
	}
}

void ordenarCaracteres(char cadena[]){
	int largo = strlen(cadena);
	char aux;

	for(int i=0;i<largo-1;i++){
		for(int j=i+1;i<largo;j++){
			if(strcmp(cadena[i],cadena[j])){
				aux=cadena[i];
				cadena[i]=cadena[j];
				cadena[j]=aux;
			}
		}
	}
}
