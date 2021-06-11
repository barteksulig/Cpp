#include <conio.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

	int x, y;	
	int biggest, smallest;
	int quantity[10];
	int board[6][6];

int main()
{
    srand(time(NULL));
	cout<<"Bartosz Suligowski Class 4TIA"<<endl;
	cout<<"$How many columns -> ";
	cin>>y;
	cout<<"$How many lines -> ";
	cin>>x;


	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=y; j++)
		{
			board[i][j]=rand()%100+1;
		}
			
	}
	
	cout << "=============================================>" << endl;
	
	for(int i=1; i<=x; i++)
		{
      	cout << endl;
        for(int j=1; j<=y; j++)
			{
				if(board[i][j]<=9) cout<<"  ";
				else if(board [i][j]<100) cout<<" ";
				cout << board[i][j] << ", ";
			}
	
		}
	cout<<endl<<endl;

	smallest = 100;
	//sprawdzanie najmniejszej
	for(int i=1; i<=x; i++)
		for(int j=1; j<=y; j++)
			if (board[i][j] < smallest)
			{
				smallest = board[i][j];
			}
	for(int i=1; i<=x; i++)
		for(int j=1; j<=y; j++)
			if (board[i][j]== smallest)
			{
				quantity[0]++;
			}
	cout << "<=============================================" << endl;
	//sprawdzenie najmniejszej		
	cout<<"The smallest number is: " << smallest;
	cout<<" and occurs "<<quantity[0]<<" times.";
	
	//**************************************************************
	
	biggest = 0;
	for(int i=1; i<=x; i++)
		for(int j=1; j<=y; j++)
			if (board[i][j] > biggest)
			{
				biggest = board[i][j];
			}
	for(int i=1; i<=x; i++)
	 	for(int j=1; j<=y; j++)
			if (board[i][j]== biggest)
			{
				quantity[1]++;
			}
			
	cout<<endl; 
	//sprawdzanie najwiekszej
	cout  <<"The biggest number is: " << biggest;
	cout<<" and occurs "<<quantity[1]<<" times.";
	
	getch();
	return 0;
}
