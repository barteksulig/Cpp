#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int a, b, c;
int n1, n2, n3;
char wybor;


int main()
{

for(;;)
{
	cout << "Podaj dlugosc pierwszego boku: ";
	if(!(cin>>a))
	{
		cout<<"To nie liczba";
		exit(0);
	}
	cout<< endl<<"Podaj dlugosc drugiego boku: ";
	if(!(cin>>b))
	{
		cout<<"To nie liczba ";
		exit(0);
	}
	cout << endl<<"Podaj dlugosc trzeciego boku: ";
	if(!(cin>>c))
	{
		cout<<"To nie liczba ";
		exit(0);
	}
	
	if(a>=b&&a>=c)   n1=a;
	if(b>=a&&b>=c)   n1=b;
	if(c>=a&&c>=b)   n1=c;	
	if(a<=b&&a<=c)   n3=a;
	if(b<=a&&b<=c)   n3=b;
	if(c<=a&&c<=b)   n3=c;
		
	if(n1==a&&n3==b) n2=c;
	if(n1==a&&n3==c) n2=b;
	if(n1==b&&n3==a) n2=c;
	if(n1==b&&n3==c) n2=a;
	if(n1==c&&n3==a) n2=b;
	if(n1==c&&n3==b) n2=a;





//bok c najdluzszy  ~n1
//bok b             ~n2
//bok a najkrotszy  ~n3
	
	
	
	
	if(n3+n2>n1 && n3+n1>n2 && n2+n1>n3)
	{
	  if(n3==n2&&n2==n1)
	  {
	  	float h, P;
		cout<<"To jest trojkat rownoboczny"<<endl;
	  	h=(n3*sqrt(3))/2;
	  	cout<<"Jego wysokosc to : "<<h<<endl;
	  	P=((n3*n3)*sqrt(3))/4;
	  	cout<<"Jego pole to : "<<P<<endl;
	  }
	  else if ((n3==n2||n1==n2)&&(2*n3)>n1)
	        {
	        	cout<<"To jest trojkat rownoramienny"<<endl;
	        	float h, P, H;
	        	if(n1!=n2)
	        	{
	        		n1=n1/2;
					H=(n2*n2)-(n1*n1);
	        		h=sqrt(H);
	        		P=(0.5)*(n3)*(h);
	        		cout<<"Jego wysokosc to : "<<h<<endl;
	        		cout<<"Jego pole to : "<<P<<endl;
	        		
				}
				if(n3!=n2)
	        	{
	        		n3=n3/2;
					H=(n2*n2)-(n3*n3);
	        		h=sqrt(H);
	        		n3=n3*n3;
	        		P=(0.5)*(n3)*h;
	        		cout<<"Jego wysokosc to : "<<h<<endl;
	        		cout<<"Jego pole to : "<<P<<endl;
				}
	        	
			}
			else if((n1*n1)==(n3*n3)+(n2*n2))
			{
				float h, P;
		        cout<<"To jest trojkat prostokatny"<<endl;
		        P=(n3*n2)/2;
		        cout<<"Jego wysokosc to : "<<n1<<endl;
	        	cout<<"Jego pole to : "<<P<<endl;
		    }
		    else if((a!=b&&a!=c&&b!=c))
 			{
 				float h, P;
		        cout<<"To jest trojkat roznoboczny"<<endl;;
			}
	  	    else
	  	    {
	  	        cout<<"problem";
				getch();
				exit (0);	
			}
			   
	}
	else cout<<endl<<"To nie jest trojkat"<<endl;
	int wyborz;
	for(int i=1;i<=2;i++)
	{
	cout<<"Chcesz kontynuowac? [T/N]"<<endl;
	wybor=getch();
	if(wybor=='t'||wybor=='T')
	{
		system("CLS");
		i++;
	}
	else if(wybor=='n'||wybor=='N')
	{
		exit(0);
		i++;
	}
	else
	{
		cout<<"Zly wybor!"<<endl;
		i--;
		}
    }
	
}

	return 0;
}
