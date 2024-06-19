/*EJERICICO 10: Determinar si un número es primo. Recuerde que un número primo solo es divisible por 1
y si mismo.*/

#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	int n, CD, i, sp, np;
	SetConsoleOutputCP(CP_UTF8);

	cout<<"Ingrese número: ";
	cin>>n;

	CD = 0;
	
		for( i=1 ; i<=n ; i++){
		if (n%i==0){
			CD=CD+1;
		}
	}

	if (CD == 2){
		cout << "Si es un número primo"<< endl;
	
	}else{
			cout << "No es un número primo"<< endl;
	}
	return 0;
}
	

