#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  string imie, kod;
  cout<<"Podaj tekst do zaszyfrowania: /t";
  cin>>imie;
  for(int i; i < imie.length();i++)
  {
    int kod = (int)imie[i]+5;
    cout<<" Literka po zaszyfrowaniu to: ";
    cout << char (kod);
  }
  return 0;
}

