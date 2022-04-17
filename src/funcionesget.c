/*
 * funcionesget.c
 *
 *  Created on: 16 abr. 2022
 *      Author: user
 */
#include "FUNCIONESGET.h"

int GetNumeroFlotante(char mensaje [], int reintentos, float minimo, float maximo, char mensajeError[], float* pNumeroIngresado){

	int retorno;

	float bufferFloat; //area de intercambio

	retorno = -1;

	if (mensaje != NULL && mensajeError != NULL && pNumeroIngresado != NULL && reintentos >= 0 && minimo <= maximo){

		do{

			printf("%s", mensaje);

			scanf("%f", &bufferFloat);

			if(bufferFloat >= minimo && bufferFloat <= maximo){

				*pNumeroIngresado = bufferFloat;

				retorno = 0;

				break;

			}

			else{

				printf("%s", mensajeError);
				reintentos--;

			}

			printf("\nLe quedan %d intentos\n", reintentos);

		}while(reintentos >= 0);

	}

	return retorno;
}


int GetNumeroEntero(char mensaje [], int reintentos, int minimo, int maximo, char mensajeError [], int* pNumeroIngresado){

	int retorno;

	int bufferInt; //area de intercambio

	retorno = -1;

	if (mensaje != NULL && mensajeError != NULL && pNumeroIngresado != NULL && reintentos >= 0 && minimo <= maximo){

		do{

			printf("%s", mensaje);

			scanf("%d", &bufferInt);

			if(bufferInt >= minimo && bufferInt <= maximo){

				*pNumeroIngresado = bufferInt;

				retorno = 0;

				break;

			}

			else{

				printf("%s", mensajeError);
				reintentos--;

			}

			printf("\nLe quedan %d intentos\n", reintentos);

		}while(reintentos >= 0);

	}

	return retorno;
}




int getCaracter (char mensaje[], int reintentos, char minimo, char maximo, char mensajeError[], char *pResultado){
	int retorno;
	char bufferChar;
	retorno = -1;

	if (mensaje != NULL && mensajeError != NULL && pResultado != NULL && reintentos >= 0 && minimo <= maximo){

		do{
			printf("%s", mensaje);
			fflush (stdin);
			scanf("%c", &bufferChar);

			if(bufferChar >= minimo && bufferChar <= maximo){
				*pResultado = bufferChar;
				retorno = 0;
				break;

			}

			else{
				printf("%s", mensajeError);
				reintentos--;

			}

		}while (reintentos >= 0);


	}

	return retorno;

}
