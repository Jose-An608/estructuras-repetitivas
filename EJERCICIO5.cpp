/*EJERCICIO 5: Un profesor necesita un programa que solicite las notas de N estudiantes del curso ha
dictado en la universidad. El programa consultará si desea continuar ingresando notas, y
mostrará al final la cantidad de aprobados y desaprobados y el promedio del salón.*/

#include <iostream>
using namespace std;
int main(){
	double N,n,nt,i,c_a,c_d,Snt,DC,ps;
	i=1;
	c_a=0;
	c_d=0;
	Snt=0;


	cout<<"INGRESE LA NOTA APROBATORIA: "<<endl;
	cin>>N;
	do{
		cout<<"INGRESAR LA CANTIDAD DE ESTUDIANTES: "<<endl;
		cin>>n;
		while(i<=n){
			
			cout<<"INGRESE LA NOTA: "<<endl;
			cin>>nt;
			Snt=Snt+nt;
			
				if(nt>=N){
				c_a=c_a+1;
			}else{
				c_d=c_d+1;
			}
			i=i+1;
		}
	cout<<"DESEA CONTINUAR: SI(1) Y NO(0): "<<endl;
	cin>>DC;

	}while(DC==1);
	ps=nt/n;
	
	
	cout<<"LA CANTIDAD DE APROBADOS ES: "<<c_a<<endl;
	cout<<"LA CANTIDAD DE DESAPROBADOS ES: "<<c_d<<endl;
	cout<<"EL PROMEDIO DEL SALON ES DE: "<<ps;
	return 0;
}
