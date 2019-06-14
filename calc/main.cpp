#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)  {
	char znak;
	int x,y;
	while(znak != 'q'){	
		
		cout << "Wybierz pozycje z menu:" << endl;
		cout << "q) aby wyjsc" << endl;
		cout << "1) Dodawanie" << endl;
		cout << "2) Odejmowanie" << endl;
		cout << "3) Mnzenie" << endl;
		cout << "4) Dzielenie" << endl;
		cin >> znak;
		
		if(znak == '1'){
			cout << "Dodawanie" << endl;
			cout << "podaj x" << endl;
			cin >> x;
			cout << "podaj y" << endl;
			cin >> y;
			cout << "podales x= " << x << " y= " << y << endl;
			cout << "" << x << " + " << y << " = " << x+y << endl;
		}
			
		if(znak == '2'){
			cout << "Odejmowanie" << endl;
			cout << "podaj x" << endl;
			cin >>x;
			cout << "podaj y" << endl;
			cin >> y;
			cout << "podales x= " << x << " y= " << y << endl;
			cout << "" << x << " - " << y << " = " << x-y << endl;
			
					}
		
		if(znak == '3'){
			cout << "Mnozenie" << endl;
			cout << "podaj x" << endl;
			cin >>x;
			cout << "podaj y" << endl;
			cin >> y;
			cout << "podales x= " << x << " y= " << y << endl;
			cout << "" << x << " * " << y << " =  " << x*y << endl;
		}

		if(znak == '4'){
			cout << "Dzielenie" << endl;
			cout << "podaj x" << endl;	
			cin >>x;
			cout << "podaj y" << endl;
			cin >> y;
			if( y == 0 ){
				cout <<	"nie mozna dzielic przez zero" << endl;
			} else {
			    cout << "podales x= " << x << " y= " << y << endl;
			    cout << "" << x << " / " << y << " =  " << x/y << endl;	
			}
			
		}
		
	



}




	

	return 0;
}
