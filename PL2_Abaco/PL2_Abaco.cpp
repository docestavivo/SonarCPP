// PL2_Abaco.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Pila.h"
#include "Lista.h"
#include "Abaco.h"



/* PRÁTICA 2 REALIZADA POR:

Nombre: ESTEFANÍA MARTÍN ROJAS
DNI: 73133122-E
Asignatura: ESTRUCTURAS DE DATOS.
Curso: 2017-18 */


int main(int argc, char** argv) {

	Lista labaco0, labaco1, labaco2, labaco3, labaco4, labaco5, labaco6, labaco7, labaco8, labaco9;
	Lista arrayAbacos[] = {labaco0, labaco1, labaco2, labaco3, labaco4, labaco5, labaco6, labaco7, labaco8, labaco9};
	int numero_bolitas;
	int numero;
	/*string hex, hex2;*/
	int narray, n;
	int cen = 0, dec = 0, uni = 0;
	//int unim2 = 0, decm2 = 0, cen2 = 0, dec2 = 0, uni2 = 0;

		Abaco calculadora;

		cout << "*** BIENVENIDO *** \n";
		cout << "Dispone de 10 abacos. Que abacos desea rellenar? Eliga del 0 al 9.\n";
		cout << "Cuando desee dejar de utilizar abacos, escriba 88.\n";
		cout << "\nOpcion: ";
		cin >> narray;
	
		for(n = 0; n<10; ++n){
			if (n==narray){
				cout << "Ha elegido el abaco numero " << n << "\n";
				cout << "Introduzca un numero entre el 0 y el 999: \n";
				cin >> numero;
				while (numero>999 || numero<0) {
					cout << "\n** ERROR **\n";
					cout << "Introduzca un numero del 0 al 999: ";
					cin >> numero;
				}
				calculadora.separar_numero(numero, cen, dec, uni);
				calculadora.introducirBolitasEnAbaco(arrayAbacos[n],uni, dec, cen);
				calculadora.verEstadoPilas(arrayAbacos[n]);
			}
		}

		//pausamos


		system("pause");
		//system("cls");
		//limpiamos el stream al haber encontrado errores en pruebas
		fflush(stdin);
		cout << endl << endl;




	//	switch (opcion) {
	//	case 1: {

	//		calculadora.introducirColumnas();

	//		cout << "\nIntroduzca un numero del 0 al 99999: ";
	//		cin >> numero;

	//		while (numero>99999 || numero<0) {
	//			cout << "\n** ERROR **\n";
	//			cout << "Introduzca un numero del 0 al 99999: ";
	//			cin >> numero;
	//		}

	//		calculadora.separar_numero(numero, decm, unim, cen, dec, uni);
	//		calculadora.introducirBolitasEnAbaco(uni, dec, cen, unim, decm);
	//		calculadora.verEstadoPilas();

	//		cout << "\nAhora introduzca otro numero del 0 al 99999:\n";
	//		cin >> numero2;

	//		while (numero2>99999 || numero2<0) {
	//			cout << "Introduzca un numero del 0 al 99999:\n";
	//			cin >> numero2;
	//		}

	//		calculadora.separar_numero(numero2, decm2, unim2, cen2, dec2, uni2);

	//		cout << "Que desea hacer?: \n";
	//		cout << "1. Suma\n";
	//		cout << "2. Resta\n";
	//		cout << "\nOpcion: ";
	//		cin >> opcion;

	//		if (opcion>2 || opcion<1) {
	//			cout << "Eliga entre las dos opciones:\n";
	//			cout << "1. Suma\n";
	//			cout << "2. Resta\n";
	//			cout << "\nOpcion: ";
	//			cin >> opcion;
	//		}

	//		if (opcion == 1) {
	//			calculadora.suma(uni2, dec2, cen2, unim2, decm2, 10);

	//			//calculadora.verEstadoPilas();	
	//		}
	//		else {
	//			if (numero<numero2) {
	//				cout << "ERROR. NO SE PUEDE REALIZAR LA RESTA.\n";
	//			}
	//			else {
	//				calculadora.resta(uni2, dec2, cen2, unim2, decm2, 10);

	//				//calculadora.verEstadoPilas();
	//			}

	//		}
	//		calculadora.vaciarLista();
	//		break;
	//		//FIN CASE 1
	//	}

	//	case 2: {

	//		calculadora.introducirColumnas();

	//		//PEDIMOS EL PRIMER NUMERO OCTAL
	//		cout << "\nIntroduzca el primer numero: ";
	//		cin >> numero;

	//		calculadora.separar_numero(numero, decm, unim, cen, dec, uni);
	//		while ((uni == 9) || (dec == 9) || (cen == 9)) {
	//			cout << "**ERROR**";
	//			cout << "\nIntroduzca el primer numero (no puede contener nueves): ";
	//			cin >> numero;
	//			calculadora.separar_numero(numero, decm, unim, cen, dec, uni);
	//		}

	//		calculadora.introducirBolitasEnAbaco(uni, dec, cen, unim, decm);
	//		calculadora.verEstadoPilas();

	//		//PEDIMOS EL SEGUNDO NUMERO OCTAL
	//		cout << "\nIntroduzca el segundo numero: ";
	//		cin >> numero2;
	//		calculadora.separar_numero(numero2, decm2, unim2, cen2, dec2, uni2);

	//		while ((uni >= 8) || (dec >= 8) || (cen >= 8)) {
	//			cout << "**ERROR**";
	//			cout << "\nIntroduzca el segundo numero (no puede contener nueves): ";
	//			cin >> numero2;
	//			calculadora.separar_numero(numero2, decm2, unim2, cen2, dec2, uni2);
	//		}

	//		cout << "Que desea hacer?: \n";
	//		cout << "1. Suma\n";
	//		cout << "2. Resta\n";
	//		cout << "\nOpcion: ";
	//		cin >> opcion;

	//		if (opcion>2 || opcion<1) {
	//			cout << "Eliga entre las dos opciones:\n";
	//			cout << "1. Suma\n";
	//			cout << "2. Resta\n";
	//			cout << "\nOpcion: ";
	//			cin >> opcion;
	//		}

	//		if (opcion == 1) {
	//			calculadora.suma(uni2, dec2, cen2, unim2, decm2, 8);

	//			calculadora.verEstadoPilas();
	//		}
	//		else {
	//			if (numero<numero2) {
	//				cout << "ERROR. NO SE PUEDE REALIZAR LA RESTA.\n";
	//			}
	//			else {
	//				calculadora.resta(uni2, dec2, cen2, unim2, decm2, 8);
	//			}

	//			calculadora.vaciarLista();
	//			break;
	//			//FIN CASO 2
	//		}}

	//	case 3: {

	//		calculadora.introducirColumnas();

	//		//PEDIMOS EL PRIMER NUMERO
	//		cout << "Introduzca el primer numero: \n";
	//		cin >> hex;

	//		while (!calculadora.separar_hexadecimal(hex, decm, unim, cen, dec, uni)) {
	//			cout << "Introduzca el primer numero: \n";
	//			cin >> hex;
	//		}

	//		calculadora.introducirBolitasEnAbaco(uni, dec, cen, unim, decm);
	//		calculadora.verEstadoPilas();

	//		//PEDIMOS EL SEGUNDO NUMERO
	//		cout << "Introduzca el segundo numero: \n";
	//		cin >> hex;

	//		while (!calculadora.separar_hexadecimal(hex, decm, unim, cen2, dec2, uni2)) {
	//			cout << "Introduzca el segundo numero: \n";
	//			cin >> hex;
	//		}

	//		cout << "Que desea hacer?: \n";
	//		cout << "1. Suma\n";
	//		cout << "2. Resta\n";
	//		cout << "\nOpcion: ";
	//		cin >> opcion;

	//		if (opcion>2 || opcion<1) {
	//			cout << "Eliga entre las dos opciones:\n";
	//			cout << "1. Suma\n";
	//			cout << "2. Resta\n";
	//			cout << "\nOpcion: ";
	//			cin >> opcion;
	//		}

	//		if (opcion == 1) {
	//			calculadora.suma(uni2, dec2, cen2, unim2, decm2, 16);
	//			calculadora.verEstadoPilas();
	//		}
	//		else {
	//			//				if (numero<numero2){
	//			//					cout << "ERROR. NO SE PUEDE REALIZAR LA RESTA.\n";
	//			//				}else{
	//			calculadora.resta(uni2, dec2, cen2, unim2, decm2, 16);

	//			calculadora.verEstadoPilas();
	//		}

	//		calculadora.vaciarLista();
	//		break;
	//		//FIN CASO 3
	//	}


	//	}
	//	//pausamos


	//	system("pause");
	//	//system("cls");
	//	//limpiamos el stream al haber encontrado errores en pruebas
	//	fflush(stdin);
	//	cout << endl << endl;

	//} while (opcion != 9);


}