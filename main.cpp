/*
Program do rysowania choinki
Wykona�: 
*/
#include <iostream> // do��czanie zewn�trznej biblioteki - iostream 
using namespace std; // u�ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) { // g��wna funkcja w c++
	cout << "Hello world" << endl; // wy�wietlanie napisu
	cout <<  "Jestem twoim komputerem :)" << endl; // wy�wietlanie napisu
    int i=0;
	for (;i<10;i++)	{ // p�tla zewn�trzna
    	for (int s=(10-i);s>0;s--) { // p�tla wewn�trzna
    		cout << " " ;   // wy�wietlanie spacji przed gwiazdkami 
		}
		for (int j=0;j<i;j = j + 1) { // p�tla wewn�trzna
    		cout << "*" ;   // wy�wietlanie gwiazdek z lewej 
		}
		for (int j=0;j<i;j = j + 1) { // p�tla wewn�trzna
    		cout << "*" ;   // wy�wietlanie gwiazdek z prawej 
		}
	    cout <<	endl ; // przej�cie do nowej lini 
	}
	return 0;
}

