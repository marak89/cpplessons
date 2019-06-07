#include <iostream> // do³¹czanie zewnêtrznej biblioteki - iostream 
using namespace std; // u¿ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) { // g³ówna funkcja w c++
	char znak;
	while(znak != 'q'){ // dopóki  znak nie jest równy 'q' 

		cout << "Wybierz pozycje z menu:" << endl;
		cout << "q) aby wyjsc" << endl;
		cout << "1) rysuj choinke" << endl;
		cout << "2) rysuj lejek" << endl;		
		cout << "3) rysuj krysztal" << endl;		
		cout << "4) rysuj ..." << endl;				
		cin >> znak;    // pobierz znak z klawiatury i zapisz do zmiennej znak
		cout << "wpisales " << znak << endl;
		
		if(znak == '2'){
			int i = 0;
			for (;i<10;i++)	{ // pêtla zewnêtrzna
		    	for (int s=(0);s<i;s++) { // pêtla wewnêtrzna
		    		cout << " " ;   // wyœwietlanie spacji przed gwiazdkami 
				}
				for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
		    		cout << "*" ;   // wyœwietlanie gwiazdek z lewej 
				}
				for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
		    		cout << "*" ;   // wyœwietlanie gwiazdek z prawej 
				}
	    		cout <<	endl ; // przejœcie do nowej lini 
			}
		}
		
		if(znak == '1'){
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
		}
		if(znak == '3'){
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
			    cout <<	endl ; // przejœcie do nowej lini}
//	             {
//				}
	    		cout <<	endl ; // przejœcie do nowej lini
//	    		{
				int i=0;
				for (;i<10;i++)	{ // pêtla zewnêtrzna
			    	for (int s=(0);s<i;s++) { // pêtla wewnêtrzna
			    		cout << " " ;   // wyœwietlanie spacji przed gwiazdkami 
					}
					for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
			    		cout << "*" ;   // wyœwietlanie gwiazdek z lewej 
					}
					for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
			    		cout << "*" ;   // wyœwietlanie gwiazdek z prawej 
					}
		    	cout <<	endl ; // przejœcie do nowej lini
		    	
			}
//				 }
			}
		}
		if(znak == '4'){
			// narysowac krysztal
			
			for (int i=0;i<10;i++)	{ // pêtla zewnêtrzna
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
			
			for (int i=0;i<10;i++)	{ // pêtla zewnêtrzna
		    	for (int s=(0);s<i;s++) { // pêtla wewnêtrzna
		    		cout << " " ;   // wyœwietlanie spacji przed gwiazdkami 
				}
				for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
		    		cout << "*" ;   // wyœwietlanie gwiazdek z lewej 
				}
				for (int j=10;j>i;j = j - 1) { // pêtla wewnêtrzna
		    		cout << "*" ;   // wyœwietlanie gwiazdek z prawej 
				}
	    		cout <<	endl ; // przejœcie do nowej lini 		
				}	
		}

}
return 0;
}



