#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int liczba[100],ilet,ilen;

bool czy_pierwsza(int liczba)
{
	if(liczba<2)
		return false;
	for(int i=2;i*i<=liczba;i++)
		if(liczba%i==0)
			return false;
	return true;
}
int main()
{
	srand(time(NULL));
	for(int i=1;i<=100;i++)
	{
	    liczba[i]=rand()%1000+1;
	    if(czy_pierwsza(liczba[i]))
        {
           //cout<<"Liczba "<<liczba[i]<<" jest pierwsza"<<endl;
           ilet=ilet+1;
        }

	    else
	    {
	        //cout<<"Liczba "<<liczba[i]<<" nie jest pierwsza"<<endl;
	        ilen=ilen+1;

	    }

	}

   cout<<endl<<endl<<"Wylosowalem tyle liczb pierwszych "<<ilet<<endl;
   cout<<"Wylosowalem tyle liczb ktore nie sa pierwsze "<<ilen<<endl;

	system("pause");
	return 0;
}
