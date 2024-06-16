/*EJERCICIO 12: Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el
multiplicando, el multiplicador y el producto.*/

#include <iostream>
using namespace std;
int main(){
	int x,i,p,n;
	cout<<"BIENVENIDO AL PROGRAMA DE TABLA DE MULTIPLICAR"<<endl;
	cout<<"------------------------------------------------"<<endl;

	cout<<"Ingrese el numero: "<<endl;
	cin>>x;
	
	cout<<"Hasta que numero le gustaria que sea la tabla de multiplicar: "<<endl;
	cin>>n;
	
	cout<<"Su tabla de multiplicar es: "<<endl;
	
	for(i=1 ; i<=n ; i++){
		
		cout<< x <<"x"<< i << "=" <<x*i<<endl;
	}

	return 0;
}
