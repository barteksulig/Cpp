#include <iostream>
#include <windows.h>
 
using namespace std;

int sum[20],table[20][20];
string ramka;

int main() {
    ramka=186;
     
 
    for (int i=1; i<=10;i++) 
	{
    	cout <<ramka; //otwarcie ozdobnej obróbki
 
        for (int j = 1; j <= 10; j++) 
		{
            table[i][j]=i*j; //nadawanie zmiennej table wartoœci zgodnej z tabliczk¹ mno¿enia 
			if(j*i<10) cout<<" ";                      //{
            else if(j==10&&j*i<100) cout<<" ";         //Funkcje warunkowe sprawiaj¹ce ¿e tabliczka jest prosta }
            if(i==j) sum[1]+=table[i][j];   //dodawanie sumy 10-10 , 9-9, 8-8;
            if(i+j==11) sum[2]+=table[i][j];     //dodawanie sumy 2, 10-1, 9-2,8-3;
            cout<<table[i][j];
			cout<<ramka; // zamkniecie ozdobnej obróbki
 
 
        }
        cout<<endl;
    }
    cout<<"SUM OF THE FIRST  DIAGONAL: "<<sum[1]<<endl;
    cout<<"SUM OF THE SECOND DIAGONAL: "<<sum[2]<<endl;
    system("pause");
    return 0;
}
