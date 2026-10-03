#include<iostream>
using namespace std;
inline int square(int x){
	return x*x;
}
int main(){
	int n;
	cout<<"Enter any number:";
	cin>>n;
	cout<<"Square number is:"<<square(n);
}
