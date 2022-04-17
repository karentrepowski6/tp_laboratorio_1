/*
 * calculos.c
 *
 *  Created on: 4 abr. 2022
 *      Author: user
 */


#include "CALCULOS.h"


int Calculos(float precioLatam, float precioAerolineas, float* precioDebitoLatam, float* precioDebitoAerolineas, float* precioCreditoLatam, float* precioCreditoAerolineas, float* precioBitcoinLatam, float* precioBitcoinAerolineas, float* precioUnitarioLatam, float* precioUnitarioAerolineas, float* diferencia, float kilometros){

	int retorno = -1;
	int porcentajeUno = 10;
	float descuentoLatam;
	float descuentoAerolineas;
	int porcentajeDos = 25;
	float aumentoLatam;
	float aumentoAerolineas;
	float equivalenciaBitcoin = 4521460.09;


	descuentoLatam = precioLatam * (float)porcentajeUno /100;
	descuentoAerolineas = precioAerolineas * (float)porcentajeUno /100;

	*precioDebitoLatam = precioLatam - descuentoLatam;
	*precioDebitoAerolineas = precioAerolineas - descuentoAerolineas;

	aumentoLatam = precioLatam * (float)porcentajeDos / 100;
	aumentoAerolineas = precioAerolineas * (float)porcentajeDos / 100;

	*precioCreditoLatam = precioLatam + aumentoLatam;
	*precioCreditoAerolineas = precioAerolineas + aumentoAerolineas;

	*precioBitcoinLatam = precioLatam / equivalenciaBitcoin;
	*precioBitcoinAerolineas = precioAerolineas / equivalenciaBitcoin;

	*precioUnitarioLatam = precioLatam / kilometros;
	*precioUnitarioAerolineas = precioAerolineas / kilometros;

	if(precioAerolineas > precioLatam){
		*diferencia = precioAerolineas - precioLatam;
	}
	else{
		*diferencia = precioLatam - precioAerolineas;
	}



	return retorno;

}

void mostrarCalculosSegunOpcion(float precioLatam, float precioAerolineas, float precioDebitoLatam, float precioDebitoAerolineas, float precioCreditoLatam, float precioCreditoAerolineas, float precioBitcoinLatam, float precioBitcoinAerolineas, float precioUnitarioLatam, float precioUnitarioAerolineas, float diferencia, char opcionAlfabetica, float kilometros){

	printf("\n Kilometros ingresados: %f \n\n", kilometros);


	//Muestro resultados para Aerolineas

	printf("\n ----------Aerolineas--------------");

	printf ("\n Precio ingresado para Aerolineas: %f\n", precioAerolineas);


	if(opcionAlfabetica == 'a'){


		printf ("\n El precio con tarjeta de débito para Aerolineas es: %f\n", precioDebitoAerolineas);

	}

	else if(opcionAlfabetica == 'b'){


		printf ("\n El precio con tarjeta de crédito para Aerolinea es: %f\n", precioCreditoAerolineas);

	}

	else if (opcionAlfabetica == 'c'){


		printf("\n El precio pagando en bitcoins para Aerolineas es: %f BTC\n", precioBitcoinAerolineas);


	}

	else if (opcionAlfabetica == 'd'){


		printf ("\n El precio por km para aerolinea es: %f\n", precioUnitarioAerolineas);

	}


	//Muestro resultados para Latam

	printf("\n -----------Latam------------------");

	printf ("\n Precio ingresado para Latam es: %f\n", precioLatam);

	if(opcionAlfabetica == 'a'){

		printf ("\n El precio con tarjeta de débito para Latam es: %f\n", precioDebitoLatam);


	}

	else if(opcionAlfabetica == 'b'){

		printf("\n El precio con tarjeta de credito para Latam es: %f\n", precioCreditoLatam);


	}

	else if (opcionAlfabetica == 'c'){

		printf("\n El precio pagando en bitcoins para Latam es: %f BTC\n", precioBitcoinLatam);

	}
	else if (opcionAlfabetica == 'd'){

		printf ("\n El precio por km para latam es: %f\n", precioUnitarioLatam);


	}

	else{

		printf("\n---------------Diferencia---------------");
		printf("\n La diferencia de los precios ingresados es: %f\n", diferencia);

	}


}


void MostrarCargaForzada (float precioLatam, float precioAerolineas, float precioDebitoLatam, float precioDebitoAerolineas, float precioCreditoLatam, float precioCreditoAerolineas, float precioBitcoinLatam, float precioBitcoinAerolineas, float precioUnitarioLatam, float precioUnitarioAerolineas, float diferencia, char opcionAlfabetica, float kilometros){
	printf("\n Kilometros ingresados: %f \n\n", kilometros);


	//Muestro resultados para Aerolineas

	printf("\n ----------Aerolineas--------------");

	printf ("\nPrecio ingresado para Aerolineas: %f\n", precioAerolineas);
	printf ("\na) El precio con tarjeta de débito para Aerolineas es: %f\n", precioDebitoAerolineas);
	printf ("\nb) El precio con tarjeta de crédito para Aerolinea es: %f\n", precioCreditoAerolineas);
	printf("\nc) El precio pagando en bitcoins para Aerolineas es: %f BTC\n", precioBitcoinAerolineas);
	printf ("\nd) nEl precio por km para aerolinea es: %f\n", precioUnitarioAerolineas);

	//Muestro resultados para Latam

	printf("\n -----------Latam------------------");

	printf ("\n Precio ingresado para Latam es: %f\n", precioLatam);
	printf ("\na) El precio con tarjeta de débito para Latam es: %f\n", precioDebitoLatam);
	printf("\nb) El precio con tarjeta de credito para Latam es: %f\n", precioCreditoLatam);
	printf("\nc) El precio pagando en bitcoins para Latam es: %f BTC\n", precioBitcoinLatam);
	printf ("\nd) El precio por km para latam es: %f\n", precioUnitarioLatam);

	printf("\n---------------Diferencia---------------");
	printf("\n La diferencia de los precios ingresados es: %f\n", diferencia);


}
