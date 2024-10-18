#include<iostream>
using namespace std;
void header();
int menu();
void customer(string, string , int, int ,int , int ,int);
void laptopInput();
void admin();
void tasks(int);
void product();
int allLaptops(string laptopBrand, string laptopModel);
void salesman();
int menuSalesman();
void manageStock();
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
	string customerID;
	if(option==1)
	{
		cout<<"Enter 1 if you want laptop recommendation"<<endl;
		cout<<"Enter 2 if you want to buy laptop "<<endl;
		cin>>customerChoice;
		cout<<"Your choice "<<customerChoice<<endl;
		if(customerChoice=='1')
		{
			laptopInput();
		}
		else
		{
			product();
		}
		
	}	
	else if(option==2)
	{
		salesman();
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
			cout<<"Best budget according to data you provided is Lenovo ThinkPad X1 ";

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
    int quantity,laptopPrice,option,totalBill;
    string laptopBrand,laptopModel;
    cout<<"Enter the laptop brand: ";
    cin>>laptopBrand;
	cout<<"Enter the laptop Model: ";
    cin>>laptopModel;
    cout<<"Enter the quantity: ";
    cin>>quantity;
	cout<<"Enter 1 for order confirmation: ";
	cin>>option;
	laptopPrice = allLaptops(laptopBrand,laptopModel);
    cout<<"Price of "<<laptopModel<<" = "<<laptopPrice;
    cin>>laptopPrice;
	totalBill = laptopPrice*quantity;
	cout<<"TOtal = "<<totalBill;
    

}
int allLaptops(string laptopBrand, string laptopModel)
{
	int laptopPrice;
	if(laptopBrand=="lenovo")
	{
		if(laptopModel=="ideapad330")
		{
			laptopPrice=28000;
		}
		else if(laptopModel=="ideapad3")
		{
			laptopPrice=33000;
		}
		else if(laptopModel=="ideapadL3")
		{
			laptopPrice=38000;
		}
		else if(laptopModel=="IdeaPadSlim3 ")
		{
			laptopPrice=42000;
		}
		else if(laptopModel==" V15G4")
		{
			laptopPrice=46000;
		}
		else if(laptopModel=="V15G3")
		{
			laptopPrice=53000;
		}
		else if(laptopModel=="ThinkPadE14")
		{
			laptopPrice=59000;
		}
		else if(laptopModel=="ThinkPadE14G4")
		{
			laptopPrice=63000;
		}
		else if(laptopModel=="ThinkPadX1")
		{
			laptopPrice=66000;
		}
		else if(laptopModel=="ThinkPadX1Carbon")
		{
			laptopPrice=69000;
		}
		else if(laptopModel=="V15G215")
		{
			laptopPrice=71000;
		}
		else if(laptopModel=="IdeaPadSlim315IRU8")
		{
			laptopPrice=73500;
		}
		else if(laptopModel=="Thinkcenterneo50tG3")
		{
			laptopPrice=76000;
		}
		else if(laptopModel=="IdeaPad315IAU7")
		{
			laptopPrice=80000;
		}
	}
	return laptopPrice;
}
void salesman()
{

    string customerID;
	int optionResult;
	cout<<"Enter your customerID: ";
	cin>>customerID;
	if(customerID=="AliC001")
	{
		cout<<"You can access the Laptop Depot"<<endl;

	}
	else
	{
		cout<<"You can't access the Laptop Depot";
		return ;
	}
	optionResult = menuSalesman();
	cout<<"Your option: "<<optionResult<<endl;
	if(optionResult==1)
	{
		manageStock();
	}
	//else if(optionResult == 2)
	//{
	//	addProductData();
	//}
	//else if(optionResult == 3)
	//{
	//	makeBill();
	//}
	//else if(optionResult == 4)
	//{
	//	calculateTotal();
	//}
	else if(optionResult == 5)
	{
		return ;
	}
}

int menuSalesman()
{
	int option;
	cout<<"Select one of the following options"<<endl;
	cout<<"1.Manage Inventory"<<endl;
	cout<<"2.Add product data"<<endl;
	cout<<"3.Make Bill"<<endl;
	cout<<"4.Calculate total "<<endl;
	cout<<"5.Exit"<<endl;
	cout<<"Enter your option: ";
	cin>>option;
	return option;
}
void manageStock()
{
	int addStock,updatedStock,dellLaptops,hpLaptops,lenovoLaptops;
	cout<<"Enter the dell laptops: ";
	cin>>dellLaptops;
	cout<<"Enter the hp laptops: ";
	cin>>hpLaptops;
	cout<<"Enter the lenovo laptops: ";
	cin>>lenovoLaptops;
	if(dellLaptops<10)
	{
		cout<<"Current dell laptops stock = "<<dellLaptops<<endl;
		cout<<"Enter the dell laptops to be added in the stock: ";
		cin>>addStock;
		cout<<"You added "<<addStock<<" dell laptops to your stock"<<endl;
		updatedStock = dellLaptops + addStock;
		cout<<"Updated Stock = "<<updatedStock<<endl;
	}
	if(hpLaptops<10)
	{
		cout<<"Current hp laptops stock = "<<hpLaptops<<endl;
		cout<<"Enter the hp laptops to be added in the stock: ";
		cin>>addStock;
		cout<<"You added "<<addStock<<" hp laptops to your stock"<<endl;
		updatedStock = hpLaptops + addStock;
		cout<<"Updated Stock = "<<updatedStock<<endl;
	}
	if(lenovoLaptops<10)
	{
		cout<<"Current lenovo laptops stock = "<<lenovoLaptops<<endl;
		cout<<"Enter the lenovo laptops to be added in the stock: ";
		cin>>addStock;
		cout<<"You added "<<addStock<<" dell laptops to your stock"<<endl;;
		updatedStock = lenovoLaptops + addStock;
		cout<<"Updated Stock = "<<updatedStock<<endl;
	}
	
}






























