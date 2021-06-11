#include <time.h>
#include <iostream>
#include <windows.h>
 
using namespace std;
 
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
 
   

   do
   {
   cout<<godzina<<":"<<minuta<<":"<<sekunda<<":"<<milisekunda<<endl;
   cout<<dzien<<":"<<miesiac<<":"<<rok<<endl;
   }while (cin.get());
  
  
   
   cin.get();
   return 0;
}
