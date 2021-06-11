/*

*/

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>


using namespace std;

int Limie;
string imie,nazwisko;

int main() {
	srand(time(NULL));
	
	cout<<"Podaj swoje imie: ";      cin>>imie; 
	int Limie=imie.length();        
    cout<<"Podaj swoje nazwisko: ";  cin>>nazwisko; 
    int Lnazw=nazwisko.length(); 
    for(int i;i<=Limie;i++)
	{
    	int liczba[30];
        liczba[i]=rand()%Limie+1;
        cout<<liczba;
	}
	           
	
    
	return 0;
}
