#include<iostream>
using namespace std;

 void pattern_inverted_pyramid(int N){
 	for(int i = 0; i < N; i++){
 		for(int j = N; j >= i; j--){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
 }
int main(){
	
	int N;
	cout<<"Enter the number of rows : ";
	cin>>N;
	pattern_inverted_pyramid(N);
	return 0;
	
}
