/*
 * funcionesget.h
 *
 *  Created on: 16 abr. 2022
 *      Author: user
 */

#ifndef FUNCIONESGET_H_
#define FUNCIONESGET_H_

#include <stdio.h>
#include <stdlib.h>

/// @brief
///
/// @param mensaje
/// @param reintentos
/// @param minimo
/// @param maximo
/// @param mensajeError
/// @param pNumeroIngresado
/// @return

int GetNumeroFlotante(char mensaje [], int reintentos, float minimo, float maximo, char mensajeError[], float* pNumeroIngresado);
int GetNumeroEntero(char mensaje [], int reintentos, int minimo, int maximo, char mensajeError [], int* pNumeroIngresado);
int getCaracter (char mensaje[], int reintentos, char minimo, char maximo, char mensajeError[], char *pResultado);

#endif /* FUNCIONESGET_H_ */
