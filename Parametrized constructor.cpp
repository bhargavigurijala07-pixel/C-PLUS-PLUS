#include<iostream>
using namespace std;
class ClassName{
	int rollno;
	int marks;
	public:
		ClassName(int r,int m){
			rollno=r;
			marks=m;
		}
		void display(){
			cout<<"Roll number:"<<rollno<<endl;
			cout<<"Marks:"<<marks<<endl;
		}
};
int main(){
	ClassName s1(101,32);
	ClassName s2(102,54);
	ClassName s3(103,87);
    s1.display();
    s2.display();
    s3.display();
	return 0;
}
