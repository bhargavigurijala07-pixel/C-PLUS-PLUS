#include <iostream>
using namespace std;
class Show{
public:
    void display(int a){
        cout<<"Integer:"<< a <<endl;
    }
    void display(double b){
        cout<<"Double:"<<b<<endl;
    }

    void display(int a,int b) {
        cout<< "Two integers: " <<a<< b<<endl;
    }
};

int main() {
    Show s;

    s.display(5);
    s.display(4.765);
    s.display(100, 149);

    return 0;
}
