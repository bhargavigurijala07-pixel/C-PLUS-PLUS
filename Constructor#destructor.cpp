#include<iostream>
using namespace std;
class Hotel{
	int roomNo;
	public:
		Hotel(int r){
			roomNo=r;
			cout<<"Room "<<roomNo<<"booked."<<endl;
		}
		~Hotel(){
			cout<<"Room:"<<roomNo<<"checked out."<<endl;
		}
};
int main(){
	cout<<"Guest checking in..."<<endl;
	
		Hotel r(101);
		cout<<"Guest staying..."<<endl;
	
	cout<<"Guest has left the room.."<<endl;
	return 0;
}
