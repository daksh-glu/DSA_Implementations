#include<iostream>
using namespace std;

 void pattern_rect(int N){
 	for(int i = 0; i < N; i++){
 		for(int j = 0; j < N; j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
 }
int main(){
	
	int N;
	cout<<"Enter the number : ";
	cin>>N;
	pattern_rect(N);
	return 0;
	
}
