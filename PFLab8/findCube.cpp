#include <iostream>
using namespace std;
int findN(int m);
int main() {
    int m;
    cout << "Enter the total volume m: ";
    cin >> m;
    int result = findN(m);
    if (result != -1) 
    {
        cout << "The number of cubes required is: " << result << endl;
    } 
    else
    {
        cout << "No such number of cubes can achieve the volume " << m << endl;
    }

    return 0;
}
int findN(int m)
{
    int n = 1;
    int sum = 0;
    while (sum <= m) 
    {
        sum += n * n * n; 
        if (sum == m)
        {
            return n; 
        }
        n++; 
    }
    return -1;
}


