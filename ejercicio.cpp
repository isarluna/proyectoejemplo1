#include<iostream> 
using namespace std; 
int numero= 10; 
int numero2= 5; 
int *puntero;  
int *puntero2;
float f= 2.5; 
char c= 12;
int main() {
	puntero=&numero;
	puntero2=&numero2;
	cout<<"Numero: "<<numero<<endl; 
	cout<<"direccion de numero: "<<puntero<<endl;
	cout<<"Numero2: "<<numero2<<endl; 
	cout<<"Direccion de numero2: "<<puntero<<endl; 
	cout<<"memoria float: "<<&f<<endl;
	cout<<"Memoria char: "<<&c<<endl;
	cout<<"memoria del entero: "<<&numero2<<endl; 
	return 0;
}
