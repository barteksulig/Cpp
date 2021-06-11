#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <sstream>
#include <time.h>
#include <windows.h>


using namespace std;

int choice,choice1,how_many;
float avg,AVG,aVG;
string line,mark,model,color,production_date,price,engine_power;

int main() {
	for(;;)
	{
	system("CLS");
	cout<<"Welcome to the structure program, structures are about cars."<<endl;
	cout<<"Choose what you want to do:"<<endl;
	cout<<"1.I want to add information about the car."<<endl;
	cout<<"2.I want to send an inquiry"<<endl;
	cout<<"3.EXIT"<<endl;
	cout<<"--->";
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			system("CLS");
			cout<<"You are going to enter information about the car,"<<endl<<"try not to get confused as the replacement can only be done in a text file"<<endl;
			system("PAUSE"); system("CLS");
			cout<<"What brand is the car? ";
			cin>>mark;
			cout<<"Which model ? ";
			cin>>model;
			cin.ignore();
			cout<<"What color? :) ";
			cin>>color;
			cout<<"When it was produced? ";
			cin>>production_date;
			cout<<"What is the engine power? (horsepower) ";
			cin>>engine_power;
			cout<<"What is the price $ ?  ";
			cin>>price;
			transform(color.begin(),color.end(),color.begin(), ::tolower );
			fstream file;
            file.open("CARS.txt",ios::out|ios::app);
            file<<endl
            
			<<mark<<endl
			<<model<<endl
			<<color<<endl
			<<production_date<<endl
			<<engine_power<<endl
			<<price<<endl;

            file.close();
            exit(0);
			break;
		}
		case 2:
		{
			fstream file;
     	    file.open("CARS.txt",ios::in);
			if(file.good()==false)
			{
				cout<<"File does not exist";
				exit(0);
			}
			for(;;) {
				system("CLS");
				cout<<"Choose what you want to do:"<<endl;
				cout<<"1.Average age of all vehicles"<<endl;
				cout<<"2.The cost of all together"<<endl;
				cout<<"3.Count and display how many cars are red and how many are black."<<endl;
				cout<<"4.Show them all"<<endl;
				cout<<"5.EXIT"<<endl;
				
				cin>>choice1;
				switch(choice1){
				case 1:{
				int number_line=1;
					while(getline(file,line))
					{
						switch(number_line)
						{
						   case 1: mark=line;                  break;
						   case 2: model=line;                 break;
						   case 3: color=line;                break;
						   case 4: production_date=line;       break;
						   case 5: engine_power=line;          break;
						   case 6: price=line;                 break;
						}
						if(number_line==6) 
						{
							number_line=0;
							cout<<"MODEL:           "<<model<<endl;
							cout<<"PRODUCTION DATE: "<<production_date<<endl<<endl<<endl;
							AVG= atoi(production_date.c_str());
							avg=avg+AVG;
							aVG++;
						} 
						number_line++;
		
				}
				cout<<"THE AVERAGE AGE: "<<avg/aVG<<endl;
				    system("pause");
				    exit(0);
				    break; 
				    
				}
				case 2:{
				int all=0,ALL;
				int number_line=1;
					while(getline(file,line))
					{
						switch(number_line)
						{
						   case 1: mark=line;                  break;
						   case 2: model=line;                 break;
						   case 3: color=line;                break;
						   case 4: production_date=line;       break;
						   case 5: engine_power=line;          break;
						   case 6: price=line;                 break;
						}
						if(number_line==6) 
						{
							ALL= atoi(price.c_str());
							number_line=0;
							cout<<"MODEL:           "<<model<<endl;
							cout<<"PRICE:           "<<ALL<<endl<<endl;
						    all=all+ALL;
						} 
						number_line++;
				}
				cout<<"PRICE FOR EVERYTHING  "<<all<<endl;
				    system("pause");
				    exit(0);
				    break; 
				    
				    }
				case 3:{
					int red=0,blue=0,black=0;
				int number_line=1;
					while(getline(file,line))
					{
						switch(number_line)
						{
						   case 1: mark=line;                  break;
						   case 2: model=line;                 break;
						   case 3: color=line;                break;
						   case 4: production_date=line;       break;
						   case 5: engine_power=line;          break;
						   case 6: price=line;                 break;
						}
						if(number_line==6) 
						{
							number_line=0;
							cout<<"MODEL:           "<<model<<endl;
							cout<<"COLOR: "<<color<<endl<<endl<<endl;
							if(color=="red")
							{
								red++;
							}
							else if(color=="black")
							{
								black++;
							}
							else if(color=="blue")
							{
								blue++;
							}
	
							
						} 
						number_line++;
		
				}
				cout<<"THE RED CAR IS: "<<red<<endl;
				cout<<"THE BLACK IS: "<<black<<endl;
				cout<<"THE BLUE CAR IS: "<<blue<<endl;
				    system("pause");
				    exit(0);
				    break; 
				    
				    }
				case 4:{
					int number_line=1;
					while(getline(file,line))
					{
						switch(number_line)
						{
						   case 1: mark=line;                  break;
						   case 2: model=line;                 break;
						   case 3: color=line;                break;
						   case 4: production_date=line;       break;
						   case 5: engine_power=line;          break;
						   case 6: price=line;                 break;
						}
						if(number_line==6) 
						{
							number_line=0;
							
							cout<<"MARK:            "<<mark<<endl;
						    cout<<"MODEL:           "<<model<<endl;
						    cout<<"COLOR:           "<<color<<endl;
							cout<<"PRODUCTION DATE: "<<production_date<<endl;
							cout<<"PRICE:           "<<price<<endl<<endl;
						} 
						number_line++;
						
					  }	
					  system("pause");
					  exit(0);
				 break; 
				}
				case 5: exit(0);
				default:
				{
		     	cout<<"Wrong choice..."<<endl;
		    	system("pause");
		     	system("CLS");
	         	}
				    
	}
	}
		break; 
		
		}
		case 3: exit(0); break;
		default:
		{
			cout<<"Wrong choice..."<<endl;
			system("pause");
			system("CLS");
		}
			
	}
}
return 0;
}
