#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int x, y;

int main()
{
    cout<<"Algorytm Euklidesa, zadania"<<endl;
	cout << "Podaj pierwsza liczbe: ";
    cin >> x;
    cout << "Podaj druga liczbe: ";
    cin >> y;

    do
    {
        if(x>y) 
		{
           x = x - y;
        } 
		else 
		{
            y = y - x;
        }
    }
    while(x != y);

    cout << "NWD(X,Y)="<<x<< endl;
    
    getch();

    return 0;
}
