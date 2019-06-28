#include <iostream>
using namespace std;

void wpisz(int &x, int &y){
	cout << "Podaj x" << endl;
	cin >>x;
	cout << "Podaj y" << endl;
	cin >> y;
	cout << "Podales x = " << x << " y = " << y << endl;
}

void dodawanie(int &x, int &y){
			cout << "Dodawanie" << endl;
			wpisz(x,y);
			cout << " " << x << " + " << y << " = " << x+y << endl; 
			
}
void odejmowanie(int &x, int &y){
	cout << "Odejmowanie" << endl;
			wpisz(x,y);
			cout << "" << x << " - " << y << " = " << x-y << endl;
				
}
void mnozenie(int &x, int &y){
	cout << "Mnozenie" << endl;
			wpisz(x,y);
			cout << "" << x << " * " << y << " =  " << x*y << endl;
			
}
void dzielenie(int &x, int &y){
	cout << "Dzielenie" << endl;
			wpisz(x,y);
			if( y == 0 ){
				cout <<	"nie mozna dzielic przez zero" << endl;
			} else 
			    cout << "" << x << " / " << y << " =  " << x/y << endl;	
}



int main(int argc , char** argv)  {
	char znak;
	int x=0 ,y=0;
	while( znak != 'q'){
		
	cout << "Wybierz pozycje z menu:" << endl;
		cout << "q) aby wyjsc" << endl;
		cout << "1) Dodawanie" << endl;
		cout << "2) Odejmowanie" << endl;
		cout << "3) Mnzenie" << endl;
		cout << "4) Dzielenie" << endl;
		cin >> znak;	
		
		if(znak == '1'){
			dodawanie(x,y);
		}
		
		if(znak == '2'){
			odejmowanie(x,y);
		}
		if(znak == '3'){
			mnozenie(x,y);
		}	
		if(znak == '4'){
			dzielenie(x,y);
		}	
			
	}
	
			
	return 0;
}

