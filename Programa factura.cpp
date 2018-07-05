#include <iostream>
using namespace std;
int main()
{
	
 int cantidad;
 cout<<"ingrese cantidad de pruducto:"<<endl;
 cin>>cantidad;
 
 int valor;
 cout<<"precio por cantidad"<<endl;
 cin>>valor;
 
 int subt;
subt=cantidad*valor;
	
float descuento=0;

float total;
 
	if (cantidad>0)
{
		subt=cantidad*valor;
		descuento=subt*0.20;
		
}		
		total=subt-descuento;	
		 cout<<"el total a pagar es de: "<<"Lps."<<total<<endl;
		 
		 return 0;
}
