#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int M, A, B;
float AP,BP;
string letter[120];

int main()
{
    {
	
   	srand(time(NULL));
	cout<<"---"<<"Welcome to the letter array sort program!"<<"---"<<endl;
	cout<<"???"<<"How many times the program has to randomize"<<"???"<<endl;
	cout<<"----how many times---     "; cin>>M;
	cout<<".............................................................................."<<endl;
	for(int i=0;i<M;i++)
		{
			letter[i]=rand()%23+97;
			if(letter[i]=="a"||letter[i]=="e"||letter[i]=="i"||letter[i]=="u"||letter[i]=="o"||letter[i]=="y") A++;
			else B++;
			
		}
    for(int i=0;i<M;i++)
    {
    	if(i % 26==0&&i!=0)
		{
			cout<<endl;
		}
		cout<<"("<<letter[i]<<")";
		Sleep(100);
    }
    cout<<endl<<"''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    
    
    for(int x=0;x<M;x++)
    {
	
        for(int y=1;y<M;y++)
            if(letter[y-1] > letter[y])
            {
                swap(letter[y-1], letter[y]);
            }
    }
            

    cout<<"}Numbers after sorting{"<<endl;
   	cout<<".............................................................................."<<endl;
    for(int i=0;i<M;i++)
    {
    	if(i % 26==0&&i!=0)
		{
			cout<<endl;
		}
		cout<<"["<<letter[i]<<"]";
		Sleep(100);
    }
    cout<<endl<<"''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    cout<<"======================"<<endl;
    AP=(A*100)/M;
    BP=100-AP;
    cout<<"Vowels were-> "<<A<<"  "<<AP<<"%"<<endl;
    cout<<"Consonants were-> "<<B<<"  "<<BP<<"%"<<endl;
    cout<<"======================"<<endl;
    
    
    

    return 0;
 }
}
