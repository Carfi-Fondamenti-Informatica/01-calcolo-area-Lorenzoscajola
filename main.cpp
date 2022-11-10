#include <iostream>
using namespace std; 

int main () {
	cout<<"Calcolo area triangolo, quadrato, rettangolo e trapezio; inserisci le variabili a, b e c:"<<endl;
	float a ;
	float b ;
	float c ;
	
	cout<<"Variabile a (Base triangolo, lato rettangolo, lato quadrato):";
	cin >> a ;
	cout<<"Variabile b (Lato rettangolo, altezza triangolo):";
	cin >> b ;
	cout<<"Variabile c (Altezza trapezio):";
	cin >> c ;
	
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl; 
	
	cout<<"Area triangolo=";
	cout<<(a*b)/2<<endl; 
	cout<<"Area quadrato=";
	cout<<(a*a)<<endl; 
	cout<<"Area rettangolo=";
	cout<<(a*b)<<endl; 
	cout<<"Area trapezio=";
	cout<<(((a+b)*c)/2)<<endl; 
	
	return 0; 
	
}
