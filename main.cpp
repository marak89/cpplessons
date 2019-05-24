/*
Program do rysowania choinki
Wykona³: 
*/
#include <iostream> // do³¹czanie zewnêtrznej biblioteki - iostream 
using namespace std; // u¿ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) { // g³ówna funkcja w c++
//	cout << "Hello world" << endl; // wyœwietlanie napisu
//	cout <<  "Jestem twoim komputerem :)" << endl; // wyœwietlanie napisu
//    int i=0;
//	for (;i<10;i++)	{ // pêtla zewnêtrzna
//    	for (int s=(0);s<i;s++) { // pêtla wewnêtrzna
//    		cout << " " ;   // wyœwietlanie spacji przed gwiazdkami 
//		}
//		for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
//    		cout << "*" ;   // wyœwietlanie gwiazdek z lewej 
//		}
//		for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
//    		cout << "*" ;   // wyœwietlanie gwiazdek z prawej 
//		}
//	    cout <<	endl ; // przejœcie do nowej lini 
//	}
	
	int liczba = 0;
	char znak;
//	cin >> znak;
	while(znak != 'q'){ // dopóki  znak nie jest równy 'q' 
		cout << "Program wykonal sie " << liczba << " razy"; // wypisz zmienn¹ liczba
		liczba++; // zwiêksz zmienn¹ liczba
		cout << "Wybierz pozycje z menu:" << endl;
		cout << "q) aby wyjsc" << endl;
		cout << "1) rysuj choinke" << endl;
		cout << "2) rysuj lejek" << endl;		
		cin >> znak;    // pobierz znak z klawiatury i zapisz do zmiennej znak
		cout << "wpisales" << znak << endl;
		
		if(znak == '1'){
			cout << "choinka" << endl;
		}
		
		if(znak == '2'){
			cout << "lejek" << endl;
		}
		
		
	}

	return 0;
}
