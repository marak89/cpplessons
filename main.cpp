/*
Program do rysowania choinki
Wykona�: 
*/
#include <iostream> // do��czanie zewn�trznej biblioteki - iostream 
using namespace std; // u�ywamy standardowej przestrzeni nazw
int main(int argc, char** argv) {
	cout << "Hello world" << endl;
	cout <<     "Jestem twoim komputerem :)" << endl;
    for (int i=0;i<10;i++)	{
    	for (int j=0;j<i;j++) {
    		cout << "*"  ;
		}
        cout <<	endl ;
	}
	return 0;
}


