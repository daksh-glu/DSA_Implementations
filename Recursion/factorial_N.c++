#include<iostream>
using namespace std;

int factorial(int n) {
    if(n < 2)
        return 1;
    int product = 1;
    product = n * factorial(n - 1);
    return product;
}

int main() {
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    
    int fact = factorial(n);
    cout << "Factorial of N is : " << fact << endl;
    
    return 0;
}
