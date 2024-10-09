#include<iostream>
using namespace std;

 void pattern_diamond_star(int N){
 	
 	for(int row = 1; row <= N; row++){
 		for(int space = N-row; space > 0; space--){
 			cout<<" ";
		 }
 		for(int half_column = 1; half_column <= row; half_column++){
 			cout<<"*";
		 }
		 for(int column = 2; column <= row; column++){
		 	cout<<"*";
		 }
		 cout<<endl;
	 }
	 //reverse star pyramid
	 
	 for(int row = N-1; row >= 1; row--){
 		for(int space = N-row; space > 0; space--){
 			cout<<" ";
		 }
 		for(int half_column = 1; half_column <= row; half_column++){
 			cout<<"*";
		 }
		 for(int column = 2; column <= row; column++){
		 	cout<<"*";
		 }
		 cout<<endl;
	 }
 }
int main(){
	
	int N;
	cout<<"Enter the number : ";
	cin>>N;
	pattern_diamond_star(N);
	return 0;
	
}
