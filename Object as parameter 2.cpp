#include<iostream>
using namespace std;
class Test{
	int a,b;
	public:
	void getData();
	void putData();
	Test sum(Test t);
};
void Test::getData(){
	cout<<"Enter a and b values:"<<endl;
	cin>>a>>b;
}
void Test::putData(){
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
Test Test::sum(Test t2){
	Test t3;
	t3.a=a+t2.a;
	t3.b=b+t2.b;
	return t3;
}
int main(){
	Test t1,t2,t3;
	t1.getData();
	t2.getData();
	t3=t1.sum(t2);
	t1.putData();
	t2.putData();
	cout<<"t3 Object in:"<<endl;
	t3.putData();
	return 0;
}
