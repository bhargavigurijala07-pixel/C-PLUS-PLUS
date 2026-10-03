#include<iostream>
using namespace std;
class Light{
	public:
		Light(){
			cout<<"Light ON"<<endl;
		}
		~Light(){
			cout<<"Light OFF"<<endl;
		}
};
int main(){
	cout<<"Entering room"<<endl;
	Light l1;
	cout<<"Using the light.."<<endl;
	return 0;
}
