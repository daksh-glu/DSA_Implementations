#include<iostream>
using namespace std;

 void pattern_half_diamond_star_pattern(int N){
 	for(int i = 0; i < N; i++){
 		for(int j = 0; j <= i; j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
	 for(int i = 2; i <= N; i++){
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
	pattern_half_diamond_star_pattern(N);
	return 0;
	
}
