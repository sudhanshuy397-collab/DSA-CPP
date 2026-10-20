#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "The number is: " << n << endl;
    int product = 1;
    int sum=0;
    while(n>0)
    {
        int digit = n%10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    cout << "Product of digits: " << product << endl;
    cout << "Sum of digits: " << sum << endl;
    return 0;   
}