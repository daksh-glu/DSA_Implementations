#include<iostream>
using namespace std;

 void pattern_right_angled_number_pyramid_1(int N){
 	for(int i = 1; i <= N; i++){
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
	pattern_right_angled_number_pyramid_1(N);
	return 0;
	
}
