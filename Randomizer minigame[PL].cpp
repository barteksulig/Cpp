#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int ile_rund,suma[2];
string gracz1,gracz2,gracz3;

int main()
{

    	cout<<"Podaj nazwe gracza : ";cin>>gracz1;
    	cout<<"Podaj nazwe gracza : ";cin>>gracz2;
    	cout<<"Podaj nazwe gracza  : ";cin>>gracz3;
        cout<<"Ile rund gracie?"<<endl;cin>>ile_rund;
	for (int i=1; i <= ile_rund; i++)
     {
      int	wylosowana1 = rand()%8 + 1,wylosowana2 = rand()%8 + 1,wylosowana3 = rand()%8 + 1;
	  cout<<" w losowaniu nr " << i << " wylosowano dla gracza "<<gracz1<<" liczbe "<<wylosowana1<<"\n";
	  cout<<" w losowaniu nr " << i << " wylosowano dla gracza "<<gracz2<<" liczbe "<<wylosowana2<<"\n";
	  cout<<" w losowaniu nr " << i << " wylosowano dla gracza "<<gracz3<<" liczbe "<<wylosowana3<<"\n";
	  suma[0]=suma[0]+wylosowana1;
	  suma[1]=suma[1]+wylosowana2;
	  suma[2]=suma[2]+wylosowana3;
     }
     cout<<"Suma gracza "<<gracz1<< " wyniosla "<< suma[0]<<endl;
     cout<<"Suma gracza "<<gracz2<< " wyniosla "<< suma[1]<<endl;
     cout<<"Suma gracza "<<gracz3<< " wyniosla "<< suma[2]<<endl;
	return 0;
}
