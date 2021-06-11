#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <time.h>
#include <windows.h>



using namespace std;

string temat,temat1,tresc[6], linia;
string odpA[6],odpB[6],odpC[6],odpD[6],poprawna[6];
int nr_lini=1,nr_zadania=0, punkty;
string odpowiedz,nick;
string wybor;


int main() 
{
	//czas
    SYSTEMTIME st;
    GetLocalTime(&st);
 
    int godzina = st.wHour;
    int minuta  = st.wMinute;
    int sekunda = st.wSecond;
    int milisekunda = st.wMilliseconds;
    int dzien = st.wDay;
    int miesiac = st.wMonth;
    int rok = st.wYear;
    //czas
   
	fstream plik;
	plik.open("quiz-lalka.txt",ios::in);
	if(plik.good()==false)
	{
		cout<<"Plik nie istnieje";
		exit(0);
	}
	while(getline(plik,linia))
	{
	
		switch(nr_lini)
		{
		
		   case 1: temat=linia;                  break;
		   case 2: temat1=linia;                 break;
		   case 3: tresc[nr_zadania]=linia;      break;
		   case 4: odpA[nr_zadania]=linia;       break;
		   case 5: odpB[nr_zadania]=linia;       break;
		   case 6: odpC[nr_zadania]=linia;       break;
		   case 7: odpD[nr_zadania]=linia;       break;
		   case 8: poprawna[nr_zadania]=linia;   break;
		}
			
		if(nr_lini==8) 
		{
			nr_lini=2;
			nr_zadania++;
		} 
		nr_lini++;
	}plik.close();
	cout<<temat<<endl;
	cout<<temat1<<endl;
	getch();
	system ("CLS");
	
	for(int i=0;i<=5;i++)
		{
		cout<<"-----------------------------------------------------------------------------------------------"<<endl;	
		cout<<endl<<tresc[i]<<endl;
		cout<<odpA[i]<<endl;
		cout<<odpB[i]<<endl;
		cout<<odpC[i]<<endl;
		cout<<odpD[i]<<endl<<endl;
		cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;	
		cout<<"Twoja odpowiedz to :";
		cin>>odpowiedz;
			
		transform(odpowiedz.begin(),odpowiedz.end(),odpowiedz.begin(), ::tolower );
		if(odpowiedz==poprawna[i]) 
		    {
		    cout<<"Brawo zdobywasz punkt!"<<endl;
		    punkty++;
		    }
		else cout<<"Zla odpowiedz!"<<endl;
		system("CLS");	
	    }
	system("CLS");
	cout<<"Twoja liczba punktow to: "<<punkty<<endl;
    for(;;)
    {
    cout<<"Czy chcesz zapisac sie na karcie wynikow?[T/N]: ";
	cin>>wybor;
	if(wybor=="t"||wybor=="T")
	{
	    cout<<"Podaj swoj nick: ";
        cin>>nick;
        fstream plik1;
        plik1.open("Wyniki.txt",ios::out|ios::app);
	    plik1<<"Gracz: "<<nick<<"   ";
	    plik1<<"Punkty: "<<punkty<<"   "<<dzien<<"/"<<miesiac<<"/"<<rok<<"/"<<"  "<<godzina<<":"<<minuta<<endl;
        plik1.close();
        exit (0);
    }
    else if(wybor=="n"||wybor=="N") exit(0);
    else cout<<endl<<"Zly wybor"<<endl;
    }
    
    
 
}
