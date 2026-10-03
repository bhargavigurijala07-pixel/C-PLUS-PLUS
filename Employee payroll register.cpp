#include<iostream>
using namespace std;
class Employee{
	string name;
	int empid;
	double salary;
	public:
		void setData(string n,int id,double s){
			name=n;
			empid=id;
			salary=s;
		}
		void display(){
			cout<<empid<<" | "<<name<<" | "<<salary<<" | "<<endl;
		}
};
int main(){
	Employee e[3];
	e[0].setData("Ravi",101,34567);
	e[1].setData("Akash",102,800000);
	e[2].setData("Charan",103,987654);
	for(int i=0;i<3;i++){
		e[i].display();	}
	return 0;
}
