#include<iostream>
using namespace std;
class Rectangle{
	public:
		int length,width;
		Rectangle(int l,int w){
			length=l;
			width=w;
		}
		int area(){
			return length*width;
		}
};
int main()
{
	Rectangle r1(10,5);
	Rectangle r2(6,4);
	cout<<"Area:"<<r1.area()<<endl;
	cout<<"Area:"<<r2.area();
	return 0;
}
