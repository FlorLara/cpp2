#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, char* argv[]) {	

	cout << "(~   _  _ _  _  _    \n";
	cout << endl;
    cout << endl;
    cout << endl;	

	string password;
	bool acceso = false;


	
	while (acceso == false) {		
		cout << "Ingrese su password: ";
		cin >> password;
		
		if (password == "admin")  {
			acceso = true;
		}
			cout << "Ingrese su password: ";
			cin >> password;
			if (password == "gerencia"){
				acceso = true;
			}
		}
	
	system("CLS");

	float subtotal = 0;
	string productosComprados;
	int numeroArticulos = 0;
	bool ingresarMasProductos = true;
		
	while(ingresarMasProductos == true) {
		int opcion;
		
		cout << "Seleccione un No de producto para agregar al carrito de compras" << endl;	
		cout << "---------------------------------------------------------------" << endl;
		cout << "1 - Granita de Cafe.......L 35.00" << endl;
		cout << "2 - Granita de Mora.......L 35.00" << endl;
		cout << "3 - Capuccino.............L 25.00" << endl;
		cout << "4 - Galleta de Chocolate..L 15.00" << endl;
		cout << "5 - Cheese Cake...........L 40.00" <<endl;
		cout << "---------------------------------------------------------------" << endl;
		cout << "0 - Salir" << endl;
		cout << "---------------------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << "Total articulos comprados  -->     " << numeroArticulos << endl;
		cout << "Subtotal a pagar           -->  L. " << subtotal << endl;

		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu --> ";
		cin >> opcion;
		
		
		switch(opcion) {
			case 0: 
				ingresarMasProductos = false;				
				break;
			case 1:
				subtotal = subtotal + 35;
				productosComprados = productosComprados + "Granita de Cafe.......L 35.00\n";
				numeroArticulos++;
				break;
			case 2:
				subtotal = subtotal + 35;
				productosComprados = productosComprados + "Granita de Mora.......L 35.00\n";
				numeroArticulos++;
				break;	
			case 3:
				subtotal = subtotal + 25;
				productosComprados = productosComprados + "Capuccino.............L 25.00\n";
				numeroArticulos++;
				break;							
			case 4:
				subtotal = subtotal + 15;
				productosComprados = productosComprados + "Galleta de Chocolate..L 15.00\n";
				numeroArticulos++;
				break;	
			case  5:
				subtotal = subtotal + 40;
				productosComprados = productosComprados + "Cheese Cake..L 40.00\n";
				numeroArticulos++;
				break;				
			default: 	
				cout<<" Esta Opcion no exsiste"<< endl;	
				break;
		}
		 system("PAUSE");
		 system("CLS");
	}
	
	cout << "Su compra" << endl;
	cout << "-------------------------" << endl;
	cout << productosComprados << endl;
	cout << "-------------------------" << endl;
	cout << "Subtotal.......: L " << subtotal / 1.15 << endl;
	cout << "Impuesto.......: L " << subtotal - (subtotal / 1.15) << endl;
	cout << "Total a pagar..: L " << subtotal << endl;
	
	return 0;

}

