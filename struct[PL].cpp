#include <iostream> 
#include <conio.h>
#include <windows.h>

using namespace std; 
float powierzchnia[109];

struct kraj   // deklaracja struktury 

{ 
    char  nazwa[20];           //Nazwa
    char  kontynent[20];       //Kontynent
    char  waluta[20];           //Waluta (trzyliterowy skrót nazwy waluty) {0,1,2}
    float powierzchnia;        //Powierzchnia ( w tysi¹cach km kwadratowych )
    float ilosc_mieszkancow;   //Iloœæ mieszkañców ( w milionach )
    float PKB;                 //PKB (Produkt krajowy brutto, wszystkie kraje musz¹ mieæ wartoœci w tej samej walucie)
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
Na bazie udostêpnionego w Notesie programu, utwórz strukturê "kraj":
Nazwa
Kontynent
Waluta (trzyliterowy skrót nazwy waluty)
Powierzchnia ( w tysi¹cach km kwadratowych )
Iloœæ mieszkañców ( w milionach )
PKB (Produkt krajowy brutto, wszystkie kraje musz¹ mieæ wartoœci w tej samej walucie)

Opisz w³aœciwoœci 5 pañstw wybranych przez siebie, dane wyszukaj w Internecie.

Program ma wykonaæ poni¿sze czynnoœci:
Wyœwietliæ nazwy i powierzchnie pañstw, które maj¹ najwiêksz¹ oraz najmniejsz¹ spoœród podanych powierzchni;
Wyliczyæ œrednie PKB wszystkich opisanych pañstw;
Zliczyæ i wyœwietliæ ile pañstw jest na którym kontynencie;
Wyœwietliæ gêstoœæ zaludnienia dla pañstwa, które bêdzie wybierane po uruchomieniu programu,  przez naciœniêcie pierwszej litery  nazwy pañstwa na klawiaturze.
Rozwi¹zanie zadania przeœlij jako plik: nazwisko_kraj.cpp */

