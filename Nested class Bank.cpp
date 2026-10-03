#include<iostream>
using namespace std;
class Bank{
	string bankName;
	public:
		Bank(string name):bankName(name){}

	class Account{
	private:
		int accNumber;
		double balance;
	public:
			Account(int num,double bal){
		    	accNumber=num;
				balance=bal;
			}
				void deposit(double amount){
					balance+=amount;
					cout<<"Deposited:"<<amount<<endl;
				}
				void showDetails(){
					cout<<"Account No:"<<accNumber<<" | Balance:"<<balance<<endl;
					
				}
	};	
	void showBankName(){
		cout<<"Welcome to"<<" "<<bankName<<endl;
	}
};
int main() {
    Bank b("State Bank");
    b.showBankName();

    Bank::Account a(101, 5000);
    a.showDetails();

    a.deposit(2000);
    a.showDetails();

    return 0;
}
