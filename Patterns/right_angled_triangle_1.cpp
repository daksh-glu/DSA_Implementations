#include<iostream>
using namespace std;

 void pattern_right_angled_triangle(int N){
 	for(int i = 0; i < N; i++){
 		for(int j = 0; j <= i; j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
 }
int main(){
	
	int N;
	cout<<"Enter the number of rows : ";
	cin>>N;
	pattern_right_angled_triangle(N);
	return 0;
	
}
