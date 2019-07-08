#include <iostream>
using namespace std;
/* Napisz program wypisuj¹cy na ekranie najwiêksz¹ z trzech podanych liczb x,y,z */

int main(int argc, char** argv) {
	char znak;
	int x=0 ,y=0 ,z=0;
	int najwieksza=0;
		cout << "podaj x: ";
		cin	>> x;
		cout << " x= " << x << endl;
		cout << "podaj y: ";
		cin >> y;
		cout << " y= " << y << endl;
		cout << "podaj z: ";
		cin >> z;
		cout << " z= " << z << endl;
		
		cout << ""<< endl;
		// -------------------
		
		
	if (x>y){
	cout << x <<" jest wieksze od " << y << endl;
		najwieksza=x;	
	}
	if (x<y){
	cout << x <<" jest mniejsze od "<< y << endl;	
	}
	if (x==y){
	cout << x <<" jest rowne "<< y << endl;	
	}
		
	if (x>z){
	cout << x <<" jest wieksze od " << z << endl;	
	}
	if (x<z){
	cout << x <<" jest mniejsze od " << z << endl;
	}
	if (x==z){
	cout << x <<" jest rowne "<< y << endl;	
	}
	
	if (z>y){
	cout << z <<" jest wieksze od "<< y << endl;	
	}
	if (z<y){
	cout << z <<" jest mniejsze od "<< y << endl;	
	}
	if (z==y){
	cout << z <<" jest rowne "<< y << endl;	
	}
	


	// --------------
	
	cout << endl << "Najwieksza znalezniona: " << najwieksza;
	return 0;
}
