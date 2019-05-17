/*
Program do rysowania choinki
Wykona³: 
*/
#include <iostream> // do³¹czanie zewnêtrznej biblioteki - iostream 
using namespace std; // u¿ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) { // g³ówna funkcja w c++
	cout << "Hello world" << endl; // wyœwietlanie napisu
	cout <<  "Jestem twoim komputerem :)" << endl; // wyœwietlanie napisu
    int i=3158;
//	for (;i<10;i++)	{ // pêtla zewnêtrzna
    
    	for (int j=0;j<i;j++) { // pêtla wewnêtrzna
    		cout << "*" << j << endl  ;   // wyœwietlanie napisu
		}
		
//		cout << "Enter->";
//        cout <<	endl ; // przejœcie do nowej lini 
//	}
	
	return 0;
}

