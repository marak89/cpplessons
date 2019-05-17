/*
Program do rysowania choinki
Wykona³: 
*/
#include <iostream> // do³¹czanie zewnêtrznej biblioteki - iostream 
using namespace std; // u¿ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) { // g³ówna funkcja w c++
	cout << "Hello world" << endl; // wyœwietlanie napisu
	cout <<  "Jestem twoim komputerem :)" << endl; // wyœwietlanie napisu
    int i=0;
	for (;i<10;i++)	{ // pêtla zewnêtrzna
    	for (int s=(10-i);s>0;s--) { // pêtla wewnêtrzna
    		cout << " " ;   // wyœwietlanie spacji przed gwiazdkami 
		}
		for (int j=0;j<i;j = j + 1) { // pêtla wewnêtrzna
    		cout << "*" ;   // wyœwietlanie gwiazdek z lewej 
		}
		for (int j=0;j<i;j = j + 1) { // pêtla wewnêtrzna
    		cout << "*" ;   // wyœwietlanie gwiazdek z prawej 
		}
	    cout <<	endl ; // przejœcie do nowej lini 
	}
	return 0;
}

