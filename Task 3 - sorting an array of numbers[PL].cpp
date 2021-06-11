#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



using namespace std;

int tablica[5];

int main()
{

	
    
    cout << "Sortowanie tablicy 50 liczb z zakresu 1-100\n";
    
    
    srand(time(NULL));
    for(int i = 0; i < 50; i++)
	{
	tablica[i] = rand() % 100+1;
	}   
    cout << "Tablica liczb:"<<endl;
    cout << "****************************************************************"<<endl;
    for(int i=1;i<=50;i++)
    {
    	if(tablica[i]<=9)
		{
			cout<<tablica[i]<<" "<<" | ";
		}
		else if(tablica[i]>99)
		{
			cout<<tablica[i]<<"| ";
		}
		else
        cout<<tablica[i]<<" | ";
    }
    
    
    for(int x=0;x<=50;x++)
        for(int y=1;y<50;y++)
            if(tablica[y-1] < tablica[y])
            {
                swap(tablica[y-1], tablica[y]);
            }
            

    
    cout<<endl<<"Tablica liczb po sortowaniu:"<<endl;
    cout<<"****************************************************************"<<endl;
    for(int i=0; i<=50;i++)
    {
        if(tablica[i]<=9)
		{
			cout<<tablica[i]<<" "<<" | ";
		}
		else if(tablica[i]>99)
		{
			cout<<tablica[i]<<"| ";
		}
		else
        cout<<tablica[i]<<" | ";
    }
    cout <<endl<<endl<<"Koniec...";
    system("pause");
    return 0;
}
