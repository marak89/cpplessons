#include <iostream> // do��czanie zewn�trznej biblioteki - iostream 
using namespace std; // u�ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) { // g��wna funkcja w c++
	char znak;
	while(znak != 'q'){ // dop�ki  znak nie jest r�wny 'q' 

		cout << "Wybierz pozycje z menu:" << endl;
		cout << "q) aby wyjsc" << endl;
		cout << "1) rysuj choinke" << endl;
		cout << "2) rysuj lejek" << endl;		
		cin >> znak;    // pobierz znak z klawiatury i zapisz do zmiennej znak
		cout << "wpisales" << znak << endl;
		
		if(znak == '1'){
			int i = 0;
			for (;i<10;i++)	{ // p�tla zewn�trzna
		    	for (int s=(0);s<i;s++) { // p�tla wewn�trzna
		    		cout << " " ;   // wy�wietlanie spacji przed gwiazdkami 
				}
				for (int j=10;j>i;j = j - 1) { // p�tla wewn�trzna
		    		cout << "*" ;   // wy�wietlanie gwiazdek z lewej 
				}
				for (int j=10;j>i;j = j - 1) { // p�tla wewn�trzna
		    		cout << "*" ;   // wy�wietlanie gwiazdek z prawej 
				}
	    	cout <<	endl ; // przej�cie do nowej lini 
			}
		}
		
		if(znak == '2'){
			cout << "lejek" << endl;
		}
	}
	return 0;
}

