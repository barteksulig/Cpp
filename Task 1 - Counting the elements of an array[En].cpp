#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

	string name, surname;		
	int int_letter, int_name, int_surname;			
	int journal_number;		
	int odd_number, even_number;					
	int board[100][100];

int main()
{		
	cout << "?Give your name: _";
	cin >> name;
	cout << "?Enter your last name: _";
	cin >> surname;
	cout << "?Enter your journal number: _";
	cin >> journal_number;
	int_name = name.length();
	int_surname = surname.length();
	int_letter = int_name * int_surname;
	getch();
	system("CLS");
	cout << "Name~~           " << name << endl;
	cout << "Surname~~        " << surname << endl;
	cout << "Journal number~~ " << journal_number << endl;
	cout << endl;
	Sleep(1000);
	srand(time(NULL));
	
	for(int x=1;x<=int_name;x++)
		for(int y=1;y<=int_surname;y++)
			board[x][y]=rand()%journal_number+ 1;
	cout << "Array with numbers" << endl;
	for(int x=1;x<=int_name;x++)
		{
      	 cout << endl;
         for(int y=1;y<=int_surname;y++) 
		 {
		 	if(board[x][y]<9)
		 }cout << board[x][y] << " ";
		}
		
		
    cout<<endl<<endl;
	
	for(int x=1;x<=int_name;x++)
		for(int y=1;y<=int_surname;y++)
		{
			if   (board[x][y]%2==0) even_number = even_number + 1;
			else                    odd_number= odd_number+1;
		}
			
	if (journal_number%2==0)			
		cout << "+=+Even numbers are+=+ " <<endl<<"--------"<< even_number<<"--"<<((even_number * 100) / int_letter) << " %"<<"--------";
	else
        cout << "+=+Odd numbers are+=+ " <<endl<<"--------"<< odd_number<<"--"<<((odd_number * 100) / int_letter) << " %"<<"--------";
	getch();
	return 0;
}
