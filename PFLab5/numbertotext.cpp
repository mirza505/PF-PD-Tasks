#include<iostream>
using namespace std;
void numbertoText(int);
main()
{

	int n;
	cout<<"Enter a number(1-99):";
	cin>>n;
	numbertoText(n);

}

void numbertoText(int number)

	{	
		int firstDigit, secondDigit;
		if(number==1)
		cout<<"One";
		if(number==2)
		cout<<"Two";
		if(number==3)
		cout<<"Three";
		if(number==4)
		cout<<"Four";
		if(number==5)
		cout<<"Five";
		if(number==6)
		cout<<"Six";
		if(number==7)
		cout<<"Seven";
		if(number==8)
		cout<<"Eight";
		if(number==9)
		cout<<"Nine";
		if(number==10)
		cout<<"Ten";
		if(number==11)
		cout<<"Eleven";
		if(number==12)
		cout<<"Twelve";
		if(number==13)
		cout<<"Thirteen";
		if(number==14)
		cout<<"Fourteen";
		if(number==15)
		cout<<"Fifteen";
		if(number==16)
		cout<<"Sixteen";
		if(number==17)
		cout<<"Seventeen";
		if(number==18)
		cout<<"Eighteen";
		if(number==19)
		cout<<"Nineteen";
		if(number==20)
		cout<<"Twenty";
		firstDigit = number/10;
		secondDigit = number%10;
		if(number>=21)
		{
			if(firstDigit == 3)
			{
				cout<<"Thirty";
			}
			if(firstDigit == 4)
			{
				cout<<"Fourty";
			}
			if(firstDigit == 5)
			{
				cout<<"Fifty";
			}
			if(firstDigit == 6)
			{
				cout<<"Sixty";
			}
			if(firstDigit == 7)
			{
				cout<<"Seventy";
			}
			if(firstDigit == 8)
			{
				cout<<"Eighty";
			}
			if(firstDigit == 9)
			{
				cout<<"Ninety";
			}
		
		
	}
		if(number>=21)
		{
			if(secondDigit==1)
			{
				cout<<"One";
			}
			if(secondDigit==2)
			{
				cout<<"Two";	
			}
			if(secondDigit==3)
			{
				cout<<"Three";	
			}
			if(secondDigit==4)
			{
				cout<<"Four";	
			}
			if(secondDigit==5)
			{
				cout<<"Five";	
			}
			if(secondDigit==6)
			{
				cout<<"Six";	
			}
			if(secondDigit==7)
			{
				cout<<"Seven";	
			}
			if(secondDigit==8)
			{
				cout<<"Eight";	
			}
			if(secondDigit==9)
			{
				cout<<"Nine";	
			}

			
		}
	}


