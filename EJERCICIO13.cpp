/*EJERCICIO 13: Realizar la multiplicación de dos números por medio de la definición de la multiplicación.
(sin usar el operador *). Recuerde 3x4= 3+3+3+3 o 4+4+4*/
#include <iostream>
using namespace std;
int main(){
	int i, producto,N1,N2, p;
	cout << "INGRESA LOS 2 NUMEROS PARA MULTIPLICARLOS:" << endl;

	cout << "INGRESA EL PRIMER NUMERO: ";
	cin >> N1;

	cout << "INGRESA EL SEGUNDO NUMERO: ";
	cin >> N2;

	producto = 0;
	p = 0;
	i = 1;

	while ( i <= N1 ){
		p = p + N2;
		i=i+1;
	}
	cout << "El producto es: " << p << endl;

	return 0;
}
