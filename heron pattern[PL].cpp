#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	float a,b,c,p,P;
	cout<<"Podaj bok A : ";
	cin>>a;
	cout<<"Podaj bok B : ";
	cin>>b;
	cout<<"Podaj bok C : ";
	cin>>c;
	p=((a+b+c)/2);
	cout<<p<<endl;
	cout<<sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));
	cout<<P;
	return 0;
}
