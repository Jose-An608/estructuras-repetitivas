/*EJERCICIO 12: Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el
multiplicando, el multiplicador y el producto.*/

#include <iostream>
using namespace std;
int main(){
	int n,i,p;
	cout<<"Ingrese el numero: "<<endl;
	cin>>n;
	i=1;
	do{
		p= n*i;

		cout <<n<< "x" <<i<< "=" <<p<<endl;
		i=i+1;
	} while(i<=12);
	

	return 0;
}
