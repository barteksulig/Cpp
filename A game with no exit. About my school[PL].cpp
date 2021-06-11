#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int wybor1,wybor2a,wybor2b,ostateczna;

int main()
{
 cout<<"Witaj w symulatorze ucznia ZST."<<endl<<endl;
 Sleep(400);
 cout<<"Jest Poniedzialek, godzina 16:00. Dostajesz wiadomosc z dziennika ze, na wtorek na ostatniej godzinie jest sprawdzian z matmy."<<endl;
 Sleep(700);
 cout<<"--Co robisz ?"<<endl;
 Sleep(1000);
 cout<<"1.Piszesz do kogos madrego z klasy zeby ci pomogl."<<endl;
 Sleep(1000);
 cout<<"2.Sprawdzasz co masz w zeszycie i masz zamiar sie nauczyc"<<endl;
 Sleep(1000);
 cout<<"3.Masz to gdzies i zaczynasz mecza w CS:GO"<<endl;
 Sleep(1000);
 cout<<"Decyzja: ";
 cin>>wybor1;
 
 if(wybor1==1)
 {
   cout<<" Me: Siema umiesz na matme ?"<<endl;
   Sleep(1000);
   cout<<" Gustaw: Na co ?"<<endl;
   Sleep(500);
   cout<<" Me: Na sprawdzian jutro"<<endl;
   Sleep(1000);
   cout<<" Gustaw: O ku*de jutro sprawdzian? To ja lece sie uczyc. Nara"<<endl;
   Sleep(500);
   cout<<" Me: jo"<<endl;
   Sleep(700);
   
   cout<<"*Troche lipa*"<<endl;
   Sleep(1000);
   cout<<"--Co robisz ?"<<endl;
   Sleep(1000);
   cout<<"1.Sprawdzasz co masz w zeszycie i masz zamiar sie nauczyc"<<endl;
   Sleep(1000);
   cout<<"2.Masz to gdzies i zaczynasz mecza w CS:GO"<<endl;
   Sleep(1000);
   cout<<"Decyzja: ";
   cin>>wybor2a;
   if(wybor2a==1)
   {
   	cout<<"*Otwierasz zeszyt*"<<endl;
   	Sleep(1000);
   	cout<<"*W zeszycie troche pajeczyny i jedna lekcja*"<<endl;
   	Sleep(500);
   	cout<<"*Patrzysz ta lekcje*"<<endl;
   	Sleep(500);
   	cout<<"*,,Zapoznanie z PSO''*"<<endl;
   	Sleep(500);
   	cout<<"*Troche lipa*"<<endl;
    Sleep(500);
    cout<<"--Co robisz ?"<<endl;
    Sleep(1000);
    cout<<"1.Masz to gdzies i zaczynasz mecza w CS:GO"<<endl;
    Sleep(1000);
    cout<<"Decyzja: ";
    cin>>ostateczna;
    if(ostateczna==1)
      cout<<"Dostales jedynke wagi 5 i spadles z kalacha do golda.Do zoba w sierpniu >:D";
    else
     cout<<"  Naucz sie liczyc";
     getch();
     return 0;
   }
   if(wybor2a==2)
      cout<<"Dostales jedynke wagi 5 i spadles z kalacha do golda.Do zoba w sierpniu >:D";
    else
     cout<<"  Naucz sie liczyc";
     getch();
     return 0;
   
 }
  if(wybor1==2)
 {
 	cout<<"*Otwierasz zeszyt*"<<endl;
   	Sleep(1000);
   	cout<<"*W zeszycie troche pajeczyny i jedna lekcja*"<<endl;
   	Sleep(500);
   	cout<<"*Patrzysz ta lekcje*"<<endl;
   	Sleep(500);
   	cout<<"*,,Zapoznanie z PSO''*"<<endl;
   	Sleep(500);
   	cout<<"*Troche lipa*"<<endl;
    Sleep(500);
    cout<<"--Co robisz ?"<<endl;
    Sleep(1000);
    cout<<"1.Piszesz do kogos madrego z klasy zeby ci pomogl."<<endl;
    Sleep(1000);
    cout<<"2.Masz to gdzies i zaczynasz mecza w CS:GO"<<endl;
    Sleep(1000);
    cout<<"Decyzja: ";
    cin>>wybor2b;
    if(wybor2b==1)
    {
     cout<<" Me: Siema umiesz na matme ?"<<endl;
     Sleep(1000);
     cout<<" Gustaw: Na co ?"<<endl;
     Sleep(500);
     cout<<" Me: Na sprawdzian jutro"<<endl;
     Sleep(1000);
     cout<<" Gustaw: O ku*de jutro sprawdzian? To ja lece sie uczyc. Nara"<<endl;
     Sleep(500);
     cout<<" Me: jo"<<endl;
     Sleep(700);
   
     cout<<"*Troche lipa*"<<endl;
     Sleep(1000);
     cout<<"--Co robisz ?"<<endl;
     Sleep(1000);
     cout<<"1.Masz to gdzies i zaczynasz mecza w CS:GO"<<endl;
     cout<<"Decyzja: ";
     cin>>ostateczna;
      if(ostateczna==1)
        cout<<"Dostales jedynke wagi 5 i spadles z kalacha do golda.Do zoba w sierpniu >:D";
      else
        cout<<"  Naucz sie liczyc";
        getch();
        return 0;
   }
   if(wybor2b==2)
        cout<<"Dostales jedynke wagi 5 i spadles z kalacha do golda.Do zoba w sierpniu >:D";
   else
        cout<<"  Naucz sie liczyc";
        getch();
        return 0;
	}
	if(wybor1==3)
	cout<<"Dostales jedynke wagi 5 i spadles z kalacha do golda.Do zoba w sierpniu >:D";
	
	else
        cout<<"  Naucz sie liczyc";
        getch();
        return 0;
 }

 
 

