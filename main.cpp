/*
Program do rysowania choinki
Wykona�: 
*/
#include <iostream> // do��czanie zewn�trznej biblioteki - iostream 
using namespace std; // u�ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) { // g��wna funkcja w c++
	cout << "Hello world" << endl; // wy�wietlanie napisu
	cout <<  "Jestem twoim komputerem :)" << endl; // wy�wietlanie napisu
    int i=3158;
//	for (;i<10;i++)	{ // p�tla zewn�trzna
    
    	for (int j=0;j<i;j++) { // p�tla wewn�trzna
    		cout << "*" << j << endl  ;   // wy�wietlanie napisu
		}
		
//		cout << "Enter->";
//        cout <<	endl ; // przej�cie do nowej lini 
//	}
	
	return 0;
}

