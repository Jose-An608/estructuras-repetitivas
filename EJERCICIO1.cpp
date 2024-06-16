#include <iostream>
using namespace std;
int main(){
int n, i, contador,multiplo;

cout<<"Hasta que numero te gustaria saber los multiplos de 7:  "<<endl;
cin>>n;

cout<<"Los multiplos de 7 son: "<<endl;

i=1;

while(i<=n){
	multiplo=i*7;
	i=i+1;

cout<<multiplo<<endl;

}
	
return 0;
}