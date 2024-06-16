/*EJERCICIO 9: Calcular el mayor valor de 3 números.*/
#include <iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	
	cout<<"De el primer numero: "<<endl;
	cin>>n1;
	cout<<"De el segundo numero: "<<endl;
	cin>>n2;
	cout<<"De el tercer numero: "<<endl;
	cin>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<"Entonces el primer numero es el mayor"<<endl;
		
		}else{
			
			if(n3>n2){
				cout<<"Entonces el tercer numero es el mayor"<<endl;
				
				}
				else{
					cout<<"Entonces el segundo numero es el mayor"<<endl;
				
				}
		}
	return 0;
}
