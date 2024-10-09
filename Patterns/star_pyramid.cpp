#include<iostream>
using namespace std;

 void pattern_star_pyramid(int N){
 	
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
 }
int main(){
	
	int N;
	cout<<"Enter the number : ";
	cin>>N;
	pattern_star_pyramid(N);
	return 0;
	
}
