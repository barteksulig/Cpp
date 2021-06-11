#include <iostream> 
#include <conio.h>
#include <windows.h>

using namespace std; 
float powierzchnia[109];

struct kraj   // deklaracja struktury 

{ 
    char  nazwa[20];           //Nazwa
    char  kontynent[20];       //Kontynent
    char  waluta[20];           //Waluta (trzyliterowy skr�t nazwy waluty) {0,1,2}
    float powierzchnia;        //Powierzchnia ( w tysi�cach km kwadratowych )
    float ilosc_mieszkancow;   //Ilo�� mieszka�c�w ( w milionach )
    float PKB;                 //PKB (Produkt krajowy brutto, wszystkie kraje musz� mie� warto�ci w tej samej walucie)
}; 


int main() 

{ 

    kraj 1 = 
    { 
     "Bulgaria",
     "Europa",
     "BGN",
     110.910,
     7.061,
     56.9
    };   
    kraj 2 = 
    { 
     "Rosja",
     "Azja",
     "RUB",
     17075.400,
     146.238185,
     1719.9
    }; 
    kraj 3 = 
    { 
     "Chiny",
     "Azja",
     "CNY",
     9562.911,
     1420,
     14092
    };
    kraj 4 = 
    { 
     "Niemcy",
     "Europa",
     "EUR",
     357.578,
     83.019200,
     4212
    }; 
    kraj 5 =
    {
     "Korea Polnocna",
     "Azja",
     "KPW",
     120.540,
     25643466,
     28500
	};

    
    int najmniejsza = 20000000;
	//sprawdzanie najmniejszej
	for(int i=1; i<=x; i++)
		for(int j=1; j<=y; j++)
			if (powierzchnia < najmniejsza)
			{
				najmniejsza = powierzchnia;
			}
	cout << "<=============================================" << endl;
	//sprawdzenie najmniejszej		
	cout<<"The smallest number is: " << smallest;
	
	//**************************************************************
	
	biggest = 0;
	for(int i=1; i<=x; i++)
		for(int j=1; j<=y; j++)
			if (board[i][j] > biggest)
			{
				biggest = board[i][j];
			}

			
	cout<<endl; 



    return 0;  

} 
/*
Na bazie udost�pnionego w Notesie programu, utw�rz struktur� "kraj":
Nazwa
Kontynent
Waluta (trzyliterowy skr�t nazwy waluty)
Powierzchnia ( w tysi�cach km kwadratowych )
Ilo�� mieszka�c�w ( w milionach )
PKB (Produkt krajowy brutto, wszystkie kraje musz� mie� warto�ci w tej samej walucie)

Opisz w�a�ciwo�ci 5 pa�stw wybranych przez siebie, dane wyszukaj w Internecie.

Program ma wykona� poni�sze czynno�ci:
Wy�wietli� nazwy i powierzchnie pa�stw, kt�re maj� najwi�ksz� oraz najmniejsz� spo�r�d podanych powierzchni;
Wyliczy� �rednie PKB wszystkich opisanych pa�stw;
Zliczy� i wy�wietli� ile pa�stw jest na kt�rym kontynencie;
Wy�wietli� g�sto�� zaludnienia dla pa�stwa, kt�re b�dzie wybierane po uruchomieniu programu,  przez naci�ni�cie pierwszej litery  nazwy pa�stwa na klawiaturze.
Rozwi�zanie zadania prze�lij jako plik: nazwisko_kraj.cpp */

