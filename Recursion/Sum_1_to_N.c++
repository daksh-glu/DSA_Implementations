#include<iostream>
using namespace std;

int func(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}



int main(){
    int n;
    
    cout<<"Enter the value of N : ";
    cin>>n;
    int sum = func(n);
    cout<<"Sum of N numbers is : "<<sum<<endl;
    return 0;
    

}