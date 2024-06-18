#include <iostream>
using namespace std;
int main (){
	int n, num, prom_i, p_p, sum_p, sum_i, cni, cnp, i;
	i = 1;
	p_p = 0;
	prom_i = 0;
	sum_p = 0;
	sum_i = 0;
	cni = 0;
	cnp = 0;
	cout << "Ingrese la cantidad de numeros: ";
	cin >> n;
	while ( i <= n){
		cout << "Ingrese un numero: ";
		cin >> num;
		if (num % 2 == 0){
			sum_p = sum_p + num;
			cnp = cnp + 1;
			
		}else{
			sum_i = sum_i + num;
			cni = cni + 1;
		}
		i++;
		
	}
	p_p = sum_p /cnp;
	prom_i = sum_i / cni;
	
	cout << "El promedio de los numeros pares es: " << p_p << endl;
	cout << "El promedio de los numeros impares es: " << prom_i << endl;
	return 0;
}
