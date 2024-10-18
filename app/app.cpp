#include<iostream>
using namespace std;
void header();
int menu();
void customer(string, string , int, int ,int , int ,int);
void laptopInput();
int salesman();
void admin();
void tasks(int);
void product();
main()
{
	int optionResult;
	system("cls");
	header();
	cout<<endl;
	optionResult=menu();
	cout<<"Your option: "<<optionResult<<endl;
	cout<<"You have entered option "<<optionResult<<endl;
	tasks(optionResult);

}
void header()
{
	
	system("Color 02");
	cout<<R"(    __            __                                            
   / /___ _____  / /_____  ____                                 
  / / __ `/ __ \/ __/ __ \/ __ \                                
 / / /_/ / /_/ / /_/ /_/ / /_/ /                                
/_/\__,_/ .___/\__/\____/ .___/                                 
    __ /_/_            /_/                                   __ 
   /  |/  /___ _____  ____ _____ ____  ____ ___  ___  ____  / /_
  / /|_/ / __ `/ __ \/ __ `/ __ `/ _ \/ __ `__ \/ _ \/ __ \/ __/
 / /  / / /_/ / / / / /_/ / /_/ /  __/ / / / / /  __/ / / / /_  
/_/__/_/\__,_/_/ /_/\__,_/\__, /\___/_/ /_/ /_/\___/_/ /_/\__/  
  / ___/__  _______/ /___/____/_ ___                            
  \__ \/ / / / ___/ __/ _ \/ __ `__ \                           
 ___/ / /_/ (__  ) /_/  __/ / / / / /                           
/____/\__, /____/\__/\___/_/ /_/ /_/                            
     /____/                           )";
}

int menu()
{
	int option;
	cout<<"Enter option 1 for if you are customer"<<endl;
	cout<<"Enter optoin 2 if you are a salesman"<<endl;
	cout<<"Enter option 3 if you are the admin"<<endl;
	cin>>option;
	return option;

}
void tasks(int option)
{
	char customerChoice;
	cout<<"Enter 1 if you want laptop recommendation"<<endl;
	cout<<"Enter 2 if you want to buy laptop "<<endl;
	cin>>customerChoice;
	cout<<"Your choice "<<customerChoice<<endl;
	if(option==1)
	{
		if(customerChoice==1)
		{
			laptopInput();
		}
		else
		{
			product();
		}
	}	

}
void laptopInput()
{
	string laptopBrand,processor;
	int budget,RAM,storage,screenSize,generation;
	cout<<"Enter your budget:";
	cin>>budget;
	cout<<"Enter the laptop brand: ";
	cin>>laptopBrand;
	cout<<"Enter the generation you want: ";
	cin>>generation;
	cout<<"Enter the laptop processor: ";
	cin>>processor;
	cout<<"Enter the RAM you require: ";
	cin>>RAM;
	cout<<"Enter the storage you require: ";
	cin>>storage;
	cout<<"Enter the laptop screensize in inches: ";
	cin>>screenSize;
	customer(laptopBrand,processor,budget, RAM,generation,storage,screenSize);
}
void customer(string laptopBrand, string processor,int budget, int RAM, int generation,int storage, int screenSize)
{
	
	if(laptopBrand=="lenovo")
	{
		if((budget>25000&&budget<30000)&&processor=="i3"&& generation==6&&RAM==8 &&storage==128&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo Ideapad 330";



		}
		else if((budget>30000&&budget<35000)&&processor=="i3"&& generation==8&&RAM==8 &&storage==128&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo IdeaPad 3";



		}
		else if((budget>35000&&budget<40000)&&processor=="i3"&& generation==6&&RAM==16 &&storage==256&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo IdeaPad L3";



		}
		else if((budget>40000&&budget<45000)&&processor=="i3"&& generation==6&&RAM==8 &&storage==128&&screenSize==14)
		{
			cout<<"Best budget according to data you provided is Lenovo IdeaPad Slim 3 ";



		}
		else if((budget>50000&&budget<55000)&&processor=="i3"&& generation==8&&RAM==16 &&storage==256&&screenSize==14)
		{
			cout<<"Best budget according to data you provided is Lenovo V15 G4 ";



		}
		else if((budget>55000&&budget<58000)&&processor=="i5"&& generation==6&&RAM==8 &&storage==128&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo V15 G3";



		}
		else if((budget>58000&&budget<60000)&&processor=="i5"&& generation==6&&RAM==16 &&storage==256&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo ThinkPad E14";



		}
		else if((budget>60000&&budget<65000)&&processor=="i5"&& generation==8&&RAM==16 &&storage==256&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo ThinkPad E14 G4  ";



		}
		else if((budget>650000&&budget<67000)&&processor=="i5"&& generation==6 &&RAM==8 &&storage==128&&screenSize==14)
		{
			cout<<"Best budget according to data you provided isLenovo ThinkPad X1 ";
1
		}
		else if((budget>67000&&budget<70000)&&processor=="i5"&& generation==8 &&RAM==16 &&storage==256&&screenSize==14)
		{
			cout<<"Best budget according to data you provided is Lenovo ThinkPad X1 Carbon ";



		}
			else if((budget>70000&&budget<72000)&&processor=="i7"&& generation==6&&RAM==8 &&storage==128&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo V15 G2 15";



		}
		else if((budget>72000&&budget<75000)&&processor=="i7"&& generation==8&&RAM==16 &&storage==256&&screenSize==13)
		{
			cout<<"Best budget according to data you provided is Lenovo IdeaPad Slim 3 15IRU8";



		}
		else if((budget>75000&&budget<77000)&&processor=="i7"&& generation==6 &&RAM==8 &&storage==128&&screenSize==14)
		{
			cout<<"Best budget according to data you provided is Lenovo Thinkcenter neo 50t G3  ";



		}
		else if((budget>77000&&budget<80000)&&processor=="i7"&& generation==8 &&RAM==16 &&storage==256&&screenSize==14)
		{
			cout<<"Best budget according to data you provided is Lenovo IdeaPad 3 15IAU7";



		}

	}	

}
void product()
{
    int quantity,tax, price;
    string laptopBrand;
    cout<<"Enter the laptop brand: ";
    cin>>laptopBrand;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    cout<<"Enter the price: ";
    cin>>price;
    cout<<"Enter the tax on the product: ";
    cin>>tax;

}






























