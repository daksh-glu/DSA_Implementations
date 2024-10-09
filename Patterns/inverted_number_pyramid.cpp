#include<iostream>
using namespace std;

 void pattern_inverted_number_pyramid(int N){
 	for(int i = N; i > 0; i--){
 		for(int j = 1; j <= i; j++){
 			cout<<j;
		 }
		 cout<<endl;
	 }
 }
int main(){
	
	int N;
	cout<<"Enter the number of rows : ";
	cin>>N;
	pattern_inverted_number_pyramid(N);
	return 0;
	
}
