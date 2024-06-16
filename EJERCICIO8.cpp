/*EJERCICIO 8: Elaborar un programa que lea “n” números (positivos mayores que cero) e indique el
mayor número ingresado.*/
#include <iostream>
using namespace std;
int main(){
int n,N,m,i;
cout<<"De la cantidad de  numeros"<<endl;
cin>>N;
i=1;
m=0;
while(i<=N){
	cout<<"De el numero: "<<endl;
	cin>>n;
	if(n>m){
		m=n;	
	}
	i=i+1;
}
	cout<<"El mayor es: "<<m<<endl;


return 0;
}