#include<iostream>
using namespace std;
class Employee{
	public:
		string name;
		int salary;
		void data(string n,int s){
			name=n;
			salary=s;
			}
			void display( ) {
				cout<<name<<" "<<"earns"<<" "<<salary<<endl;
			}

};
int main(){
	Employee emp[3];
	emp[0].data("Navya",500000);
	emp[1].data("Chaithanya",555555);
	emp[2].data("Naveen",450000);
	for(int i=0;i<3;i++){
		emp[i].display();
	}
	return 0;
}
