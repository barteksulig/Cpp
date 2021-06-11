#include <iostream>
#include <iomanip>

using namespace std;

long double dobra[1000000];
int iletego;

int main() 
{
	cout<<setprecision(10);
	cout<<"Podaj ile mam podac wyrazow ciagu "<<endl;
	cin>>iletego;
	dobra[0]=1;
	cout<<"1."<<dobra[0]<<endl;
	dobra[1]=1;
	cout<<"2."<<dobra[1]<<endl;
    for(int o=2 ; o<iletego ; o++)
    {
    	dobra[o]=dobra[o-1]+dobra[o-2];
    	cout<<o+1<<"."<<dobra[o]<<endl;
	}
	
	return 0;
}
