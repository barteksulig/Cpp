#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int M;
int letter[120];

int main()
{

   	srand(time(NULL));
	cout<<"---"<<"Welcome to the letter array sort program!"<<"---"<<endl;
	cout<<"???"<<"How many times the program has to randomize"<<"???"<<endl;
	cout<<"----how many times---     "; cin>>M;
	for(int i=1;i<=M;i++)
		{
			letter[i]=rand()%100+1;
			
		}
    for(int i=1;i<=M;i++)
    {
    	cout<<"("<<letter[i]<<")";
    }
    
    
    for(int x=1;x<=M;x++)
        for(int y=1;y<=M;y++)
            if(letter[y-1] < letter[y])
            {
                swap(letter[y-1], letter[y]);
            }
            

    
    cout<<endl<<"Array of numbers after sorting:"<<endl;
    cout<<"****************************************************************"<<endl;
    for(int i=1; i<=M;i++)
    {
        cout<<letter[i]<<" | ";
    }
    cout <<endl<<endl<<"End...";
    system("pause");
    return 0;
}
