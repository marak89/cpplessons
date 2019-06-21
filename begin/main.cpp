#include <iostream>
using namespace std;
void choinka( int wysokosc){
	 int i=0;
	for (;i<wysokosc;i++)	{ // petla zewnetrzna
		for (int s=(wysokosc-i);s>0;s--) { // petla wewnetrzna
			cout << " " ;   // wyowietlanie spacji przed gwiazdkami 
		}
		for (int j=0;j<i;j = j + 1) { // petla wewnetrzna
			cout << "*" ;   // wyowietlanie gwiazdek z lewej 
		}
		for (int j=0;j<i;j = j + 1) { // petla wewnetrzna
			cout << "*" ;   // wyowietlanie gwiazdek z prawej 
		}
	cout <<	endl ; // przejocie do nowej lini 
	}
}
int main(int argc, char** argv) {
	cout << "argc: " << argc << endl;
	if(argc > 4 ){
		cout <<"wiencej niz trzy" << endl; 
	}else{
		if(argc == 4 ){
			cout <<"rowne trzy" << endl;
		}else{
			cout << "mniej niz trzy" << endl;	
		}
	
   }		
   choinka(argc);		
	return 0;
}
