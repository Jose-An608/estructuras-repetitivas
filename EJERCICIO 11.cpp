/*EJERCICIO 11: Diseña un algoritmo que reciba un número entero positivo y calcule su factorial. El
factorial de un número, representado como n!, es el producto de todos los números
positivos menores o iguales a n. Por ejemplo: 5! = 5 × 4 × 3 × 2 × 1 = 120.*/
#include <iostream>
using namespace std;
int main(){
	int n, F,i;
	F=1;
	i=1;
	cout<<"DE UN NUMERO: "<<endl;
	cin>>n;
	
	while(i<=n){
		F=F * i;
		i=i + 1;
	}
	cout<<"EL FACTORIAL DE "<<n<<" es: "<<F<<endl;
	return 0;
}
