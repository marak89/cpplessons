#include <iostream>
using namespace std;
/* Napisz program wypisuj¹cy na ekranie najwiêksz¹ z trzech podanych liczb x,y,z */

int main(int argc, char** argv) {
	char znak;
	int x=0 ,y=0 ,z=0;
		cout << "podaj x";
		cin	>> x;
		cout << " x= " << x << endl;
		cout << "podaj y";
		cin >> y;
		cout << " y= " << y << endl;
		cout << "podaj z";
		cin >> z;
		cout << " z= " << z << endl;
		
		//cout << " x= " << x << endl;
	if( x >> 4 ){
		cout <<"wiencej niz trzy" << endl; 
	}else{
		if(argc == 4 ){
			cout <<"rowne trzy" << endl;
		}else{
			cout << "mniej niz trz;y" << endl;
		}
	}
	return 0;
}
