#include<iostream>
using namespace std;
string name = "";

void func(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout<<name<<endl;
    func(i+1,n);
}



int main(){
    int n;
    
    cout<<"Enter the value of N : ";
    cin>>n;
    cout<<"Enter the name to print N times : ";
    cin>>name;
    func(1,n);
    return 0;
    

}