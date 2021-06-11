#include <iostream>

using namespace std;

int ile, i , p,ille ;
int liczba[10];
int a,b,wynik;




int main() 
{
	cout <<"Ile tych liczb jest ?"<<endl;
	cin>>ile;
	cout <<"Podaj wszyskie liczby do tego zadania "<<endl;
	 for (i=0;i<ile ;i++)
	 {
	 	cin>> liczba[i];
	 }
	 
	 cout <<"Podaj 'p' : ";
	 cin>>p;
	 
	 
    for(i=0;i<ile ;i++)
    {
    if( liczba[i] % p == 0 ) cout << liczba[i]<<" Liczba jest nie prawidlowa"<<endl;
    else cout << liczba[i]<<"  Liczba jest prawidlowa"<<endl;
    }
    
    cout<<"Podaj dwie najwiêksze liczby, nie bêdzie wszyskiego za ciebie robic :p"<<endl;
    cin>>a;
    cin>>b;
    
    wynik=a*b;
    
    cout<<endl<<wynik;
    
	return 0;
}
