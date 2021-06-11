#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

char wyborkalk;

char wybormenu;

int main() 
{
	//<start>
	cout<<"\t Witaj w testowej aplikacji ucznia"<<endl<<endl;
	cout<<"Znajdziesz tutaj ciekawe opcje programowe stworzone za pomoca jezyka c++ "<<endl<<endl;
	Sleep(1500);
	cout<<"Nacisnij dowolny klawisz aby rozpoczac \a"<<endl;
	getch();
    //</start>
	system("CLS");
	cout<<"\t Do wyboru masz kilka opcji tego programu: "<<endl;
	cout<<"1.Kalkulator"<<endl;
	cout<<"2.Generator wizytowek"<<endl;
	cout<<"3.Mini quiz"<<endl;
	cout<<"4.Prosta gierka"<<endl;
	wybormenu=getch();
	system("cls");
	
	switch(wybormenu)
	{
		case '1':
			{
				for(;;)
				{
				float kalkx, kalky, kalkw;
				cout<<"Kalkulator C++"<<endl;
				cout<<"1.Dodawanie"<<endl;
	            cout<<"2.Odejmowanie"<<endl;
	            cout<<"3.Mnozenie"<<endl;
	            cout<<"4.Dzielenie"<<endl;
	            cout<<"5.Cofnij"<<endl;
	            cout<<"6.Wyjscie"<<endl;
	            wyborkalk=getch();
	            if(wyborkalk=='6') 
				{
					return 0 ;
				}
				else if(wyborkalk=='5')
				{
					
				}
	            system("cls");
	            cout<<"Podaj pierwsza liczbe: ";
				cin>>kalkx;
				cout<<"Podaj druga liczbe: ";
				cin>>kalky;
				switch(wyborkalk)
				{
					case '1':
						{
							kalkw=kalkx+kalky;
							cout<<"Wynik dodawania to: "<<kalkw;
							getch();
						}
					break;
					case '2':
						{
							kalkw=kalkx-kalky;
							cout<<"Wynik odejmowania to: "<<kalkw;
							getch();
						}
					break;
					case '3':
						{
							kalkw=kalkx*kalky;
							cout<<"Wynik mnozenie to: "<<kalkw;
							getch();
						}
					break;
					case '4':
						{
							if(kalky==0 || kalkx==0)
							{
								cout<<"Nie dzielelimy przez zero"<<endl;
								break;
							}
							else
							{
							kalkw=kalkx/kalky;
							cout<<"Wynik dzielenia to: "<<kalkw;
							getch();
						    }
						}
					break;
				   }
			    }
			}
	    break;
		
		default:
		 cout<<"Nie ma takiej opcji :C";
	}
	
	
	return 0;
}
