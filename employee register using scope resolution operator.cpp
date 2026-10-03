#include<iostream>
using namespace std;
class Employee{
	int id;
	char name[30];
	public:
		void getData();
		void putData();
		
};
void Employee::getData(){
	cout<<"Enter employee id:"<<endl;
	cin>>id;
	cout<<"Enter employee name:"<<endl;
	cin>>name;
}
void Employee::putData(){
	cout<<"Employee id:"<<id<<endl;
	cout<<"Employee Name:"<<name<<endl;
}
int main(){
	Employee emp[30];
	int n;
	cout<<"Enter number of employees:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\nEmployee"<<i+1<<endl;
		emp[i].getData()
	}
	cout<<"\nEmployee Details:\n"<<endl;
	for(int i=0;i<n;i++){
		emp[i].putData();
}
return 0;
}
