#include <iostream>
#include <windows.h>

using namespace std;

int i,j;

string pierwiastek[5][6] = {
{"1. ","Azot","N","7","14","1772"},
{"2. ","Fosfor","P","15","31","1669"},
{"3. ","Arsen","As","33","75","XIIIw"},
{"4. ","Antymon","Sb","51","122","3000 P.N.E"},
{"5. ","Bizmut","Bi","83","209","1753"},
}
,nazwa;


int main() {
	cout<<"<=================================================>"<<endl;
	Sleep(350);
	cout<<" -> Witaj w moim programie !"<<endl;
	Sleep(550);
	cout<<" -> Program sluzy do odczytania informacji na temat danego pierwiastka z grupy 15 ;]"<<endl;
	Sleep(550);
	cout<<" -> Podaj nazwe: "; cin>>nazwa;
	bool flag=0;
	
	while (i<5)
{
	if(pierwiastek[i][1]==nazwa)
	{
		for(j=0;j<6;j++)
		 cout<<pierwiastek[i][j]<<" ";
		 flag=2;
		 break;
	}
	else
	i++;
}
 if(flag !=1)
     cout<<"Nie ma takiego pierwiastka w tej grupie"<<endl; return 0;
	
	
	

	return 0;
}
