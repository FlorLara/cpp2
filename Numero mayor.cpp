#include <iostream>
using namespace std;

int main () { 
int a,b,c ;
cout << "digite el numero 1 : " ;
cin >> a ;
cout << "digite el numero 2 : " ;
cin >> b ;
cout << "digite el numero 3 : " ;
cin >> c ;
if (a > b && a > c) {
cout << "el numero mayor es:" << a << endl << endl;
}
else
 if (b > a && b > c) {
cout << "el numero mayor es:" << b << endl << endl;
}
else if (c > a, c > b) {
cout << "el numero mayor es:" << c << endl << endl;
}
system ("pause") ;
}
