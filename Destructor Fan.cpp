#include<iostream>
using namespace std;
class Fan{
	public:
		Fan(){
			cout<<"Fan turned ON"<<endl;
		}
		~Fan(){
			cout<<"Fan turned OFF"<<endl;
		}
};
int main(){
	cout<<"Room light switched on"<<endl;
	Fan f1;
	cout<<"Using the fan.."<<endl;
	return 0;
}
