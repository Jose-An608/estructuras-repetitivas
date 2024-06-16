/*. EJERCICIO 3: Realizar un algoritmo que sume los N primeros números naturales usando bucles.*/

#include <iostream>
using namespace std;
int main(){
	
	int s,i,n;
	
	cout<<"Hasta que numero te gustaria sumar: "<<endl;
	cin>>n;
	
	s=0;
	
	for(i=1 ; i<=n ; i++){
		
		s=s+i;
		
	}
	
	cout<<"La suma es: "<<s<<endl;
	
	return 0;
}