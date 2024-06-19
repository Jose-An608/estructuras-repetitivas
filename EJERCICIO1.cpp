#include <iostream>
using namespace std;

int main(){
	int n, i, m7;
	cout <<" Ingresa la cantidad de numeros multiplos de 7: ";
	cin >> n;
	
	cout<<" Los multiplos de 7 son: "<<endl;
	
	for(i=1 ; i<=n ; i++){
		
		m7= i*7;
		cout << m7 << endl;
	}
	return 0;
}