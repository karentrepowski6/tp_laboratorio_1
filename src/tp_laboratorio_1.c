/*1 Enunciado
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.  El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)

2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:

3. Calcular todos los costos:
 a) Tarjeta de débito (descuento 10%)
 b) Tarjeta de crédito (interés 25%)
 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
 d) Mostrar precio por km (precio unitario)
 e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
 a) Precio con tarjeta de débito: r
 b) Precio con tarjeta de crédito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 Aerolíneas:
 a) Precio con tarjeta de débito: r
 b) Precio con tarjeta de crédito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir  */



//Karen Trepowski Velazquez TP1


#include <stdio.h>
#include <stdlib.h>
#include "MENU.h"
#include "CALCULOS.h"
#include "FUNCIONESGET.h"



int main(void) {

	setbuf (stdout,NULL);

	float precioLatam;
	float precioAerolineas;
	int opcionNumerica;
	char opcionAlfabetica;
	float kilometros;
	int banderaContinuar = 1;
	float precioDebitoLatam;
	float precioDebitoAerolineas;
	float precioCreditoLatam;
	float precioCreditoAerolineas;
	float precioBitcoinLatam;
	float precioBitcoinAerolineas;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;
	float diferencia;
	int contadorPrecioLatam;
	int contadorPrecioAerolineas;
	int contadorKm;
	//defino los acumuladores para saber si se ingresaron esos datos
	contadorPrecioLatam = 0;
	contadorPrecioAerolineas = 0;
	contadorKm = 0;

	do{

	Menu();

	GetNumeroEntero("\n Ingrese una opcion del menu: \n", 3, 1, 6, "\nError, por favor ingrese un numero entre 1 y 6\n", &opcionNumerica);

	switch (opcionNumerica){

	case 1:

		GetNumeroFlotante("\nIngrese la cantidad de kilometros: \n", 3, 1, 50000, "\nError, por favor ingrese un valor entre 1 y 50000", &kilometros);

		contadorKm++;

		break;

	case 2:

		if(contadorKm < 1){

			printf("Para ingresar el valor de los vuelos, primero se debe ingresar la cantidad de kilometros");

		}

		else {

			GetNumeroFlotante("\nIngrese precio para Aerolineas: \n", 3, 0, 500000, "\nError, por favor ingrese un valor entre 0 y 500000", &precioAerolineas);
			contadorPrecioAerolineas++;
			GetNumeroFlotante("\nIngrese precio para Latam: \n",  3, 0, 500000, "\nError, por favor ingrese un valor entre 0 y 500000", &precioLatam);
			contadorPrecioLatam++;
		}

		break;

	case 3:

		if(contadorPrecioLatam < 1 && contadorPrecioAerolineas < 1){

			printf("\n No se pueden realizar los cálculos porque primero se deben ingresar los precios de los vuelos");

		}
		else{


		getCaracter ("\nIngrese una letra: \n", 3, 'a', 'e', "Error, por favor ingrese una letra entre a y e", &opcionAlfabetica);

		Calculos(precioLatam, precioAerolineas, &precioDebitoLatam, &precioDebitoAerolineas, &precioCreditoLatam, &precioCreditoAerolineas, &precioBitcoinLatam,&precioBitcoinAerolineas, &precioUnitarioLatam, &precioUnitarioAerolineas, &diferencia, kilometros);

		}
		break;

	case 4:

		mostrarCalculosSegunOpcion(precioLatam, precioAerolineas, precioDebitoLatam, precioDebitoAerolineas, precioCreditoLatam, precioCreditoAerolineas, precioBitcoinLatam, precioBitcoinAerolineas, precioUnitarioLatam, precioUnitarioAerolineas, diferencia,opcionAlfabetica, kilometros);

		break;

	case 5:

		//Muestro resultados sin pedir datos al usuario

		kilometros = 7090;

		precioAerolineas = 162965;

		precioLatam = 159339;

		Calculos(precioLatam, precioAerolineas, &precioDebitoLatam, &precioDebitoAerolineas, &precioCreditoLatam, &precioCreditoAerolineas, &precioBitcoinLatam,&precioBitcoinAerolineas, &precioUnitarioLatam, &precioUnitarioAerolineas, &diferencia, kilometros);

		MostrarCargaForzada (precioLatam, precioAerolineas, precioDebitoLatam, precioDebitoAerolineas, precioCreditoLatam, precioCreditoAerolineas, precioBitcoinLatam, precioBitcoinAerolineas, precioUnitarioLatam, precioUnitarioAerolineas, diferencia, opcionAlfabetica, kilometros);

		break;


	case 6:

		//salir del programa

		printf ("Gracias por utilizar el programa.");
		banderaContinuar = 0;

		break;


	}



	}while(banderaContinuar == 1);


}




