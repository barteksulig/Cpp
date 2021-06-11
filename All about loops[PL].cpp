#include <iostream>
#include <conio.h>

using namespace std;

int wybor;

int main()
{
	cout<<"Witaj w programie przykladowym o petlach (zrodlo Pasja informatyki)"<<endl;
	cout<<"Petle (ang. loop) to konstrukcje jezykowe sluzace do zdefiniowania szeregu instrukcji, ktore beda powtarzane \nwielokrotnie. Poznamy trzy podstawowe rodzaje petli: for, while oraz do .. while."<<endl;
	cout<<"Wybierz jaka petle chcesz zobaczyc: \n1.Petla for\n2.Petla while\n3.Petla do...while"<<endl;
	//wiem ze to nie wyglada eleganco ale zawsze chcialem uzyc "\n" zeby skocic kod
	cout<<"Wybor: ";
	if(!(cin>>wybor))
	{
	  cout<<"To nie jest liczba! ";
	  exit(0);	
	}
	if(wybor==1)
	{
	system("CLS");
	int a;
	cout<<"Petla for\nPierwsza petla, ktora zazwyczaj poznajemy jest konstrukcja for. W przypadku petli for z gory powinnismy \nwiedziec ile razy instrukcje maja sie wykonac Aby zdefiniowac w C++ petle for wykonujaca sie 10 razy zapiszemy:"<<endl;
    cout<<"for(int i=1; i<=10; i++)"<<endl;
    cout<<"{"<<endl;
    cout<<"[instrukcje, ktore beda sie powtarzac]"<<endl;
    cout<<"}"<<endl;
    cout<<"*****Przyklad***** \nPodaj ile razy petla for ma sie wykonac: ";
    cin>>a;
     for(int i=1; i<=a; i++)
      {
      cout<<"Raz: "<<i<<endl;
      } 
      system("pause");
    }
    if(wybor==2)
    {
    	system("CLS");
    	int a;
		cout<<"Petla while"<<endl;
		cout<<"W przeciwienstwie do petli for nie musimy od razu definiowac po ilu iteracjach petla zakonczy dzialanie.\nw przypadku petli while warunek sprawdzany jest na poczatku"<<endl;
		cout<<endl<<"while(strzal != liczba)"<<endl;
        cout<<"{"<<endl;
        cout<<"[instrukcje realizujace odgadywanie liczby]"<<endl;
        cout<<"}"<<endl;
        cout<<endl<<"*****Przyklad***** \nAby petla sie skonczyla podaj wynik dzialania 2+2*2=?"<<endl;
        while(a!=6)
        {
        	cout<<"Wynik:";
			cin>>a;	
		}
        cout<<"Dobrze!"<<endl;
        system("pause");    
	}
	if(wybor==3)
	{
		system("CLS");
    	int a;
		cout<<"W przeciwienstwie do petli for nie musimy od razu definiowac po ilu iteracjach petla zakonczy dzialanie.\nRoznica miedzy petla while i do..while polega na tym, iz w przypadku petli while warunek \nsprawdzany jest na poczatku, zas w do..while na koncu bloku instrukcji. \nStad linie kodu zawarte w petli do..while wykonaja sie zawsze przynajmniej jeden raz:"<<endl;
	    cout<<endl<<"do"<<endl;
        cout<<"{"<<endl;
        cout<<"[instrukcje realizuj¹ce odgadywanie liczby]"<<endl;
        cout<<"} while(strzal != liczba);"<<endl;
        cout<<endl<<"*****Przyklad***** \nAby petla sie skonczyla napisz liczbe 123"<<endl;

        do
        {
           cout << "Podaj liczbe 123 aby zakonczyc petle" <<endl;
           cin >> a;
           cout << "Podales liczbe " << a <<endl;
        } while( a != 123 );
		
         
	}
	else 
	{
		cout<<"Zly wybor";
	}
	return 0;
}

