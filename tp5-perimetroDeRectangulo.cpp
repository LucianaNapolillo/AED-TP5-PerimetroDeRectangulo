/*
Alumna: Luciana Napolillo
Curso: K1091
Descripcion: Calcula el perimetro de un rectangulo dada su base y su altura
Ultima modificacion: 09/05/2015
*/

#include <iostream>
using namespace std;

float getNumeroPositivo();
float getPerimetroRectangulo(float base, float altura);

int main () {
	float b, h;
	cout << "Ingrese los datos para conocer el perimetro del rectangulo:\n";
	
	cout << "Base: ";
	b = getNumeroPositivo();
	cout << "Altura: ";
	h = getNumeroPositivo();
	
	cout << "\nEl perimetro del rectangulo es: " << getPerimetroRectangulo(b, h);
}

float getNumeroPositivo() {
	float numero;
	do {
		cin >> numero;
		if (numero <= 0) {
			cout << "El valor ingresado no es valido. Por favor ingrese otro: ";
		} else {
			return numero;
		}
	} while (numero <= 0);
}

float getPerimetroRectangulo(float base, float altura) {
	return (2 * base) + (2 * altura);
}
	

