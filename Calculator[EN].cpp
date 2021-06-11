#include <iostream>
#include <windows.h>

using namespace std;

    int choice;
    float A;
    float B;
    float score;


int main() 
{
 	cout<<"Hello user :) !"<<endl;
	 Sleep (1000);
	cout<<"This is a C ++ calculator.";
     Sleep (1000);
	cout<<" Select the type of operation and enter the values of the numbers"<<endl;
	 Sleep (500);
	cout<<"1.Addition"<<endl;
	 Sleep (500);
	cout<<"2.Subtraction"<<endl;
	 Sleep (500);
	cout<<"3.Multiplication"<<endl;
	 Sleep (500);
	cout<<"4.Division"<<endl; 
	 Sleep (500);
    cout<<endl<<"Choice: ";
    cin >> choice;
    if (choice>4||choice<1)
    {
    	cout << "There is no such choice";
    	return 0;
	}
	cout<<endl<<"Enter the first value: ";
	cin >> A;
	cout <<endl<<"Enter the second value: ";
	cin >>B;
    if (choice== 1 )
    {
    	score=A+B;
		cout<<A<<"+"<<B<<"="<<score;
	}
	if (choice== 2 )
	{
	    score=A-B;
		cout<<A<<"-"<<B<<"="<<score;
	 } 
    if (choice== 3 )
    {
    	score=A*B;
		cout<<A<<"*"<<B<<"="<<score;
	}
    if (choice== 4 )
    {
        if(A==0||B==0)
        {
        	cout << "Can not divide by 0";
	    }	
		else
		{
			score=A/B;
			cout<<A<<"/"<<B<<"="<<score;
		} 
	}
	return 0;	
}
