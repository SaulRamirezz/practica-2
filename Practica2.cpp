#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int opcion;

	cout << "Hola, soy Juan tu robot asistente, aqui tienes algunas de mis funcionalidades" << endl;
	cout << "1.- Sacar indice de masa corporal  2.- Calcular la hipotenusa" << endl;
	cout << "3.- Calcular el area de un cuadrado  4.- Calcular el volumen de una esfera" << endl;
	cout << "Que quieres que haga: "; cin >> opcion;

	switch (opcion) {
	case 1:
		float a, b, doble, result;
		cout << "Ingrese el peso (kg): " << endl; cin >> a;
		cout << "Ingrese la estatura (mts): " << endl; cin >> b;
		doble = b * b;
		result = a / doble;
		cout << "El indice de masa corporal es: " << result << endl;
		break;
	case 2:
		float n1, doble1, n2, doble2, n3, n;
		cout << "Ingrese el primer cateto: " << endl; cin >> n1;
		cout << "Ingrese el segundo cateto: " << endl; cin >> n2;
		doble1 = n1 * n1;
		doble2 = n2 * n2;
		n3 = doble1 + doble2;
		n = sqrt(n3);
		cout << "La hipotenusa es: " << n << endl;
		break;
	case 3:
		int bh, area;
		cout << "Ingresa la base o altura del cuadrado: "; cin >> bh;
		area = bh * bh;
		cout << "El area del cuadrado es: " << area << endl;
		break;
	case 4:
		double r, volumen;
		cout << "Ingresa el radio de tu esfera: "; cin >> r;
		volumen = 1.33333 * 3.1415 * pow(r,3);
		cout << "El volumen de tu esfera es: " << volumen << endl;
		break;
	}

	return 1;
}

