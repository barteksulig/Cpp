#include <iostream>
#include <time.h>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

int Pdzien, Pmiesiac, Prok;
int Arok, Amiesiac, Adzien;
string imie, nazwisko,drugie_imie, PESEL;

int error (int &x)
{
	cout<<"Error:Nieprawidlowe dane, prosze sprobowac ponownie: ";
	cin>>x;
    if(Pdzien<1||Pdzien>31) error(Pdzien);
}
int error1 (int &x)
{
	cout<<"Error:Nieprawidlowe dane, prosze sprobowac ponownie: ";
	cin>>x;
	if(Pmiesiac<1||Pmiesiac>12) error(Pmiesiac);
}
int error2 (int &x)
{
	cout<<"Error:Nieprawidlowe dane, prosze sprobowac ponownie: ";
	cin>>x;
    if(Prok<1930||Prok>2018) error(Prok);
}


int main()
{
   SYSTEMTIME st;
   GetLocalTime(&st);
 
   int godzina = st.wHour;
   int minuta  = st.wMinute;
   int sekunda = st.wSecond;
   int milisekunda = st.wMilliseconds;
   int dzien = st.wDay;
   int miesiac = st.wMonth;
   int rok = st.wYear;
 
   cout<< "Podaj date urodzenia: "<<endl; 
   cout<<"Dzien: ";
   cin >> Pdzien;
   if(Pdzien<1||Pdzien>31) error(Pdzien);
   cout<<"Miesiac: ";
   cin >> Pmiesiac;
   if(Pmiesiac<1||Pmiesiac>12) error1(Pmiesiac);
   cout<<"Rok: ";
   cin>>Prok;
   if(Prok<1930||Prok>rok) error2(Prok); 
   Arok=rok-Prok;
   Amiesiac=Pmiesiac-miesiac;
   Adzien=dzien-Pdzien;
   
   if(Amiesiac>0) Arok=Arok-1;
   if(Amiesiac==0)
   {
    if(Adzien>=0) Arok=Arok;
    else Arok=Arok-1;	
   }
	cout<<"Podaj swoje imie: ";
	cin >>imie;
	cout<<"Podaj swoje drugie imie(jesli nie masz wypisz --): ";
	cin >>drugie_imie;
	cout<<"Podaj swoje nazwisko: ";
	cin >>nazwisko;
	cout<<"Podaj swoj PESEL: ";
	cin >>PESEL;
	if(drugie_imie=="--") drugie_imie="  ";
	
	fstream plik;
	plik.open("Dowod_Osobisty.txt",ios::out);
	plik<<nazwisko<<" "<<imie<<" "<<drugie_imie<<endl;
	plik<<Arok<<"Lat"<<endl;
    plik<<PESEL;
	
	plik.close();	
	
	
   return 0;
}
