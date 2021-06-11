#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout<<"Algorytm silnia Zadanie domowe"<<endl;
	long double waznaliczba, wynik=1;
	cout<<setprecision(10000000);
	cout<<"Podaj liczbe : ";  cin>>waznaliczba;
	for(int i=1 ; i<=waznaliczba ; i++) {
		wynik=wynik*i;
		
	}
	cout <<wynik;
	
	return 0;
}
