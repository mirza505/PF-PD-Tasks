#include <iostream>
using namespace std;
int primorial(int n);
main()
 {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Primorial of " << n << " is: " << primorial(n) << endl;

}
int primorial(int n)
 {
    int primeCount = 0;
    int number = 2;
    int result = 1; 
    while (primeCount < n)
     {
        bool isPrime = true;
        for (int i = 2; i < number; i++)
         {
            if (number % i == 0)
             {
                isPrime = false;
                break;
            }
        }
        if (isPrime==true)
         {
            result = result* number;
            primeCount++;
        }
        number++;
    }
    return result;
}


