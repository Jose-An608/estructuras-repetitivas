/*EJERICICO 10: Determinar si un número es primo. Recuerde que un número primo solo es divisible por 1
y si mismo.*/

#include <iostream>
using namespace std;
int main(){
	int n, CD, i, sp, np;
	cout<<"INGRESE NUMERO: ";
	cin>>n;
	i = 1;
	CD = 0;
	while ( i <= n ){
		if (n % i == 0){
			CD = CD +1;
		}
		i=i+ 1;
	}
	if (CD == 2){
		cout << "Si es un numero primo"<< endl;
	
	}else{
			cout << "No es un numero primo"<< endl;
	}
	return 0;
}
	

