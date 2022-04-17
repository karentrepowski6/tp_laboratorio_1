/*
 * calculos.h
 *
 *  Created on: 4 abr. 2022
 *      Author: user
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>

///  @brief
///
/// @param precioLatam
/// @param precioAerolineas
/// @param precioDebitoLatam
/// @param precioDebitoAerolineas
/// @param precioCreditoLatam
/// @param precioCreditoAerolineas
/// @param precioBitcoinLatam
/// @param precioBitcoinAerolineas
/// @param precioUnitarioLatam
/// @param precioUnitarioAerolineas
/// @param diferencia
/// @param kilometros
/// @return

int Calculos(float precioLatam, float precioAerolineas, float* precioDebitoLatam, float* precioDebitoAerolineas, float* precioCreditoLatam, float* precioCreditoAerolineas, float* precioBitcoinLatam, float* precioBitcoinAerolineas, float* precioUnitarioLatam, float* precioUnitarioAerolineas, float* diferencia,float kilometros);
void mostrarCalculosSegunOpcion(float precioLatam, float precioAerolineas, float precioDebitoLatam, float precioDebitoAerolineas, float precioCreditoLatam, float precioCreditoAerolineas, float precioBitcoinLatam, float precioBitcoinAerolineas, float precioUnitarioLatam, float precioUnitarioAerolineas, float diferencia, char opcionAlfabetica, float kilometros);
void MostrarCargaForzada (float precioLatam, float precioAerolineas, float precioDebitoLatam, float precioDebitoAerolineas, float precioCreditoLatam, float precioCreditoAerolineas, float precioBitcoinLatam, float precioBitcoinAerolineas, float precioUnitarioLatam, float precioUnitarioAerolineas, float diferencia, char opcionAlfabetica, float kilometros);
/*float descuentoDebitoLatam(float precioLatam);
float descuentoDebitoAerolineas (float precioAerolineas);
float aumentoCreditoLatam (float precioLatam);
float aumentoCreditoAerolineas (float precioAerolineas);
float equivalenciaEnBitcoinLatam (float precioLatam);
float equivalenciaEnBitcoinAerolineas (float precioAerolineas);
float precioKmLatam(float precioLatam, float kilometros);
float precioKmAerolineas (float precioAerolineas, float kilometros);
float diferenciaPreciosIngresados (float precioAerolineas, float precioLatam);*/

#endif /* CALCULOS_H_ */
